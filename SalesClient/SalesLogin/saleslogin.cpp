#include "saleslogin.h"
#include "ui_saleslogin.h"


SalesLogin::SalesLogin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SalesLogin)
{
    ui->setupUi(this);
    this->setFixedSize(this->width(), this->height());
    this->setWindowTitle("外卖销售平台[客户端]");
    this->setWindowIcon(QPixmap("../SalesLogin/image/shoe.jpg"));
    setWindowFlags(Qt::FramelessWindowHint);
    m_insertuser = new InsertUser;
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
    if(ui->le_id->text().isEmpty())
    {
        QMessageBox::warning(this, "警告", "用户名不能为空!",
                             QMessageBox::Retry|QMessageBox::Close);
    }else if(ui->le_pswd->text().isEmpty())
    {
        QMessageBox::warning(this, "警告", "密码不能为空!",
                             QMessageBox::Retry|QMessageBox::Close);
    }else
    {
        emit signalUserLogin(ui->le_id->text(),
                             ui->le_pswd->text());
    }
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
    m_insertuser->show();

    connect(m_insertuser, SIGNAL(signalInsertUser(QString,QString,QString)),
            this, SLOT(slotInsertUser(QString,QString,QString)));
}

void SalesLogin::slotInsertUser(QString id, QString pswd, QString type)
{
    emit signalInsertUser(id, pswd, type);
}

void SalesLogin::userInsert()
{
    QString dlgTitle="注册用户";
    QString strInfo="注册成功!";
    QMessageBox::information(this, dlgTitle, strInfo,
                                  QMessageBox::Ok,QMessageBox::NoButton);
    m_insertuser->close();
    this->show();
}

void SalesLogin::on_pb_login_2_clicked()
{
    exit(0);
}
