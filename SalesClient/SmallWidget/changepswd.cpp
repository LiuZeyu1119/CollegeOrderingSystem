#include "changepswd.h"
#include "ui_changepswd.h"
#include "globalvars.h"

ChangePswd::ChangePswd(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ChangePswd)
{
    ui->setupUi(this);
}

ChangePswd::~ChangePswd()
{
    delete ui;
}

void ChangePswd::setUiid()
{
    ui->le_id->setText(GlobalVars::g_localUser.getID());
}

void ChangePswd::on_pushButton_clicked()
{
    if(ui->le_npswd->text() == ui->le_kpswd->text()
            && ui->le_kpswd->text() != ui->le_opswd->text()
            && ui->le_opswd->text() == GlobalVars::g_localUser.getPswd())
    {
        emit signalNewUserInfo(ui->le_id->text(),
                               ui->le_kpswd->text());
    }else
    {
        if(ui->le_kpswd->text() == ui->le_opswd->text())
        {
            ui->le_opswd->clear();
            ui->le_npswd->clear();
            ui->le_kpswd->clear();
            ui->lb_data->setText("旧密码与新密码相同，请重新输入!");
        }else if(ui->le_npswd->text() != ui->le_kpswd->text())
        {
            ui->le_npswd->clear();
            ui->le_kpswd->clear();
            ui->lb_data->setText("两次密码不相同，请重新输入!");
        }else if(ui->le_opswd->text() != GlobalVars::g_localUser.getPswd())
        {
            ui->le_opswd->clear();
            ui->le_npswd->clear();
            ui->le_kpswd->clear();
            ui->lb_data->setText("旧密码不正确!");
        }
    }
}
