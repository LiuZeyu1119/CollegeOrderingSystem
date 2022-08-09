#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QFileDialog>
#include <QScreen>
#include <QGuiApplication>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    m_clientnum = 0;
    m_merchantnum = 0;
    x = 1;

    ui->setupUi(this);

    m_saleslogin = new SalesLogin();
    m_userms = new UserMS(ui->widget);
    m_clientms = new ClientMS(ui->widget);
    m_merchantms = new MerchantMS(ui->widget);
    m_shopms = new ShopMS(ui->widget);
    m_commodityms = new CommodityMS(ui->widget);
    m_sortms = new SortMS(ui->widget);
    m_photoms = new PhotoMS(ui->widget);
    m_formms = new FormMS(ui->widget);
    m_shopcartms = new ShopcartMS(ui->widget);
    m_dialogms = new DialogMS(ui->widget);
    m_pwsd = new Pwsd(ui->widget);

    setPushButton();

    this->setWindowTitle("外卖销售平台[服务端]");
    this->setWindowIcon(QPixmap("../SalesSever/image/shoe.jpg"));

    m_Timer=new QTimer(this);
    m_Timer->start(1000);
    connect(m_Timer, SIGNAL(timeout()), this, SLOT(GetDateTime()));

    connect(m_saleslogin, SIGNAL(sendUserLogin(QString,QString)),
            this, SLOT(slotUserLogin(QString,QString)));

    m_saleslogin->show();
    m_tcpSever = new TcpSever;

    connect(m_tcpSever, SIGNAL(signalUserNum(QString)),
            this, SLOT(slotUserNum(QString)));
    connect(m_tcpSever, SIGNAL(signalUserNumX(QString)),
            this, SLOT(slotUserNumX(QString)));

    ///更新缓存
    connect(m_tcpSever, SIGNAL(signalInsertUser(bool)),
            this, SLOT(slotInsertUser(bool)));
    connect(m_tcpSever, SIGNAL(signalUpdateSqla(bool)),
            this, SLOT(slotUpdateSqla(bool)));
    connect(m_tcpSever, SIGNAL(signalInsertShop(bool)),
            this, SLOT(slotInsertShop(bool)));
    connect(m_tcpSever, SIGNAL(signalDeleteShop(bool)),
            this, SLOT(slotDeleteShop(bool)));
    connect(m_tcpSever, SIGNAL(signalDeleteForm(bool)),
            this, SLOT(slotDeleteForm(bool)));
    connect(m_tcpSever, SIGNAL(signalDeleteShopcart(bool)),
            this, SLOT(slotDeleteShopcart(bool)));
    connect(m_tcpSever, SIGNAL(signalInsertForm(bool)),
            this, SLOT(slotInsertForm(bool)));
    connect(m_tcpSever, SIGNAL(signalInsertShopcart(bool)),
            this, SLOT(slotInsertShopcart(bool)));
    connect(m_tcpSever, SIGNAL(signalUpdateMerchant(bool)),
            this, SLOT(slotUpdateMerchant(bool)));
    connect(m_tcpSever, SIGNAL(signalUpdateClient(bool)),
            this, SLOT(slotUpdateClient(bool)));
    connect(m_tcpSever, SIGNAL(signalUpdateCommodity(bool)),
            this, SLOT(slotUpdateCommodity(bool)));
    connect(m_tcpSever, SIGNAL(signalUpdateUserImage(QString,bool)),
            this, SLOT(slotUpdateUserImage(QString,bool)));
}

MainWindow::~MainWindow()
{
    delete ui;  
}

void MainWindow::paintEvent(QPaintEvent *)
{
    QPainter p(this);
    QPixmap pix(":/image/main.jpg");
    p.drawPixmap(0,0,pix);
}

void MainWindow::GetDateTime()
{
    QTime timeNow = QTime::currentTime();
    ui->lb_time_3->setText((QDate::currentDate().toString(tr("yyyy年MM月dd日 dddd")))
                           + tr("  %1").arg(timeNow.toString()));
}

void MainWindow::slotUserLogin(QString id, QString pswd)
{
    QString u_id;
    QString u_pswd;
    QSqlQuery query;
    QString queryString = QString("select * from userinfo where user_id = '%1'").arg(id);
    if(query.exec(queryString))
    {
        int id_idx = query.record().indexOf("user_id");
        int pswd_idx = query.record().indexOf("user_pswd");

        while(query.next())
        {
            u_id = query.value(id_idx).toString();
            u_pswd = query.value(pswd_idx).toString();
        }
    }
    qDebug() << queryString;
    if((id == u_id) && (pswd == u_pswd))
    {
        m_saleslogin->hide();
        this->show();
        ui->groupBox_2->show();
        m_userms->hide();
        m_clientms->hide();
        m_merchantms->hide();
        m_shopms->hide();
        m_commodityms->hide();
        m_sortms->hide();
        m_photoms->hide();
        m_shopcartms->hide();
        m_formms->hide();
        m_dialogms->hide();
        m_pwsd->hide();
    }else
    {
        m_saleslogin->userLoginFail();
    }
}

void MainWindow::setPushButton()
{
    ui->sales_info->menuAction()->setVisible(false);

    ui->pb_user_3->setIcon(QPixmap(":/ico/user.png"));
    ui->pb_cli_3->setIcon(QPixmap(":/ico/guke.png"));
    ui->pb_com_3->setIcon(QPixmap(":/ico/shoe.png"));
    ui->pb_shop_3->setIcon(QPixmap(":/ico/shop.png"));
    ui->pb_mer_3->setIcon(QPixmap(":/ico/shangjia.png"));
    ui->pb_pswd_3->setIcon(QPixmap(":/ico/mima.png"));
    ui->pb_form_3->setIcon(QPixmap(":/ico/form.png"));
    ui->pb_dia_3->setIcon(QPixmap(":/ico/diaglo.png"));
    ui->pb_cart_3->setIcon(QPixmap(":/ico/cart.png"));
    ui->pb_remove->setIcon(QPixmap(":/ico/zhuxiao.jpg"));
    ui->pb_back->setIcon(QPixmap(":/ico/first.jpg"));
    ui->pb_quit->setIcon(QPixmap(":/ico/go.jpg"));
}

///设置人数
void MainWindow::slotUserNum(QString id)
{
    if(GlobalVars::g_userInfoMap[id]->getType() == "商家")
    {
        m_merchantnum = m_merchantnum + 1;
        ui->lb_merchantnum->setText(QString::number(m_merchantnum));
    }else
    {
        m_clientnum = m_clientnum + 1;
        ui->lb_clientnum->setText(QString::number(m_clientnum));
    }
}

void MainWindow::slotUserNumX(QString id)
{
    if(GlobalVars::g_userInfoMap[id]->getType() == "商家")
    {
        m_merchantnum = m_merchantnum - 1;
        ui->lb_merchantnum->setText(QString::number(m_merchantnum));
    }else
    {
        m_clientnum = m_clientnum - 1;
        ui->lb_clientnum->setText(QString::number(m_clientnum));
    }
}

///更新缓存信息
void MainWindow::slotInsertUser(bool res)
{
    if(res == true)
    {
        m_userms->on_pb_select_clicked();
        m_clientms->on_pb_select_clicked();
        m_merchantms->on_pb_select_clicked();
        m_photoms->on_pb_select_clicked();
    }
}


void MainWindow::slotUpdateSqla(bool res)
{
    if(res == true)
    {
        m_userms->on_pb_select_clicked();
    }
}

void MainWindow::slotInsertShop(bool res)
{
    if(res)
    {
        m_shopms->on_pb_select_clicked();
    }
}

void MainWindow::slotDeleteShop(bool res)
{
    if(res)
    {
        m_shopms->on_pb_select_clicked();
    }
}

void MainWindow::slotDeleteForm(bool res)
{
    if(res)
    {
        m_formms->on_pb_select_clicked();
    }
}

void MainWindow::slotDeleteShopcart(bool res)
{
    if(res)
    {
        m_shopcartms->on_pb_select_clicked();
    }
}

void MainWindow::slotInsertForm(bool res)
{
    if(res)
    {
        m_formms->on_pb_select_clicked();
    }
}

void MainWindow::slotInsertShopcart(bool res)
{
    if(res)
    {
        m_shopcartms->on_pb_select_clicked();
    }
}

void MainWindow::slotUpdateMerchant(bool res)
{
    if(res)
    {
        m_merchantms->on_pb_select_clicked();
    }
}

void MainWindow::slotUpdateClient(bool res)
{
    if(res)
    {
        m_clientms->on_pb_select_clicked();
    }
}

void MainWindow::slotUpdateCommodity(bool res)
{
    if(res)
    {
        m_commodityms->on_pb_select_clicked();
    }
}

void MainWindow::slotUpdateUserImage(QString id, bool res)
{
    int i;
    QString site;
    QString imid;
    if(res)
    {
        for(i = 0; i < GlobalVars::g_merchantInfoList->length(); i++)
        {
            if(id == GlobalVars::g_merchantInfoList->at(i).getID())
            {
                i = 0;
                site = QString("F:/LH/Shoe/SalesSever/image/new/%1.png").arg(x);
                imid = GlobalVars::g_merchantInfoMap[id]->getImid();
                break;
            }
        }
        if(i >= GlobalVars::g_merchantInfoList->length())
        {
            site = QString("F:/LH/Shoe/SalesSever/image/new2/%1.png").arg(x);
            imid = GlobalVars::g_clientInfoMap[id]->getImid();
        }

        QImage image = GlobalVars::UserImageMap[id];
        image.save(site, "PNG");

        if(ExecSQL::modifyPhotoInfoForSite(imid, site))
        {
            m_photoms->on_pb_select_clicked();
            x++;
        }
    }
}

///按键操作
void MainWindow::on_user_triggered()
{
    ui->groupBox_2->hide();
    m_userms->show();
    m_clientms->hide();
    m_merchantms->hide();
    m_shopms->hide();
    m_commodityms->hide();
    m_sortms->hide();
    m_photoms->hide();
    m_shopcartms->hide();
    m_formms->hide();
    m_dialogms->hide();
    m_pwsd->hide();
}

void MainWindow::on_first_triggered()
{
    ui->groupBox_2->show();
    m_userms->hide();
    m_clientms->hide();
    m_merchantms->hide();
    m_shopms->hide();
    m_commodityms->hide();
    m_sortms->hide();
    m_photoms->hide();
    m_shopcartms->hide();
    m_formms->hide();
    m_dialogms->hide();
    m_pwsd->hide();
}

void MainWindow::on_client_triggered()
{
    ui->groupBox_2->hide();
    m_userms->hide();
    m_clientms->show();
    m_merchantms->hide();
    m_shopms->hide();
    m_commodityms->hide();
    m_sortms->hide();
    m_photoms->hide();
    m_shopcartms->hide();
    m_formms->hide();
    m_dialogms->hide();
    m_pwsd->hide();
}

void MainWindow::on_merchant_triggered()
{
    ui->groupBox_2->hide();
    m_userms->hide();
    m_clientms->hide();
    m_merchantms->show();
    m_shopms->hide();
    m_commodityms->hide();
    m_sortms->hide();
    m_photoms->hide();
    m_shopcartms->hide();
    m_formms->hide();
    m_dialogms->hide();
    m_pwsd->hide();
}

void MainWindow::on_shop_triggered()
{
    ui->groupBox_2->hide();
    m_userms->hide();
    m_clientms->hide();
    m_merchantms->hide();
    m_shopms->show();
    m_commodityms->hide();
    m_sortms->hide();
    m_photoms->hide();
    m_shopcartms->hide();
    m_formms->hide();
    m_dialogms->hide();
    m_pwsd->hide();
}

void MainWindow::on_commodity_triggered()
{
    ui->groupBox_2->hide();
    m_userms->hide();
    m_clientms->hide();
    m_merchantms->hide();
    m_shopms->hide();
    m_commodityms->show();
    m_sortms->hide();
    m_photoms->hide();
    m_shopcartms->hide();
    m_formms->hide();
    m_dialogms->hide();
    m_pwsd->hide();
}

void MainWindow::on_actionPswdMS_triggered()
{
    ui->groupBox_2->hide();
    m_userms->hide();
    m_clientms->hide();
    m_merchantms->hide();
    m_shopms->hide();
    m_commodityms->hide();
    m_sortms->hide();
    m_photoms->hide();
    m_shopcartms->hide();
    m_formms->hide();
    m_dialogms->hide();
    m_pwsd->show();
}

void MainWindow::on_actionSortMS_triggered()
{
    ui->groupBox_2->hide();
    m_userms->hide();
    m_clientms->hide();
    m_merchantms->hide();
    m_shopms->hide();
    m_commodityms->hide();
    m_sortms->show();
    m_photoms->hide();
    m_shopcartms->hide();
    m_formms->hide();
    m_dialogms->hide();
    m_pwsd->hide();
}

void MainWindow::on_actionPhotoMS_triggered()
{
    ui->groupBox_2->hide();
    m_userms->hide();
    m_clientms->hide();
    m_merchantms->hide();
    m_shopms->hide();
    m_commodityms->hide();
    m_sortms->hide();
    m_photoms->show();
    m_shopcartms->hide();
    m_formms->hide();
    m_dialogms->hide();
    m_pwsd->hide();
}

void MainWindow::on_actionFormMS_triggered()
{
    ui->groupBox_2->hide();
    m_userms->hide();
    m_clientms->hide();
    m_merchantms->hide();
    m_shopms->hide();
    m_commodityms->hide();
    m_sortms->hide();
    m_photoms->hide();
    m_shopcartms->hide();
    m_formms->show();
    m_dialogms->hide();
    m_pwsd->hide();
}

void MainWindow::on_actionShopcartMS_triggered()
{
    ui->groupBox_2->hide();
    m_userms->hide();
    m_clientms->hide();
    m_merchantms->hide();
    m_shopms->hide();
    m_commodityms->hide();
    m_sortms->hide();
    m_photoms->hide();
    m_shopcartms->show();
    m_formms->hide();
    m_dialogms->hide();
    m_pwsd->hide();
}

void MainWindow::on_actionDialogMS_triggered()
{
    ui->groupBox_2->hide();
    m_userms->hide();
    m_clientms->hide();
    m_merchantms->hide();
    m_shopms->hide();
    m_commodityms->hide();
    m_sortms->hide();
    m_photoms->hide();
    m_shopcartms->hide();
    m_formms->hide();
    m_dialogms->show();
    m_pwsd->hide();
}

void MainWindow::on_pb_remove_clicked()
{
    QMessageBox msgBox(this);
    msgBox.setStyleSheet("background-color: rgb(0, 255, 255);");
    msgBox.setText("注销系统");
    int res = msgBox.question(this, "注销系统", "是否重新登录系统？");
    if(res == QMessageBox::Yes)
    {
        m_saleslogin->show();
        this->close();
    }else
    {
        this->show();
    }
}

void MainWindow::on_pb_quit_clicked()
{
    QMessageBox msgBox(this);
    msgBox.setStyleSheet("background-color: rgb(0, 255, 255);");
    msgBox.setText("退出系统");
    int res = msgBox.question(this, "退出系统", "是否确定退出系统？");
    if(res == QMessageBox::Yes)
    {
        this->close();
    }else
    {
        this->show();
    }
}

void MainWindow::on_pb_user_3_clicked()
{
    ui->groupBox_2->hide();
    m_userms->show();
    m_clientms->hide();
    m_merchantms->hide();
    m_shopms->hide();
    m_commodityms->hide();
    m_sortms->hide();
    m_photoms->hide();
    m_shopcartms->hide();
    m_formms->hide();
    m_dialogms->hide();
    m_pwsd->hide();
}

void MainWindow::on_pb_cli_3_clicked()
{
    ui->groupBox_2->hide();
    m_userms->hide();
    m_clientms->show();
    m_merchantms->hide();
    m_shopms->hide();
    m_commodityms->hide();
    m_sortms->hide();
    m_photoms->hide();
    m_shopcartms->hide();
    m_formms->hide();
    m_dialogms->hide();
    m_pwsd->hide();
}

void MainWindow::on_pb_mer_3_clicked()
{
    ui->groupBox_2->hide();
    m_userms->hide();
    m_clientms->hide();
    m_merchantms->show();
    m_shopms->hide();
    m_commodityms->hide();
    m_sortms->hide();
    m_photoms->hide();
    m_shopcartms->hide();
    m_formms->hide();
    m_dialogms->hide();
    m_pwsd->hide();
}

void MainWindow::on_pb_shop_3_clicked()
{
    ui->groupBox_2->hide();
    m_userms->hide();
    m_clientms->hide();
    m_merchantms->hide();
    m_shopms->show();
    m_commodityms->hide();
    m_sortms->hide();
    m_photoms->hide();
    m_shopcartms->hide();
    m_formms->hide();
    m_dialogms->hide();
    m_pwsd->hide();
}

void MainWindow::on_pb_com_3_clicked()
{
    ui->groupBox_2->hide();
    m_userms->hide();
    m_clientms->hide();
    m_merchantms->hide();
    m_shopms->hide();
    m_commodityms->show();
    m_sortms->hide();
    m_photoms->hide();
    m_shopcartms->hide();
    m_formms->hide();
    m_dialogms->hide();
    m_pwsd->hide();
}

void MainWindow::on_pb_pswd_3_clicked()
{
    ui->groupBox_2->hide();
    m_userms->hide();
    m_clientms->hide();
    m_merchantms->hide();
    m_shopms->hide();
    m_commodityms->hide();
    m_sortms->hide();
    m_photoms->hide();
    m_shopcartms->hide();
    m_formms->hide();
    m_dialogms->hide();
    m_pwsd->show();
}

void MainWindow::on_pb_form_3_clicked()
{
    ui->groupBox_2->hide();
    m_userms->hide();
    m_clientms->hide();
    m_merchantms->hide();
    m_shopms->hide();
    m_commodityms->hide();
    m_sortms->hide();
    m_photoms->hide();
    m_shopcartms->hide();
    m_formms->show();
    m_dialogms->hide();
    m_pwsd->hide();
}

void MainWindow::on_pb_cart_3_clicked()
{
    ui->groupBox_2->hide();
    m_userms->hide();
    m_clientms->hide();
    m_merchantms->hide();
    m_shopms->hide();
    m_commodityms->hide();
    m_sortms->hide();
    m_photoms->hide();
    m_shopcartms->show();
    m_formms->hide();
    m_dialogms->hide();
    m_pwsd->hide();
}

void MainWindow::on_pb_dia_3_clicked()
{
    ui->groupBox_2->hide();
    m_userms->hide();
    m_clientms->hide();
    m_merchantms->hide();
    m_shopms->hide();
    m_commodityms->hide();
    m_sortms->hide();
    m_photoms->hide();
    m_shopcartms->hide();
    m_formms->hide();
    m_dialogms->show();
    m_pwsd->hide();
}

void MainWindow::on_pb_back_clicked()
{
    ui->groupBox_2->show();
    m_userms->hide();
    m_clientms->hide();
    m_merchantms->hide();
    m_shopms->hide();
    m_commodityms->hide();
    m_sortms->hide();
    m_photoms->hide();
    m_shopcartms->hide();
    m_formms->hide();
    m_dialogms->hide();
    m_pwsd->hide();
}
