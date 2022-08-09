#include "clientms.h"
#include "ui_clientms.h"


ClientMS::ClientMS(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ClientMS)
{
    ui->setupUi(this);

    setPushButter();

    m_searchCond = Search_None;
    initWidgetUnits();
    on_pb_select_clicked();
}

ClientMS::~ClientMS()
{
    delete ui;
}

void ClientMS::setPushButter()
{
    ui->label_3->setStyleSheet("color:red;");

    ui->pb_delete->setIcon(QPixmap(":/ico/delete.jpg"));
    ui->pb_insert->setIcon(QPixmap(":/ico/insert.jpg"));
    ui->pb_save->setIcon(QPixmap(":/ico/save.jpg"));
    ui->pb_update->setIcon(QPixmap(":/ico/zhuxiao.jpg"));
    ui->pb_cancel->setIcon(QPixmap(":/ico/update.jpg"));
    ui->pb_select->setIcon(QPixmap(":/ico/select.jpg"));
}

void ClientMS::updateTableInfos(void)
{
    ui->tableWidget->clear();
    ui->tableWidget->setColumnCount(6);

    // set header lables
    QStringList headers;
    headers << "顾客账号" << "头像编号"  << "姓名" << "联系方式" << "注册时间" << "顾客地址";
    ui->tableWidget->setHorizontalHeaderLabels(headers);
    ui->tableWidget->setRowCount(GlobalVars::g_clientInfoList->length());
    for(int i=0; i < GlobalVars::g_clientInfoList->length(); i++)
    {
        QTableWidgetItem *item = new QTableWidgetItem(GlobalVars::g_clientInfoList->at(i).getID());
        ui->tableWidget->setItem(i, 0, item);
        item = new QTableWidgetItem(GlobalVars::g_clientInfoList->at(i).getImid());
        ui->tableWidget->setItem(i, 1, item);
        item = new QTableWidgetItem(GlobalVars::g_clientInfoList->at(i).getName());
        ui->tableWidget->setItem(i, 2, item);
        item = new QTableWidgetItem(GlobalVars::g_clientInfoList->at(i).getPhone());
        ui->tableWidget->setItem(i, 3, item);
        item = new QTableWidgetItem(GlobalVars::g_clientInfoList->at(i).getTime());
        ui->tableWidget->setItem(i, 4, item);
        item = new QTableWidgetItem(GlobalVars::g_clientInfoList->at(i).getSite());
        ui->tableWidget->setItem(i, 5, item);
    }
}

void ClientMS::initWidgetUnits(void)
{
    ui->le_select->setEnabled(false);
    ui->pb_save->setEnabled(false);
}
void ClientMS::on_comboBox_currentIndexChanged(int index)
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

void ClientMS::on_tableWidget_clicked(const QModelIndex &index)
{
    m_row = index.row();
    qDebug() << m_row;
}

void ClientMS::on_pb_update_clicked()
{
    m_operData = Oper_Mdy;
    ui->tableWidget->setEnabled(true);
    ui->pb_save->setEnabled(true);
}

void ClientMS::on_pb_delete_clicked()
{
    m_operData = Oper_Del;
    ui->tableWidget->setEnabled(true);
    ui->pb_save->setEnabled(true);
}

void ClientMS::on_pb_insert_clicked()
{
    m_operData = Oper_Add;
    ui->tableWidget->setEnabled(true);
    ClientInfo info("NULL", "NULL", "NULL", "NULL", "NULL", "NULL");
    GlobalVars::g_clientInfoList->append(info);
    updateTableInfos();
    ui->pb_save->setEnabled(true);
}

void ClientMS::on_pb_cancel_clicked()
{
    ui->tableWidget->setEnabled(true);
    ui->pb_save->setEnabled(false);
}

void ClientMS::on_pb_save_clicked()
{
    if(m_operData == Oper_Mdy)
    {
        QString str_id = ui->tableWidget->item(m_row, 0)->text();
        QString str_name = ui->tableWidget->item(m_row, 2)->text();
        QString str_phone = ui->tableWidget->item(m_row, 3)->text();
        QString str_site = ui->tableWidget->item(m_row, 5)->text();
        ExecSQL::modifyClientInfoForName(str_id, str_name);
        ExecSQL::modifyClientInfoForPhone(str_id, str_phone);
        ExecSQL::modifyClientInfoForSite(str_id, str_site);
    }else if(m_operData == Oper_Del)
    {
        QString str_id = ui->tableWidget->item(m_row, 0)->text();
        ExecSQL::removeClientInfo(str_id);
    }else if(m_operData == Oper_Add)
    {
        QString str_id = ui->tableWidget->item(m_row, 0)->text();
        QString str_imid = ui->tableWidget->item(m_row, 1)->text();
        QString str_name = ui->tableWidget->item(m_row, 2)->text();
        QString str_phone = ui->tableWidget->item(m_row, 3)->text();
        QString str_time = ui->tableWidget->item(m_row, 4)->text();
        QString str_site = ui->tableWidget->item(m_row, 5)->text();
        ClientInfo info(str_id, str_imid, str_name, str_phone, str_time, str_site);
        ExecSQL::addNewClientInfo(info);
    }

    on_pb_cancel_clicked();
    on_pb_select_clicked();
}

void ClientMS::on_pb_select_clicked()
{

    if(m_searchCond == Search_ID)
    {
        ExecSQL::searchClientInfoForID(ui->le_select->text());
    }else if(m_searchCond == Search_Name)
    {
        ExecSQL::searchClientInfoForName(ui->le_select->text());
    }else if(m_searchCond == Search_Phone)
    {
        ExecSQL::searchClientInfoForPhone(ui->le_select->text());
    }else if(m_searchCond == Search_Site)
    {
        ExecSQL::searchClientInfoForSite(ui->le_select->text());
    }else
    {
        ExecSQL::searchAllClientInfos();
    }

    updateTableInfos();
}
