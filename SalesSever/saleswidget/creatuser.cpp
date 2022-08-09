#include "creatuser.h"
#include "ui_creatuser.h"
#include <QMessageBox>
#include <QDateTime>

CreatUser::CreatUser(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CreatUser)
{
    ui->setupUi(this);

    this->setFixedSize(this->width(), this->height());
    this->setWindowTitle("外卖销售平台[服务端]");
    this->setWindowIcon(QPixmap("../SalesSever/image/shoe.jpg"));
}

CreatUser::~CreatUser()
{
    delete ui;
}

void CreatUser::paintEvent(QPaintEvent *)
{
    QPainter p(this);
    QPixmap pix(":/image/main.jpg");
    p.drawPixmap(0,0,pix);
}

void CreatUser::on_pb_ok_clicked()
{
    QDateTime *DateTime = new QDateTime(QDateTime::currentDateTime());
    QString str = DateTime->toString("yyyy-MM-dd hh:mm:ss ddd");

    QMessageBox msgBox(this);
    msgBox.setText("注册用户");
    int res = msgBox.question(this, "注册用户", "请记住您的密码!");
    if(res == QMessageBox::Yes)
    {

        QSqlQuery query;
        QString queryString = QString("insert into userinfo(user_id, user_pswd, user_type, user_time) values('%1', '%2', '%3', '%4')")
                .arg(ui->le_user->text()).arg(ui->le_pswd->text()).
                arg(ui->le_type->text()).arg(str);
        qDebug() << queryString;
        query.exec(queryString);

        this->close();
    }else
    {
        this->show();
    }
}
