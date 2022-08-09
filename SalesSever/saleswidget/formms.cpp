#include "formms.h"
#include "ui_formms.h"

FormMS::FormMS(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormMS)
{
    ui->setupUi(this);

    setPushButter();

    m_searchCond = Search_None;
    m_operData =Oper_None;
    initWidgetUnits();
    on_pb_select_clicked();
}

FormMS::~FormMS()
{
    delete ui;
}

void FormMS::setPushButter()
{
    ui->label_3->setStyleSheet("color:red;");
    ui->pb_select->setIcon(QPixmap(":/ico/select.jpg"));
    ui->pb_delete->setIcon(QPixmap(":/ico/delete.jpg"));
    ui->pb_insert->setIcon(QPixmap(":/ico/insert.jpg"));
    ui->pb_save->setIcon(QPixmap(":/ico/save.jpg"));
    ui->pb_update->setIcon(QPixmap(":/ico/zhuxiao.jpg"));
    ui->pb_cancel->setIcon(QPixmap(":/ico/update.jpg"));
}

void FormMS::on_comboBox_currentIndexChanged(int index)
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

void FormMS::on_tableWidget_clicked(const QModelIndex &index)
{
    m_row = index.row();
}

void FormMS::updateTableInfos(void)
{
    ui->tableWidget->clear();
    ui->tableWidget->setColumnCount(6);

    // set header lables
    QStringList headers;
    headers << "订单编号" << "商品编号"  << "顾客账号" << "规格号" << "订单时间" << "商品数量";
    ui->tableWidget->setHorizontalHeaderLabels(headers);
    ui->tableWidget->setRowCount(GlobalVars::g_formInfoList->length());
    for(int i=0; i < GlobalVars::g_formInfoList->length(); i++)
    {
        QTableWidgetItem *item = new QTableWidgetItem(GlobalVars::g_formInfoList->at(i).getID());
        ui->tableWidget->setItem(i, 0, item);
        item = new QTableWidgetItem(GlobalVars::g_formInfoList->at(i).getComid());
        ui->tableWidget->setItem(i, 1, item);
        item = new QTableWidgetItem(GlobalVars::g_formInfoList->at(i).getCliid());
        ui->tableWidget->setItem(i, 2, item);
        item = new QTableWidgetItem(GlobalVars::g_formInfoList->at(i).getSoid());
        ui->tableWidget->setItem(i, 3, item);
        item = new QTableWidgetItem(GlobalVars::g_formInfoList->at(i).getTime());
        ui->tableWidget->setItem(i, 4, item);
        item = new QTableWidgetItem(GlobalVars::g_formInfoList->at(i).getNum());
        ui->tableWidget->setItem(i, 5, item);
    }
}

void FormMS::initWidgetUnits(void)
{
    ui->le_select->setEnabled(false);
    ui->pb_save->setEnabled(false);
}

void FormMS::on_pb_select_clicked()
{
    if(m_searchCond == Search_ID)
    {
        ExecSQL::searchFormInfoForID(ui->le_select->text());
    }else if(m_searchCond == Search_Comid)
    {
        ExecSQL::searchFormInfoForComid(ui->le_select->text());
    }else if(m_searchCond == Search_Cliid)
    {
        ExecSQL::searchFormInfoForCliid(ui->le_select->text());
    }else if(m_searchCond == Search_Time)
    {
        ExecSQL::searchFormInfoForTime(ui->le_select->text());
    }else
    {
        ExecSQL::searchAllFormInfos();
    }

    updateTableInfos();
}

void FormMS::on_pb_update_clicked()
{
    m_operData = Oper_Mdy;
    ui->tableWidget->setEnabled(true);
    ui->pb_save->setEnabled(true);
}

void FormMS::on_pb_delete_clicked()
{
    m_operData = Oper_Del;
    ui->tableWidget->setEnabled(true);
    ui->pb_save->setEnabled(true);
}

void FormMS::on_pb_insert_clicked()
{
    m_operData = Oper_Add;
    ui->tableWidget->setEnabled(true);
    FormInfo info("NULL", "NULL", "NULL", "NULL", "NULL", "NULL");
    GlobalVars::g_formInfoList->append(info);
    updateTableInfos();
    ui->pb_save->setEnabled(true);
}

void FormMS::on_pb_cancel_clicked()
{
    ui->tableWidget->setEnabled(true);
    ui->pb_save->setEnabled(false);
}

void FormMS::on_pb_save_clicked()
{
    if(m_operData == Oper_Mdy)
    {
        QString str_id = ui->tableWidget->item(m_row, 0)->text();
        QString str_comid = ui->tableWidget->item(m_row, 1)->text();
        QString str_soid = ui->tableWidget->item(m_row, 3)->text();
        QString str_num = ui->tableWidget->item(m_row, 5)->text();
        ExecSQL::modifyFormInfoForComid(str_id, str_comid);
        ExecSQL::modifyFormInfoForSoid(str_id, str_soid);
        ExecSQL::modifyFormInfoForNum(str_id, str_num);
    }else if(m_operData == Oper_Del)
    {
        QString str_id = ui->tableWidget->item(m_row, 0)->text();
        ExecSQL::removeFormInfo(str_id);
    }else if(m_operData == Oper_Add)
    {
        QString str_id = ui->tableWidget->item(m_row, 0)->text();
        QString str_comid = ui->tableWidget->item(m_row, 1)->text();
        QString str_cliid = ui->tableWidget->item(m_row, 2)->text();
        QString str_soid = ui->tableWidget->item(m_row, 3)->text();
        QString str_time = ui->tableWidget->item(m_row, 4)->text();
        QString str_num = ui->tableWidget->item(m_row, 5)->text();
        FormInfo info(str_id, str_comid, str_cliid, str_soid, str_time, str_num);
        ExecSQL::addNewFormInfo(info);
    }

    on_pb_cancel_clicked();
    on_pb_select_clicked();
}
