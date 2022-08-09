#include "userms.h"
#include "ui_userms.h"
#include <QTableWidgetItem>

UserMS::UserMS(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UserMS)
{
    ui->setupUi(this);

    setPushButter();


    m_operData = Oper_None;
    m_searchCond = Search_None;

    initWidgetUnits();
    on_pb_select_clicked();

}

UserMS::~UserMS()
{
    delete ui;
}

void UserMS::setPushButter()
{
    ui->label_3->setStyleSheet("color:red;");
    ui->pb_delete->setIcon(QPixmap(":/ico/delete.jpg"));
    ui->pb_insert->setIcon(QPixmap(":/ico/insert.jpg"));
    ui->pb_save->setIcon(QPixmap(":/ico/save.jpg"));
    ui->pb_update->setIcon(QPixmap(":/ico/zhuxiao.jpg"));
    ui->pb_cancel->setIcon(QPixmap(":/ico/update.jpg"));
    ui->pb_select->setIcon(QPixmap(":/ico/select.jpg"));
}

void UserMS::updateTableInfos(void)
{
    ui->tableWidget->clear();
    ui->tableWidget->setColumnCount(4);

    // set header lables
    QStringList headers;
    headers << "账号" << "密码"  << "角色" << "注册时间";
    ui->tableWidget->setHorizontalHeaderLabels(headers);
    ui->tableWidget->setRowCount(GlobalVars::g_userInfoList->length());
    for(int i=0; i < GlobalVars::g_userInfoList->length(); i++)
    {
        QTableWidgetItem *item = new QTableWidgetItem(GlobalVars::g_userInfoList->at(i).getID());
        ui->tableWidget->setItem(i, 0, item);
        item = new QTableWidgetItem(GlobalVars::g_userInfoList->at(i).getPswd());
        ui->tableWidget->setItem(i, 1, item);
        item = new QTableWidgetItem(GlobalVars::g_userInfoList->at(i).getType());
        ui->tableWidget->setItem(i, 2, item);
        item = new QTableWidgetItem(GlobalVars::g_userInfoList->at(i).getTime());
        ui->tableWidget->setItem(i, 3, item);
    }
}
void UserMS::on_tableWidget_clicked(const QModelIndex &index)
{
    m_row = index.row();
//    QString str = ui->tableWidget->item(m_row, 0)->text();
//    const UserInfo &info = GlobalVars::g_userInfoList->at(index.row());
//    m_userinfo << info.getID() << info.getPswd() << info.getType() << info.getTime();
}

void UserMS::on_comboBox_currentIndexChanged(int index)
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

void UserMS::initWidgetUnits(void)
{
    ui->le_select->setEnabled(false);
    ui->pb_save->setEnabled(false);
}
void UserMS::on_pb_cancel_clicked()
{
    ui->tableWidget->setEnabled(true);
    ui->pb_save->setEnabled(false);
}

void UserMS::on_pb_delete_clicked()
{
    m_operData = Oper_Del;
    ui->tableWidget->setEnabled(true);
    ui->pb_save->setEnabled(true);
}

void UserMS::on_pb_insert_clicked()
{
    m_operData = Oper_Add;
    ui->tableWidget->setEnabled(true);
    UserInfo info("NULL", "NULL", "NULL", "NULL");
    GlobalVars::g_userInfoList->append(info);
    updateTableInfos();
    ui->pb_save->setEnabled(true);
}


void UserMS::on_pb_update_clicked()
{
    m_operData = Oper_Mdy;
    ui->tableWidget->setEnabled(true);
    ui->pb_save->setEnabled(true);
}

void UserMS::on_pb_save_clicked()
{
    if(m_operData == Oper_Mdy)
    {
        QString str_id = ui->tableWidget->item(m_row, 0)->text();
        QString str_pswd = ui->tableWidget->item(m_row, 1)->text();
        ExecSQL::modifyUserInfoForPswd(str_id, str_pswd);
    }else if(m_operData == Oper_Del)
    {
        QString str_id = ui->tableWidget->item(m_row, 0)->text();
        ExecSQL::removeUserInfo(str_id);
    }else if(m_operData == Oper_Add)
    {
        QString str_id = ui->tableWidget->item(m_row, 0)->text();
        QString str_pswd = ui->tableWidget->item(m_row, 1)->text();
        QString str_type = ui->tableWidget->item(m_row, 2)->text();
        QString str_time = ui->tableWidget->item(m_row, 3)->text();
        UserInfo info(str_id, str_pswd, str_type, str_time);
        ExecSQL::addNewUserInfo(info);
    }

    on_pb_cancel_clicked();
    on_pb_select_clicked();
}

void UserMS::on_pb_select_clicked()
{
    if(m_searchCond == Search_ID)
    {
        ExecSQL::searchUserInfoForID(ui->le_select->text());
    }else if(m_searchCond == Search_Type)
    {
        ExecSQL::searchUserInfoForType(ui->le_select->text());
    }else if(m_searchCond == Search_Time)
    {
        ExecSQL::searchUserInfoForTime(ui->le_select->text());
    }else
    {
        ExecSQL::searchAllUserInfos();
    }

    updateTableInfos();
}
