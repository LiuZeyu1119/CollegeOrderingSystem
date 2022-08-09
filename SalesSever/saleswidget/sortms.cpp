#include "sortms.h"
#include "ui_sortms.h"

SortMS::SortMS(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SortMS)
{
    ui->setupUi(this);

    setPushButter();

    m_operData = Oper_None;
    initWidgetUnits();
    on_pb_select_clicked();
}

SortMS::~SortMS()
{
    delete ui;
}

void SortMS::setPushButter()
{
    ui->label_3->setStyleSheet("color:red;");
    ui->pb_delete->setIcon(QPixmap(":/ico/delete.jpg"));
    ui->pb_insert->setIcon(QPixmap(":/ico/insert.jpg"));
    ui->pb_save->setIcon(QPixmap(":/ico/save.jpg"));
    ui->pb_update->setIcon(QPixmap(":/ico/zhuxiao.jpg"));
    ui->pb_cancel->setIcon(QPixmap(":/ico/update.jpg"));
    ui->pb_select->setIcon(QPixmap(":/ico/select.jpg"));
}

void SortMS::on_comboBox_currentIndexChanged(int index)
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

void SortMS::updateTableInfos(void)
{
    ui->tableWidget->clear();
    ui->tableWidget->setColumnCount(5);

    // set header lables
    QStringList headers;
    headers << "规格号" << "商品编号"  << "调料" << "口味" << "库存";
    ui->tableWidget->setHorizontalHeaderLabels(headers);
    ui->tableWidget->setRowCount(GlobalVars::g_sortInfoList->length());
    for(int i=0; i < GlobalVars::g_sortInfoList->length(); i++)
    {
        QTableWidgetItem *item = new QTableWidgetItem(GlobalVars::g_sortInfoList->at(i).getID());
        ui->tableWidget->setItem(i, 0, item);
        item = new QTableWidgetItem(GlobalVars::g_sortInfoList->at(i).getComid());
        ui->tableWidget->setItem(i, 1, item);
        item = new QTableWidgetItem(GlobalVars::g_sortInfoList->at(i).getBar());
        ui->tableWidget->setItem(i, 2, item);
        item = new QTableWidgetItem(GlobalVars::g_sortInfoList->at(i).getColour());
        ui->tableWidget->setItem(i, 3, item);
        item = new QTableWidgetItem(GlobalVars::g_sortInfoList->at(i).getNum());
        ui->tableWidget->setItem(i, 4, item);
    }
}

void SortMS::initWidgetUnits(void)
{
    ui->le_select->setEnabled(false);
    ui->pb_save->setEnabled(false);
}

void SortMS::on_tableWidget_clicked(const QModelIndex &index)
{
    m_row = index.row();
}

void SortMS::on_pb_update_clicked()
{
    m_operData = Oper_Mdy;
    ui->tableWidget->setEnabled(true);
    ui->pb_save->setEnabled(true);
}

void SortMS::on_pb_delete_clicked()
{
    m_operData = Oper_Del;
    ui->tableWidget->setEnabled(true);
    ui->pb_save->setEnabled(true);
}

void SortMS::on_pb_insert_clicked()
{
    m_operData = Oper_Add;
    ui->tableWidget->setEnabled(true);
    SortInfo info("NULL", "NULL", "NULL", "NULL", "NULL");
    GlobalVars::g_sortInfoList->append(info);
    updateTableInfos();
    ui->pb_save->setEnabled(true);
}

void SortMS::on_pb_cancel_clicked()
{
    ui->tableWidget->setEnabled(true);
    ui->pb_save->setEnabled(false);
}

void SortMS::on_pb_save_clicked()
{
    if(m_operData == Oper_Mdy)
    {
        QString str_id = ui->tableWidget->item(m_row, 0)->text();
        QString str_comid = ui->tableWidget->item(m_row, 1)->text();
        QString str_bar = ui->tableWidget->item(m_row, 2)->text();
        QString str_colour = ui->tableWidget->item(m_row, 3)->text();
        QString str_num = ui->tableWidget->item(m_row, 4)->text();
        ExecSQL::modifySortInfoForBar(str_id, str_bar);
        ExecSQL::modifySortInfoForColour(str_id, str_colour);
        ExecSQL::modifySortInfoForNum(str_id, str_num);
    }else if(m_operData == Oper_Del)
    {
        QString str_id = ui->tableWidget->item(m_row, 0)->text();
        ExecSQL::removeShopInfo(str_id);
    }else if(m_operData == Oper_Add)
    {
        QString str_id = ui->tableWidget->item(m_row, 0)->text();
        QString str_comid = ui->tableWidget->item(m_row, 1)->text();
        QString str_bar = ui->tableWidget->item(m_row, 2)->text();
        QString str_colour = ui->tableWidget->item(m_row, 3)->text();
        QString str_num = ui->tableWidget->item(m_row, 4)->text();
        SortInfo info(str_id, str_comid, str_bar, str_colour, str_num);
        ExecSQL::addNewSortInfo(info);
    }

    on_pb_cancel_clicked();
    on_pb_select_clicked();
}

void SortMS::on_pb_select_clicked()
{
    if(m_searchCond == Search_ID)
    {
        ExecSQL::searchSortInfoForID(ui->le_select->text());
    }else if(m_searchCond == Search_ID)
    {
        ExecSQL::searchSortInfoForComid(ui->le_select->text());
    }else if(m_searchCond == Search_Comid)
    {
        ExecSQL::searchSortInfoForBar(ui->le_select->text());
    }else if(m_searchCond == Search_Bar)
    {
        ExecSQL::searchSortInfoForColour(ui->le_select->text());
    }else if(m_searchCond == Search_Num)
    {
        ExecSQL::searchSortInfoForNum(ui->le_select->text());
    } else
    {
        ExecSQL::searchAllSortInfos();
    }

    updateTableInfos();
}
