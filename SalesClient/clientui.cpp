#include "clientui.h"
#include "ui_clientui.h"
#include <QMessageBox>
#include <QStringBuilder>

ClientUI::ClientUI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ClientUI)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);

    m_x = 0;
    m_y = 0;

    m_isCloseSystem = false;

    m_Timer=new QTimer(this);
    m_Timer->start(1000);

    //获取系统时间
    connect(m_Timer, SIGNAL(timeout()), this, SLOT(GetDateTime()));

    m_clidata = new CliData(ui->widget);
    m_firstdata = new FirstData(ui->widget);
    m_cliformdata = new CliFormData(ui->widget);
    m_merchantdata = new MerchantData(ui->widget);
    m_shopcartdata = new ShopcartData(ui->widget);
    m_changepswd = new ChangePswd(ui->widget);

    m_firstdata->show();
    m_clidata->hide();
    m_cliformdata->hide();
    m_merchantdata->hide();
    m_shopcartdata->hide();
    m_changepswd->hide();

    ui->pb_first->setIcon(QPixmap(":/ico/first.png"));
    ui->pb_mydata->setIcon(QPixmap(":/ico/guke.png"));
    ui->pb_pswd->setIcon(QPixmap(":/ico/mima.png"));
    ui->pb_merchant->setIcon(QPixmap(":/ico/shangjia.png"));
    ui->pb_shopcart->setIcon(QPixmap(":/ico/cart.png"));
    ui->pb_clientmer->setIcon(QPixmap(":/ico/user.png"));
    ui->pb_form->setIcon(QPixmap(":/ico/form.png"));
    ui->pb_go->setIcon(QPixmap(":/ico/go.jpg"));
    ui->pb_f->setIcon(QPixmap(":/ico/first.jpg"));

    //修改密码
    connect(m_changepswd, SIGNAL(signalNewUserInfo(QString,QString)),
            this, SLOT(slotChangePswd(QString,QString)));
    //删除订单
    connect(m_cliformdata, SIGNAL(signalDeleteForm(QString,QString)),
            this, SLOT(slotDeleteForm(QString,QString)));
    //删除购物车
    connect(m_shopcartdata, SIGNAL(signalDeleteShopcart(QString,QString)),
            this, SLOT(slotDeleteShopcart(QString,QString)));
    //增加订单
    connect(m_firstdata, SIGNAL(signalInsertForm(QString,QString,QString,QString)),
            this, SLOT(slotInsertForm(QString,QString,QString,QString)));
    connect(m_shopcartdata, SIGNAL(signalInsertForm(QString,QString,QString,QString)),
            this, SLOT(slotInsertForm(QString,QString,QString,QString)));
    //增加购物车
    connect(m_firstdata, SIGNAL(signalInsertShopcart(QString,QString,QString,QString)),
            this, SLOT(slotInsertShopcart(QString,QString,QString,QString)));
    //编辑资料
    connect(m_clidata, SIGNAL(signalUpdateClient(QString,QString,QString)),
            this, SLOT(slotUpdateClient(QString,QString,QString)));
    connect(m_clidata, SIGNAL(signalUpdateCliImage(QImage)),
            this, SLOT(slotUpdateCliImage(QImage)));
}

ClientUI::~ClientUI()
{
    delete ui;
}

//获取时间
void ClientUI::GetDateTime()
{
    QTime timeNow = QTime::currentTime();
    ui->lb_time->setText((QDate::currentDate().toString(tr("yyyy年MM月dd日 dddd")))
                           + tr("  %1").arg(timeNow.toString()));
}

//登录人员信息返回
void ClientUI::slotGainClientInfo(bool res)
{
    if(res)
    {
        QString msg = m_msgdeal.UserImageMsg();
        emit sendMsgInfo(msg);
    }
}

//登录人员头像返回
void ClientUI::slotGetUserImageResult(bool res)
{
    if(res)
    {
        m_clidata->getClientInfo();

        QString msg = m_msgdeal.MerchantInfoMsg();
        emit sendMsgInfo(msg);
    }
}

//商家信息返回
void ClientUI::slotGetMerchantInfoResult(bool res)
{
    if(res)
    {
        QString msg = m_msgdeal.MerImageMsg(GlobalVars::g_merchantInfoList->at(m_x).getID());
        m_x++;
        emit sendMsgInfo(msg);
    }
}

//商家头像返回
void ClientUI::slotGetMerImageResult(bool res)
{
    if(res)
    {
        if(m_x < GlobalVars::g_merchantInfoList->length())
        {
            QString msg = m_msgdeal.MerImageMsg(GlobalVars::g_merchantInfoList->at(m_x).getID());
            m_x++;
            emit sendMsgInfo(msg);
        }else
        {
            m_x = 0;
            QString msg = m_msgdeal.ShopInfoMsg();
            emit sendMsgInfo(msg);
        }
    }
}

//店铺信息返回
void ClientUI::slotGetShopInfoResult(bool res)
{
    if(res)
    {
        m_merchantdata->getMerchantInfo();

        QString msg = m_msgdeal.CommodityInfoMsg();
        emit sendMsgInfo(msg);
    }
}

//商品信息返回
void ClientUI::slotGetCommodityInfoResult(bool res)
{
    if(res)
    {
        QString msg = m_msgdeal.SortInfoMsg();
        emit sendMsgInfo(msg);
    }
}

//商品规格返回
void ClientUI::slotGetSortInfoResult(bool res)
{
    if(res)
    {
        QString msg = m_msgdeal.ComImageMsg(GlobalVars::g_commodityInfoList->at(m_y).getID());
        m_y++;
        emit sendMsgInfo(msg);
    }
}

//商品图片返回
void ClientUI::slotGetComImageResult(bool res)
{
    if(res)
    {
        if(m_y < GlobalVars::g_commodityInfoList->length())
        {
            QString msg = m_msgdeal.ComImageMsg(GlobalVars::g_commodityInfoList->at(m_y).getID());
            m_y++;
            emit sendMsgInfo(msg);
        }else
        {
            m_y = 0;
            m_firstdata->getCommodityInfo();

            QString msg = m_msgdeal.FormInfoMsg();
            emit sendMsgInfo(msg);
        }
    }
}

//订单信息返回
void ClientUI::slotGetFormInfoResult(bool res)
{
    if(res)
    {
        m_cliformdata->getFormInfo();

        QString msg = m_msgdeal.ShopcartInfoMsg();
        emit sendMsgInfo(msg);
    }
}

//购物车信息返回
void ClientUI::slotGetShopcartInfoResult(bool res)
{
    if(res)
    {
        m_shopcartdata->getShopcartInfo();
    }
}

///修改密码
void ClientUI::slotChangePswd(QString id, QString pswd)
{

    QMessageBox msgBox(this);
    int res = msgBox.question(this, "修改密码", "是否修改密码？");
    if(res == QMessageBox::Yes)
    {
        QString msg = m_msgdeal.ChangePswdMsg(id, pswd);
        emit sendMsgInfo(msg);
        msgBox.close();
    }else
    {
        msgBox.close();
    }
}

//修改密码返回
void ClientUI::slotChangePswdResult(bool res)
{
    if(res)
    {
         QString dlgTitle="修改密码";
         QString strInfo="修改成功,请重新登录!";
         QMessageBox::information(this, dlgTitle, strInfo,
                                       QMessageBox::Ok,QMessageBox::NoButton);
         exit(0);
    }
}

///删除订单
void ClientUI::slotDeleteForm(QString cliid, QString id)
{


    QMessageBox msgBox(this);
    int res = msgBox.question(this, "删除订单", "是否删除订单？");
    if(res == QMessageBox::Yes)
    {
        QString msg = m_msgdeal.DeleteForm(cliid, id);

        emit sendMsgInfo(msg);

        msgBox.close();
    }else
    {
        msgBox.close();
    }


}
//删除订单返回
void ClientUI::slotDeleteFormResult(bool res)
{
    if(res)
    {
        GlobalVars::g_formInfoList->clear();
        GlobalVars::g_formInfoMap.clear();
        GlobalVars::g_shopcartInfoList->clear();
        GlobalVars::g_shopcartInfoMap.clear();


        QString dlgTitle="删除订单";
        QString strInfo="删除成功!";
        QMessageBox::information(this, dlgTitle, strInfo,
                                      QMessageBox::Ok,QMessageBox::NoButton);

        QString msg = m_msgdeal.FormInfoMsg();
        emit sendMsgInfo(msg);
    }
}

///删除购物车
void ClientUI::slotDeleteShopcart(QString cliid, QString comid)
{

     QMessageBox msgBox(this);
     int res = msgBox.question(this, "删除购物车", "是否删除该商品？");
     if(res == QMessageBox::Yes)
     {
         QString msg = m_msgdeal.DeleteShopcart(cliid, comid);

         emit sendMsgInfo(msg);

         msgBox.close();
     }else
     {
         msgBox.close();
     }
}
//删除购物车返回
void ClientUI::slotDeleteShopcartResult(bool res)
{
    if(res)
    {
        GlobalVars::g_shopcartInfoList->clear();
        GlobalVars::g_shopcartInfoMap.clear();

        QString dlgTitle="删除购物车";
        QString strInfo="删除成功!";
        QMessageBox::information(this, dlgTitle, strInfo,
                                      QMessageBox::Ok,QMessageBox::NoButton);

        QString msg = m_msgdeal.ShopcartInfoMsg();
        emit sendMsgInfo(msg);
    }
}


///增加订单
void ClientUI::slotInsertForm(QString cliid, QString comid, QString soid, QString num)
{
    QMessageBox msgBox(this);
    int res = msgBox.question(this, "下订单", "是否对该商品下单？");
    if(res == QMessageBox::Yes)
    {
        QString msg = m_msgdeal.InsertForm(cliid, comid, soid, num);

        emit sendMsgInfo(msg);
        msgBox.close();
    }else
    {
        msgBox.close();
    }
}

//增加订单返回
void ClientUI::slotInsertFormResult(bool res)
{
    if(res)
    {
        GlobalVars::g_formInfoList->clear();
        GlobalVars::g_formInfoMap.clear();
        GlobalVars::g_shopcartInfoList->clear();
        GlobalVars::g_shopcartInfoMap.clear();
        QString dlgTitle="下订单";
        QString strInfo="下单成功!";
        QMessageBox::information(this, dlgTitle, strInfo,
                                      QMessageBox::Ok,QMessageBox::NoButton);
        QString msg = m_msgdeal.FormInfoMsg();
        emit sendMsgInfo(msg);
    }
}

///增加购物车
void ClientUI::slotInsertShopcart(QString cliid, QString comid, QString soid, QString num)
{
     QMessageBox msgBox(this);
     int res = msgBox.question(this, "加购物车", "是否对该商品加购物车？");
     if(res == QMessageBox::Yes)
     {
         QString msg = m_msgdeal.InsertShopcart(cliid, comid, soid, num);

         emit sendMsgInfo(msg);

         msgBox.close();
     }else
     {
         msgBox.close();
     }
}
//增加购物车返回
void ClientUI::slotInsertShopcartResult(bool res)
{
    if(res)
    {
        GlobalVars::g_shopcartInfoList->clear();
        GlobalVars::g_shopcartInfoMap.clear();
        QString dlgTitle="加购物车";
        QString strInfo="加购物车成功!";
        QMessageBox::information(this, dlgTitle, strInfo,
                                      QMessageBox::Ok,QMessageBox::NoButton);

        QString msg = m_msgdeal.ShopcartInfoMsg();
        emit sendMsgInfo(msg);
    }
}

///编辑资料
void ClientUI::slotUpdateClient(QString name, QString phone, QString site)
{
    qDebug() << "----------";
    QString msg = m_msgdeal.UpdateClient(name, phone, site);
    emit sendMsgInfo(msg);
}

//编辑资料
void ClientUI::slotUpdateClientResult(bool res)
{
    if(res)
    {
        GlobalVars::UserImageMap.clear();
        GlobalVars::g_merchantInfoList->clear();
        GlobalVars::g_merchantInfoMap.clear();
        GlobalVars::g_shopInfoList->clear();
        GlobalVars::g_shopInfoMap.clear();
        GlobalVars::g_commodityInfoList->clear();
        GlobalVars::g_commodityInfoMap.clear();
        GlobalVars::g_sortInfoList->clear();
        GlobalVars::g_sortInfoMap.clear();
        GlobalVars::CommodityImageMap.clear();
        GlobalVars::g_formInfoList->clear();
        GlobalVars::g_formInfoMap.clear();
        GlobalVars::g_shopcartInfoList->clear();
        GlobalVars::g_shopcartInfoMap.clear();

        QMessageBox msgBox(this);
        int res = msgBox.question(this, "修改资料", "是否修改资料？");
        if(res == QMessageBox::Yes)
        {
            QString dlgTitle="修改资料";
            QString strInfo="修改成功!";
            QMessageBox::information(this, dlgTitle, strInfo,
                                          QMessageBox::Ok,QMessageBox::NoButton);

            QString msg = m_msgdeal.UserInfoMsg();
            emit sendMsgInfo(msg);
            msgBox.close();
        }else
        {
            msgBox.close();
        }
    }
}


//修改头像
void ClientUI::slotUpdateCliImage(QImage image)
{
    QString id = GlobalVars::g_localClient.getID() % "|";
    emit sendCliImage(id, image);
}

//修改头像返回
void ClientUI::slotUpdateCliImageResult(bool res)
{
    if(res)
    {
        GlobalVars::UserImageMap.clear();
        GlobalVars::g_merchantInfoList->clear();
        GlobalVars::g_merchantInfoMap.clear();
        GlobalVars::g_shopInfoList->clear();
        GlobalVars::g_shopInfoMap.clear();
        GlobalVars::g_commodityInfoList->clear();
        GlobalVars::g_commodityInfoMap.clear();
        GlobalVars::g_sortInfoList->clear();
        GlobalVars::g_sortInfoMap.clear();
        GlobalVars::CommodityImageMap.clear();
        GlobalVars::g_formInfoList->clear();
        GlobalVars::g_formInfoMap.clear();
        GlobalVars::g_shopcartInfoList->clear();
        GlobalVars::g_shopcartInfoMap.clear();
        QMessageBox msgBox(this);
        int res = msgBox.question(this, "修改头像", "是否修改头像？");
        if(res == QMessageBox::Yes)
        {
            QString dlgTitle="修改头像";
            QString strInfo="修改成功!";
            QMessageBox::information(this, dlgTitle, strInfo,
                                          QMessageBox::Ok,QMessageBox::NoButton);

            QString msg = m_msgdeal.UserImageMsg();
            emit sendMsgInfo(msg);
            msgBox.close();
        }else
        {
            msgBox.close();
        }
    }
}

void ClientUI::on_pb_first_clicked()
{
    m_firstdata->show();
    m_clidata->hide();
    m_cliformdata->hide();
    m_merchantdata->hide();
    m_shopcartdata->hide();
    m_changepswd->hide();
}

void ClientUI::on_pb_mydata_clicked()
{
    m_firstdata->hide();
    m_clidata->show();
    m_cliformdata->hide();
    m_merchantdata->hide();
    m_shopcartdata->hide();
    m_changepswd->hide();
}

void ClientUI::on_pb_merchant_clicked()
{
    m_firstdata->hide();
    m_clidata->hide();
    m_cliformdata->hide();
    m_merchantdata->show();
    m_shopcartdata->hide();
    m_changepswd->hide();
}

void ClientUI::on_pb_form_clicked()
{
    m_firstdata->hide();
    m_clidata->hide();
    m_cliformdata->show();
    m_merchantdata->hide();
    m_shopcartdata->hide();
    m_changepswd->hide();
}

void ClientUI::on_pb_pswd_clicked()
{
    m_firstdata->hide();
    m_clidata->hide();
    m_cliformdata->hide();
    m_merchantdata->hide();
    m_shopcartdata->hide();
    m_changepswd->show();

    m_changepswd->setUiid();
}

void ClientUI::on_pb_shopcart_clicked()
{
    m_firstdata->hide();
    m_clidata->hide();
    m_cliformdata->hide();
    m_merchantdata->hide();
    m_shopcartdata->show();
    m_changepswd->hide();
}

void ClientUI::on_pb_clientmer_clicked()
{

}


void ClientUI::on_pb_f_clicked()
{
    m_firstdata->show();
    m_clidata->hide();
    m_cliformdata->hide();
    m_merchantdata->hide();
    m_shopcartdata->hide();
    m_changepswd->hide();
}

void ClientUI::slotUserLogout()
{
    ///用户退出请求
    QString msg = QString(CMD_UserExit_X)
            % QString("#") % GlobalVars::g_localUser.getID();
    emit sendMsgInfo(msg);
}


void ClientUI::slotUserLogoutResult(bool res)
{
    qDebug() << "-----------";
    m_isCloseSystem = res;
    this->close();
}

void ClientUI::closeEvent(QCloseEvent *ev)
{
    if(!m_isCloseSystem)
    {
        slotUserLogout();
        ev->ignore();
    }else
    {
        this->close();
        ev->accept();
    }
}

void ClientUI::on_pb_go_clicked()
{
    QMessageBox msgBox(this);
    msgBox.setText("退出系统");
    int res = msgBox.question(this, "退出系统", "是否确定退出系统？");
    if(res == QMessageBox::Yes)
    {
        ///用户退出请求
        QString msg = QString(CMD_UserExit_X)
                % QString("#") % GlobalVars::g_localUser.getID();
        emit sendMsgInfo(msg);
        exit(0);
    }else
    {
        this->show();
    }
}



