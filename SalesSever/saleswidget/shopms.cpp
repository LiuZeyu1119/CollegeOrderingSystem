#include "shopms.h"
#include "ui_shopms.h"

ShopMS::ShopMS(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ShopMS)
{
    ui->setupUi(this);

    setPushButter();

    m_operData =Oper_None;
    initWidgetUnits();
    on_pb_select_clicked();
}

ShopMS::~ShopMS()
{
    delete ui;
}

void ShopMS::setPushButter()
{
    ui->label_3->setStyleSheet("color:red;");
    ui->pb_delete->setIcon(QPixmap(":/ico/delete.jpg"));
    ui->pb_insert->setIcon(QPixmap(":/ico/insert.jpg"));
    ui->pb_save->setIcon(QPixmap(":/ico/save.jpg"));
    ui->pb_update->setIcon(QPixmap(":/ico/zhuxiao.jpg"));
    ui->pb_cancel->setIcon(QPixmap(":/ico/update.jpg"));
    ui->pb_select->setIcon(QPixmap(":/ico/select.jpg"));
}

void ShopMS::updateTableInfos(void)
{
    ui->tableWidget->clear();
    ui->tableWidget->setColumnCount(5);

    // set header lables
    QStringList headers;
    headers << "店铺编号" << "商家编号"  << "店铺名称" << "卖货类别" << "注册时间";
    ui->tableWidget->setHorizontalHeaderLabels(headers);
    ui->tableWidget->setRowCount(GlobalVars::g_shopInfoList->length());
    for(int i=0; i < GlobalVars::g_shopInfoList->length(); i++)
    {
        QTableWidgetItem *item = new QTableWidgetItem(GlobalVars::g_shopInfoList->at(i).getID());
        ui->tableWidget->setItem(i, 0, item);
        item = new QTableWidgetItem(GlobalVars::g_shopInfoList->at(i).getMerid());
        ui->tableWidget->setItem(i, 1, item);
        item = new QTableWidgetItem(GlobalVars::g_shopInfoList->at(i).getName());
        ui->tableWidget->setItem(i, 2, item);
        item = new QTableWidgetItem(GlobalVars::g_shopInfoList->at(i).getType());
        ui->tableWidget->setItem(i, 3, item);
        item = new QTableWidgetItem(GlobalVars::g_shopInfoList->at(i).getTime());
        ui->tableWidget->setItem(i, 4, item);
    }
}

void ShopMS::initWidgetUnits(void)
{
    ui->le_select->setEnabled(false);
    ui->pb_save->setEnabled(false);
}
void ShopMS::on_comboBox_currentIndexChanged(int index)
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

void ShopMS::on_tableWidget_clicked(const QModelIndex &index)
{
    m_row = index.row();
}

void ShopMS::on_pb_select_clicked()
{
    if(m_searchCond == Search_ID)
    {
        ExecSQL::searchShopInfoForID(ui->le_select->text());
    }else if(m_searchCond == Search_Name)
    {
        ExecSQL::searchShopInfoForName(ui->le_select->text());
    }else if(m_searchCond == Search_Merid)
    {
        ExecSQL::searchShopInfoForMerid(ui->le_select->text());
    }else if(m_searchCond == Search_Type)
    {
        ExecSQL::searchShopInfoForType(ui->le_select->text());
    }else
    {
        ExecSQL::searchAllShopInfos();
    }

    updateTableInfos();
}

void ShopMS::on_pb_update_clicked()
{
    m_operData = Oper_Mdy;
    ui->tableWidget->setEnabled(true);
    ui->pb_save->setEnabled(true);
}

void ShopMS::on_pb_delete_clicked()
{
    m_operData = Oper_Del;
    ui->tableWidget->setEnabled(true);
    ui->pb_save->setEnabled(true);
}

void ShopMS::on_pb_insert_clicked()
{
    m_operData = Oper_Add;
    ui->tableWidget->setEnabled(true);
    ShopInfo info("NULL", "NULL", "NULL", "NULL", "NULL");
    GlobalVars::g_shopInfoList->append(info);
    updateTableInfos();
    ui->pb_save->setEnabled(true);
}

void ShopMS::on_pb_cancel_clicked()
{
    ui->tableWidget->setEnabled(true);
    ui->pb_save->setEnabled(false);
}

void ShopMS::on_pb_save_clicked()
{
    if(m_operData == Oper_Mdy)
    {
        QString str_id = ui->tableWidget->item(m_row, 0)->text();
        QString str_merid = ui->tableWidget->item(m_row, 1)->text();
        QString str_name = ui->tableWidget->item(m_row, 2)->text();
        QString str_type = ui->tableWidget->item(m_row, 3)->text();
        ExecSQL::modifyShopInfoForMerid(str_id, str_merid);
        ExecSQL::modifyShopInfoForName(str_id, str_name);
        ExecSQL::modifyShopInfoForType(str_id, str_type);
    }else if(m_operData == Oper_Del)
    {
        QString str_id = ui->tableWidget->item(m_row, 0)->text();
        ExecSQL::removeShopInfo(str_id);
    }else if(m_operData == Oper_Add)
    {
        QString str_id = ui->tableWidget->item(m_row, 0)->text();
        QString str_merid = ui->tableWidget->item(m_row, 1)->text();
        QString str_name = ui->tableWidget->item(m_row, 2)->text();
        QString str_type = ui->tableWidget->item(m_row, 3)->text();
        QString str_time = ui->tableWidget->item(m_row, 4)->text();
        ShopInfo info(str_id, str_merid, str_name, str_type, str_time);
        ExecSQL::addNewShopInfo(info);
    }

    on_pb_cancel_clicked();
    on_pb_select_clicked();
}
