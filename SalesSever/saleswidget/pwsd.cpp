#include "pwsd.h"
#include "ui_pwsd.h"
#include <QMessageBox>
#include <QTimer>

Pwsd::Pwsd(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Pwsd)
{
    ui->setupUi(this);
}

Pwsd::~Pwsd()
{
    delete ui;
}

void Pwsd::on_pb_ok_clicked()
{
    QMessageBox msgBox(this);
    msgBox.setText("修改密码");
    int res = msgBox.question(this, "修改密码", "是否确定修改？");
    if(res == QMessageBox::Yes)
    {
        if(ui->le_npswd->text() == ui->le_npswd2->text())
        {
            QSqlQuery query;
            QString queryString = QString("update userinfo set user_pswd = '%1' where user_id = '%2'").arg(ui->le_npswd2->text()).arg(ui->le_user->text());
            qDebug() << queryString;
            query.exec(queryString);
            ui->lb_text->setText("修改成功,请重新登录!");
            exit(0);
        }else
        {
            ui->lb_text->setText("用户名或密码不正确,请重新输入!");
        }
    }else
    {
        this->show();
    }
}

void Pwsd::paintEvent(QPaintEvent *)
{
    QPainter p(this);
    QPixmap pix(":/image/pswd.jpg");
    p.drawPixmap(0,0,pix);
}
