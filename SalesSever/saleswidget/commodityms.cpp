#include "commodityms.h"
#include "ui_commodityms.h"

CommodityMS::CommodityMS(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CommodityMS)
{
    ui->setupUi(this);

    setPushButter();

    m_operData = Oper_None;
    initWidgetUnits();
    on_pb_select_clicked();
}

CommodityMS::~CommodityMS()
{
    delete ui;
}

void CommodityMS::setPushButter()
{
    ui->label_3->setStyleSheet("color:red;");
    ui->pb_delete->setIcon(QPixmap(":/ico/delete.jpg"));
    ui->pb_insert->setIcon(QPixmap(":/ico/insert.jpg"));
    ui->pb_save->setIcon(QPixmap(":/ico/save.jpg"));
    ui->pb_update->setIcon(QPixmap(":/ico/zhuxiao.jpg"));
    ui->pb_cancel->setIcon(QPixmap(":/ico/update.jpg"));
    ui->pb_select->setIcon(QPixmap(":/ico/select.jpg"));
}

void CommodityMS::on_comboBox_currentIndexChanged(int index)
{
    m_searchCond = index;
    if(m_searchCond == Search_None)
    {
        ui->le_select->setEnabled(false);
    }else
    {
        ui->le_select->setEnabled(true);
    }
}

void CommodityMS::updateTableInfos(void)
{
    ui->tableWidget->clear();
    ui->tableWidget->setColumnCount(6);

    // set header lables
    QStringList headers;
    headers << "商品编号" << "店铺编号"  << "头像编号" << "商品名称" << "商品售价" << "类别";
    ui->tableWidget->setHorizontalHeaderLabels(headers);
    ui->tableWidget->setRowCount(GlobalVars::g_commodityInfoList->length());
    for(int i=0; i < GlobalVars::g_commodityInfoList->length(); i++)
    {
        QTableWidgetItem *item = new QTableWidgetItem(GlobalVars::g_commodityInfoList->at(i).getID());
        ui->tableWidget->setItem(i, 0, item);
        item = new QTableWidgetItem(GlobalVars::g_commodityInfoList->at(i).getShid());
        ui->tableWidget->setItem(i, 1, item);
        item = new QTableWidgetItem(GlobalVars::g_commodityInfoList->at(i).getImid());
        ui->tableWidget->setItem(i, 2, item);
        item = new QTableWidgetItem(GlobalVars::g_commodityInfoList->at(i).getName());
        ui->tableWidget->setItem(i, 3, item);
        item = new QTableWidgetItem(GlobalVars::g_commodityInfoList->at(i).getSprice());
        ui->tableWidget->setItem(i, 4, item);
        item = new QTableWidgetItem(GlobalVars::g_commodityInfoList->at(i).getSex());
        ui->tableWidget->setItem(i, 5, item);
    }
}

void CommodityMS::initWidgetUnits(void)
{
    ui->le_select->setEnabled(false);
    ui->pb_save->setEnabled(false);
}

void CommodityMS::on_tableWidget_clicked(const QModelIndex &index)
{
    m_row = index.row();
}

void CommodityMS::on_pb_select_clicked()
{
    if(m_searchCond == Search_ID)
    {
        ExecSQL::searchCommodityInfoForID(ui->le_select->text());
    }else if(m_searchCond == Search_Name)
    {
        ExecSQL::searchCommodityInfoForName(ui->le_select->text());
    }else if(m_searchCond == Search_Shid)
    {
        ExecSQL::searchCommodityInfoForShid(ui->le_select->text());
    }else if(m_searchCond == Search_Sex)
    {
        ExecSQL::searchCommodityInfoForSex(ui->le_select->text());
    }
    else if(m_searchCond == Search_Sprice)
    {
        ExecSQL::searchCommodityInfoForSprice(ui->le_select->text());
    }else
    {
        ExecSQL::searchAllCommodityInfos();
    }

    updateTableInfos();
}

void CommodityMS::on_pb_update_clicked()
{
    m_operData = Oper_Mdy;
    ui->tableWidget->setEnabled(true);
    ui->pb_save->setEnabled(true);
}

void CommodityMS::on_pb_delete_clicked()
{
    m_operData = Oper_Del;
    ui->tableWidget->setEnabled(true);
    ui->pb_save->setEnabled(true);
}

void CommodityMS::on_pb_insert_clicked()
{
    m_operData = Oper_Add;
    ui->tableWidget->setEnabled(true);
    CommodityInfo info("NULL", "NULL", "NULL", "NULL", "NULL", "NULL");
    GlobalVars::g_commodityInfoList->append(info);
    updateTableInfos();
    ui->pb_save->setEnabled(true);
}

void CommodityMS::on_pb_cancel_clicked()
{
    ui->tableWidget->setEnabled(true);
    ui->pb_save->setEnabled(false);
}

void CommodityMS::on_pb_save_clicked()
{
    if(m_operData == Oper_Mdy)
    {
        QString str_id = ui->tableWidget->item(m_row, 0)->text();
        QString str_name = ui->tableWidget->item(m_row, 3)->text();
        QString str_sprice = ui->tableWidget->item(m_row, 4)->text();
        QString str_sex = ui->tableWidget->item(m_row, 5)->text();
        ExecSQL::modifyCommodityInfoForName(str_id, str_name);
        ExecSQL::modifyCommodityInfoForSprice(str_id, str_sprice);
        ExecSQL::modifyCommodityInfoForSex(str_id, str_sex);
    }else if(m_operData == Oper_Del)
    {
        QString str_id = ui->tableWidget->item(m_row, 0)->text();
        ExecSQL::removeCommodityInfo(str_id);
    }else if(m_operData == Oper_Add)
    {
        QString str_id = ui->tableWidget->item(m_row, 0)->text();
        QString str_shid = ui->tableWidget->item(m_row, 1)->text();
        QString str_imid = ui->tableWidget->item(m_row, 2)->text();
        QString str_name = ui->tableWidget->item(m_row, 3)->text();
        QString str_sprice = ui->tableWidget->item(m_row, 4)->text();
        QString str_sex = ui->tableWidget->item(m_row, 5)->text();
        CommodityInfo info(str_id, str_shid, str_imid, str_name, str_sprice, str_sex);
        ExecSQL::addNewCommodityInfo(info);
    }

    on_pb_cancel_clicked();
    on_pb_select_clicked();
}
