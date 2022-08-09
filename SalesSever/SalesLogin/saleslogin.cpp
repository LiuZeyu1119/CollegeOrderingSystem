#include "saleslogin.h"
#include "ui_saleslogin.h"


SalesLogin::SalesLogin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SalesLogin)
{
    ui->setupUi(this);
    this->setFixedSize(this->width(), this->height());
    this->setWindowTitle("外卖销售平台[服务端]");
    this->setWindowIcon(QPixmap("../SalesSever/image/shoe.jpg"));

    ui->pb_login->setStyleSheet("background: rgb(255,255,255)");
    ui->pb_forget->setStyleSheet("background: rgb(255,255,255)");
    ui->pb_register->setStyleSheet("background: rgb(255,255,255)");

    m_creatuser = new CreatUser();
    m_pwsd = new Pwsd();

    connect(this, SIGNAL(creatUserSignal()),
            this, SLOT(creatUserSlot()));

    connect(this, SIGNAL(updatePswdSignal()),
            this, SLOT(updatePswdSlot()));
}

SalesLogin::~SalesLogin()
{
    delete ui;
}

void SalesLogin::paintEvent(QPaintEvent *)
{
    QPainter p(this);
    QPixmap pix(":/image/back.jpg");
    p.drawPixmap(0,0,pix);
}

void SalesLogin::on_pb_login_clicked()
{
    emit sendUserLogin(ui->le_id->text(),
                       ui->le_pswd->text());
}

void SalesLogin::userLoginFail(void)
{
    QMessageBox msgBox(this);
    msgBox.setStyleSheet("background-color: rgb(0, 255, 255);");
    msgBox.setText("登录失败!");
    msgBox.setInformativeText("用户名或者密码错误，请重新输入!");
    msgBox.setStandardButtons(QMessageBox::Retry | QMessageBox::Close);
    msgBox.setDefaultButton(QMessageBox::Retry);
    msgBox.exec();
}

void SalesLogin::on_pb_register_clicked()
{
    emit creatUserSignal();
}

void SalesLogin::creatUserSlot()
{
    m_creatuser->show();
}

void SalesLogin::on_pb_forget_clicked()
{
    emit updatePswdSignal();
}

void SalesLogin::updatePswdSlot()
{
    m_pwsd->show();
}
