#include "dialogms.h"
#include "ui_dialogms.h"

DialogMS::DialogMS(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DialogMS)
{
    ui->setupUi(this);

    setPushButter();

    m_searchCond = Search_None;
    m_operData = Oper_None;
    initWidgetUnits();
    on_pb_select_clicked();
}

DialogMS::~DialogMS()
{
    delete ui;
}

void DialogMS::setPushButter()
{
    ui->label_3->setStyleSheet("color:red;");
    ui->pb_delete->setIcon(QPixmap(":/ico/delete.jpg"));
    ui->pb_insert->setIcon(QPixmap(":/ico/insert.jpg"));
    ui->pb_save->setIcon(QPixmap(":/ico/save.jpg"));
    ui->pb_update->setIcon(QPixmap(":/ico/zhuxiao.jpg"));
    ui->pb_cancel->setIcon(QPixmap(":/ico/update.jpg"));
    ui->pb_select->setIcon(QPixmap(":/ico/select.jpg"));
}

void DialogMS::on_comboBox_currentIndexChanged(int index)
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

void DialogMS::on_tableWidget_clicked(const QModelIndex &index)
{
    m_row = index.row();
}

void DialogMS::updateTableInfos(void)
{
    ui->tableWidget->clear();
    ui->tableWidget->setColumnCount(5);

    // set header lables
    QStringList headers;
    headers << "商家编号 " << "顾客账号" << "商家说：" << "顾客说：" << "对话时间";
    ui->tableWidget->setHorizontalHeaderLabels(headers);
    ui->tableWidget->setRowCount(GlobalVars::g_dialogInfoList->length());
    for(int i=0; i < GlobalVars::g_dialogInfoList->length(); i++)
    {
        QTableWidgetItem *item = new QTableWidgetItem(GlobalVars::g_dialogInfoList->at(i).getMerid());
        ui->tableWidget->setItem(i, 0, item);
        item = new QTableWidgetItem(GlobalVars::g_dialogInfoList->at(i).getCliid());
        ui->tableWidget->setItem(i, 1, item);
        item = new QTableWidgetItem(GlobalVars::g_dialogInfoList->at(i).getMersay());
        ui->tableWidget->setItem(i, 2, item);
        item = new QTableWidgetItem(GlobalVars::g_dialogInfoList->at(i).getClisay());
        ui->tableWidget->setItem(i, 3, item);
        item = new QTableWidgetItem(GlobalVars::g_dialogInfoList->at(i).getTime());
        ui->tableWidget->setItem(i, 4, item);
    }
}

void DialogMS::initWidgetUnits(void)
{
    ui->le_select->setEnabled(false);
    ui->pb_save->setEnabled(false);
}

void DialogMS::on_pb_select_clicked()
{

    if(m_searchCond == Search_Merid)
    {
        ExecSQL::searchDialogInfoForMerid(ui->le_select->text());
    }else if(m_searchCond == Search_Cliid)
    {
        ExecSQL::searchDialogInfoForCliid(ui->le_select->text());
    }else if(m_searchCond == Search_Time)
    {
        ExecSQL::searchDialogInfoForTime(ui->le_select->text());
    }else
    {
        ExecSQL::searchAllDialogInfos();
    }

    updateTableInfos();
}

void DialogMS::on_pb_update_clicked()
{
    m_operData = Oper_Mdy;
    ui->tableWidget->setEnabled(true);
    ui->pb_save->setEnabled(true);
}

void DialogMS::on_pb_delete_clicked()
{
    m_operData = Oper_Del;
    ui->tableWidget->setEnabled(true);
    ui->pb_save->setEnabled(true);
}

void DialogMS::on_pb_insert_clicked()
{
    m_operData = Oper_Add;
    ui->tableWidget->setEnabled(true);
    DialogInfo info("NULL", "NULL", "NULL", "NULL", "NULL");
    GlobalVars::g_dialogInfoList->append(info);
    updateTableInfos();
    ui->pb_save->setEnabled(true);
}

void DialogMS::on_pb_cancel_clicked()
{
    ui->tableWidget->setEnabled(true);
    ui->pb_save->setEnabled(false);
}

void DialogMS::on_pb_save_clicked()
{
    if(m_operData == Oper_Del)
    {
        QString str_id = ui->tableWidget->item(m_row, 0)->text();
        ExecSQL::removeFormInfo(str_id);
    }else if(m_operData == Oper_Add)
    {
        QString str_merid = ui->tableWidget->item(m_row, 0)->text();
        QString str_cliid = ui->tableWidget->item(m_row, 1)->text();
        QString str_mer = ui->tableWidget->item(m_row, 2)->text();
        QString str_cli = ui->tableWidget->item(m_row, 3)->text();
        QString str_time = ui->tableWidget->item(m_row, 4)->text();
        DialogInfo info(str_merid, str_cliid, str_mer, str_cli, str_time);
        ExecSQL::addNewDialogInfo(info);
    }

    on_pb_cancel_clicked();
    on_pb_select_clicked();
}
