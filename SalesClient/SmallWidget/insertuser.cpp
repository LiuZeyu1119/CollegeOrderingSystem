#include "insertuser.h"
#include "ui_insertuser.h"
#include <QMessageBox>

InsertUser::InsertUser(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::InsertUser)
{
    ui->setupUi(this);
}

InsertUser::~InsertUser()
{
    delete ui;
}

void InsertUser::on_pb_ok_clicked()
{
    if(ui->le_id->text().isEmpty())
    {
        QMessageBox::warning(this, "警告", "用户名不能为空!",
                             QMessageBox::Retry|QMessageBox::Close);
    }else if(ui->le_pswd->text().isEmpty())
    {
        QMessageBox::warning(this, "警告", "密码不能为空!",
                             QMessageBox::Retry|QMessageBox::Close);
    }else if(ui->le_type->text().isEmpty())
    {
        QMessageBox::warning(this, "警告", "用户身份不能为空!",
                             QMessageBox::Retry|QMessageBox::Close);
    }
    else
    {
        emit signalInsertUser(ui->le_id->text(),
                            ui->le_pswd->text(),
                             ui->le_type->text());
    }
}
