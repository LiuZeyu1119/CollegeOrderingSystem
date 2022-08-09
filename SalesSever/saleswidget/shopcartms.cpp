#include "shopcartms.h"
#include "ui_shopcartms.h"

ShopcartMS::ShopcartMS(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ShopcartMS)
{
    ui->setupUi(this);

    setPushButter();

    m_searchCond = Search_None;
    m_operData = Oper_None;
    initWidgetUnits();
    on_pb_select_clicked();
}

ShopcartMS::~ShopcartMS()
{
    delete ui;
}

void ShopcartMS::setPushButter()
{
    ui->label_3->setStyleSheet("color:red;");
    ui->pb_delete->setIcon(QPixmap(":/ico/delete.jpg"));
    ui->pb_insert->setIcon(QPixmap(":/ico/insert.jpg"));
    ui->pb_save->setIcon(QPixmap(":/ico/save.jpg"));
    ui->pb_update->setIcon(QPixmap(":/ico/zhuxiao.jpg"));
    ui->pb_cancel->setIcon(QPixmap(":/ico/update.jpg"));
    ui->pb_select->setIcon(QPixmap(":/ico/select.jpg"));
}

void ShopcartMS::on_comboBox_currentIndexChanged(int index)
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

void ShopcartMS::updateTableInfos(void)
{
    ui->tableWidget->clear();
    ui->tableWidget->setColumnCount(4);

    // set header lables
    QStringList headers;
    headers << "顾客账号" << "商品编号"  << "规格号" << "商品数量";
    ui->tableWidget->setHorizontalHeaderLabels(headers);
    ui->tableWidget->setRowCount(GlobalVars::g_shopcartInfoList->length());
    for(int i=0; i < GlobalVars::g_shopcartInfoList->length(); i++)
    {
        QTableWidgetItem *item = new QTableWidgetItem(GlobalVars::g_shopcartInfoList->at(i).getCliid());
        ui->tableWidget->setItem(i, 0, item);
        item = new QTableWidgetItem(GlobalVars::g_shopcartInfoList->at(i).getComid());
        ui->tableWidget->setItem(i, 1, item);
        item = new QTableWidgetItem(GlobalVars::g_shopcartInfoList->at(i).getSoid());
        ui->tableWidget->setItem(i, 2, item);
        item = new QTableWidgetItem(GlobalVars::g_shopcartInfoList->at(i).getNum());
        ui->tableWidget->setItem(i, 3, item);
    }
}

void ShopcartMS::initWidgetUnits(void)
{
    ui->le_select->setEnabled(false);
    ui->pb_save->setEnabled(false);
}

void ShopcartMS::on_tableWidget_clicked(const QModelIndex &index)
{
    m_row = index.row();
}

void ShopcartMS::on_pb_select_clicked()
{
    if(m_searchCond == Search_Comid)
    {
        ExecSQL::searchShopcartInfoForComid(ui->le_select->text());
    }else if(m_searchCond == Search_Cliid)
    {
        ExecSQL::searchShopcartInfoForCliid(ui->le_select->text());
    }else
    {
        ExecSQL::searchAllShopcartInfos();
    }

    updateTableInfos();
}

void ShopcartMS::on_pb_update_clicked()
{
    m_operData = Oper_Mdy;
    ui->tableWidget->setEnabled(true);
    ui->pb_save->setEnabled(true);
}

void ShopcartMS::on_pb_delete_clicked()
{
    m_operData = Oper_Del;
    ui->tableWidget->setEnabled(true);
    ui->pb_save->setEnabled(true);
}

void ShopcartMS::on_pb_insert_clicked()
{
    m_operData = Oper_Add;
    ui->tableWidget->setEnabled(true);
    ShopcartInfo info("NULL", "NULL", "NULL", "NULL");
    GlobalVars::g_shopcartInfoList->append(info);
    updateTableInfos();
    ui->pb_save->setEnabled(true);
}

void ShopcartMS::on_pb_cancel_clicked()
{
    ui->tableWidget->setEnabled(true);
    ui->pb_save->setEnabled(false);
}

void ShopcartMS::on_pb_save_clicked()
{
    if(m_operData == Oper_Mdy)
    {
        QString str_cliid = ui->tableWidget->item(m_row, 0)->text();
        QString str_comid = ui->tableWidget->item(m_row, 1)->text();
        QString str_soid = ui->tableWidget->item(m_row, 2)->text();
        QString str_num = ui->tableWidget->item(m_row, 3)->text();
        ExecSQL::modifyShopcartInfoForSoid(str_cliid, str_comid, str_soid);
        ExecSQL::modifyShopcartInfoForNum(str_cliid, str_comid, str_num);
    }else if(m_operData == Oper_Del)
    {
        QString str_id = ui->tableWidget->item(m_row, 0)->text();
        QString str_comid = ui->tableWidget->item(m_row, 1)->text();
        ExecSQL::removeShopcartInfo(str_id, str_comid);
    }else if(m_operData == Oper_Add)
    {
        QString str_cliid = ui->tableWidget->item(m_row, 0)->text();
        QString str_comid = ui->tableWidget->item(m_row, 1)->text();
        QString str_soid = ui->tableWidget->item(m_row, 2)->text();
        QString str_num = ui->tableWidget->item(m_row, 3)->text();
        ShopcartInfo info(str_cliid, str_comid, str_soid, str_num);
        ExecSQL::addNewShopcartInfo(info);
    }

    on_pb_cancel_clicked();
    on_pb_select_clicked();
}
