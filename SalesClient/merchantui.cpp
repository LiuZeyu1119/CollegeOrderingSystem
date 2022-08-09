#include "merchantui.h"
#include "ui_merchantui.h"
#include <QMessageBox>
#include <QStringBuilder>

MerchantUI::MerchantUI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MerchantUI)
{
    ui->setupUi(this);

    m_isCloseSystem = false;
    m_x = 0;

    m_mydata = new MyData(ui->widget);
    m_shopdata = new ShopData(ui->widget);
    m_commoditydata = new CommodityData(ui->widget);
    m_formdata = new FormData(ui->widget);
    m_changepswd = new ChangePswd(ui->widget);

    m_Timer=new QTimer(this);
    m_Timer->start(1000);
    connect(m_Timer, SIGNAL(timeout()), this, SLOT(GetDateTime()));


    ui->lb_head->show();
    m_mydata->hide();
    m_shopdata->hide();
    m_commoditydata->hide();
    m_formdata->hide();
    m_changepswd->hide();
    ui->pb_first->setIcon(QPixmap(":/ico/first.png"));
    ui->pb_mydata->setIcon(QPixmap(":/ico/user.png"));
    ui->pb_pswd->setIcon(QPixmap(":/ico/user.png"));
    ui->pb_shop->setIcon(QPixmap(":/ico/shop.png"));
    ui->pb_commodity->setIcon(QPixmap(":/ico/shoe.png"));
    ui->pb_client->setIcon(QPixmap(":/ico/guke.png"));
    ui->pb_form->setIcon(QPixmap(":/ico/form.png"));
    ui->pb_go->setIcon(QPixmap(":/ico/go.jpg"));
    ui->pb_f->setIcon(QPixmap(":/ico/first.jpg"));

    //修改密码
    connect(m_changepswd, SIGNAL(signalNewUserInfo(QString,QString)),
            this, SLOT(slotChangePswd(QString,QString)));
    //开设店铺
    connect(m_shopdata, SIGNAL(signalInsertShop(QString,QString,QString,QString)),
            this, SLOT(slotInsertShop(QString,QString,QString,QString)));
    //注销店铺
    connect(m_shopdata, SIGNAL(signalDeleteShop(QString,QString)),
            this, SLOT(slotDeleteShop(QString,QString)));
    //删除订单
    connect(m_formdata, SIGNAL(signalDeleteForm(QString,QString)),
            this, SLOT(slotDeleteForm(QString,QString)));
    //编辑资料
    connect(m_mydata, SIGNAL(signalUpdateMerchant(QString,QString,QString)),
            this, SLOT(slotUpdateMerchant(QString,QString,QString)));
    connect(m_mydata, SIGNAL(signalUpdateMerImage(QImage)),
            this, SLOT(slotUpdateMerImage(QImage)));
    //修改商品信息
    connect(m_commoditydata, SIGNAL(signalUpdateCommodity(QString,QString,QString)),
            this, SLOT(slotUpdateCommodity(QString,QString,QString)));
}

MerchantUI::~MerchantUI()
{
    delete ui;
}

//获取时间
void MerchantUI::GetDateTime()
{
    QTime timeNow = QTime::currentTime();
    ui->lb_time->setText((QDate::currentDate().toString(tr("yyyy年MM月dd日 dddd")))
                           + tr("  %1").arg(timeNow.toString()));
}

//登录人员信息返回
void MerchantUI::slotGainMerchantInfo(bool res)
{
    if(res)
    {
        QString msg = m_msgdeal.UserImageMsg();
        emit sendMsgInfo(msg);
    }
}

//获取商家头像返回
void MerchantUI::slotGetUserImageResult(bool res)
{
    if(res)
    {
        QImage image = GlobalVars::UserImageMap[GlobalVars::g_localUser.getID()];
        QImage image2 = image.scaled(ui->lb_head->size(),
                                     Qt::IgnoreAspectRatio,
                                     Qt::SmoothTransformation);
        ui->lb_head->setPixmap(QPixmap::fromImage(image2));

        m_mydata->getMerchantInfo();

        QString msg = m_msgdeal.ShopInfoMsg();
        emit sendMsgInfo(msg);
    }
}

//获取店铺信息返回
void MerchantUI::slotGetShopInfoResult(bool res)
{
    if(res)
    {
        m_shopdata->getShopInfo();

        QString msg = m_msgdeal.CommodityInfoMsg();
        emit sendMsgInfo(msg);
    }
}

//获取商品信息返回
void MerchantUI::slotGetCommodityInfoResult(bool res)
{
    if(res)
    {
        QString msg = m_msgdeal.SortInfoMsg();
        emit sendMsgInfo(msg);
    }
}

//获取商品规格信息返回
void MerchantUI::slotGetSortInfoResult(bool res)
{
    if(res)
    {
        QString msg = m_msgdeal.ComImageMsg(GlobalVars::g_commodityInfoList->at(m_x).getID());
        m_x++;
        emit sendMsgInfo(msg);
    }
}

//获取商品图片返回
void MerchantUI::slotGetComImageResult(bool res)
{
    if(res)
    {
        if(m_x < GlobalVars::g_commodityInfoList->length())
        {
            QString msg = m_msgdeal.ComImageMsg(GlobalVars::g_commodityInfoList->at(m_x).getID());
            m_x++;
            emit sendMsgInfo(msg);
        }else
        {
            m_x = 0;
            m_commoditydata->getCommodityInfo();

            QString msg = m_msgdeal.FormInfoMsg();
            emit sendMsgInfo(msg);
        }
    }
}

//获取订单信息返回
void MerchantUI::slotGetFormInfoResult(bool res)
{
    if(res)
    {
        QString msg = m_msgdeal.ClientInfoMsg();
        emit sendMsgInfo(msg);
    }
}

//获取下单顾客信息返回
void MerchantUI::slotGetClientInfoResult(bool res)
{
    if(res)
    {
        m_formdata->getFormInfo();
    }
}

///修改密码
void MerchantUI::slotChangePswd(QString id, QString pswd)
{
    QString msg = m_msgdeal.ChangePswdMsg(id, pswd);
    qDebug() << "------------";
    emit sendMsgInfo(msg);
}

//修改密码返回
void MerchantUI::slotChangePswdResult(bool res)
{
    if(res)
    {
        QMessageBox msgBox(this);
        int res = msgBox.question(this, "修改密码", "是否修改密码？");
        if(res == QMessageBox::Yes)
        {
            QString dlgTitle="修改密码";
            QString strInfo="修改成功,请重新登录!";
            QMessageBox::information(this, dlgTitle, strInfo,
                                          QMessageBox::Ok,QMessageBox::NoButton);
            exit(0);
        }else
        {
            msgBox.close();
        }
    }
}

///开设店铺
void MerchantUI::slotInsertShop(QString id, QString merid, QString name, QString type)
{
    QString msg = m_msgdeal.InsertShop(id, merid, name, type);

    emit sendMsgInfo(msg);
}
//开设店铺返回
void MerchantUI::slotInsertShopResult(bool res)
{
    if(res)
    {
        GlobalVars::g_shopInfoList->clear();
        GlobalVars::g_shopInfoMap.clear();
        GlobalVars::g_commodityInfoList->clear();
        GlobalVars::g_commodityInfoMap.clear();
        GlobalVars::g_sortInfoList->clear();
        GlobalVars::g_sortInfoMap.clear();
        GlobalVars::CommodityImageMap.clear();
        GlobalVars::g_formInfoList->clear();
        GlobalVars::g_formInfoMap.clear();
        GlobalVars::g_clientInfoList->clear();
        GlobalVars::g_clientInfoMap.clear();

        QMessageBox msgBox(this);
        int res = msgBox.question(this, "开设店铺", "是否开设店铺？");
        if(res == QMessageBox::Yes)
        {
            QString dlgTitle="开设店铺";
            QString strInfo="开店成功!";
            QMessageBox::information(this, dlgTitle, strInfo,
                                          QMessageBox::Ok,QMessageBox::NoButton);

            QString msg = m_msgdeal.ShopInfoMsg();
            emit sendMsgInfo(msg);
            msgBox.close();
        }else
        {
            msgBox.close();
        }
    }
}

///注销店铺
void MerchantUI::slotDeleteShop(QString merid, QString id)
{
    QString msg = m_msgdeal.DeleteShop(merid, id);

    emit sendMsgInfo(msg);
}
//注销店铺返回
void MerchantUI::slotDeleteShopResult(bool res)
{
    if(res)
    {
        GlobalVars::g_shopInfoList->clear();
        GlobalVars::g_shopInfoMap.clear();
        GlobalVars::g_commodityInfoList->clear();
        GlobalVars::g_commodityInfoMap.clear();
        GlobalVars::g_sortInfoList->clear();
        GlobalVars::g_sortInfoMap.clear();
        GlobalVars::CommodityImageMap.clear();
        GlobalVars::g_formInfoList->clear();
        GlobalVars::g_formInfoMap.clear();
        GlobalVars::g_clientInfoList->clear();
        GlobalVars::g_clientInfoMap.clear();

        QMessageBox msgBox(this);
        int res = msgBox.question(this, "注销店铺", "是否注销店铺？");
        if(res == QMessageBox::Yes)
        {
            QString dlgTitle="注销店铺";
            QString strInfo="注销成功!";
            QMessageBox::information(this, dlgTitle, strInfo,
                                          QMessageBox::Ok,QMessageBox::NoButton);

            QString msg = m_msgdeal.ShopInfoMsg();
            emit sendMsgInfo(msg);
            msgBox.close();
        }else
        {
            msgBox.close();
        }
    }
}

///删除订单
void MerchantUI::slotDeleteForm(QString merid, QString id)
{
    QString msg = m_msgdeal.DeleteForm(merid, id);

    emit sendMsgInfo(msg);
}
//删除订单返回
void MerchantUI::slotDeleteFormResult(bool res)
{
    if(res)
    {
        GlobalVars::g_formInfoList->clear();
        GlobalVars::g_formInfoMap.clear();
        GlobalVars::g_clientInfoList->clear();
        GlobalVars::g_clientInfoMap.clear();

        QMessageBox msgBox(this);
        int res = msgBox.question(this, "删除订单", "是否删除订单？");
        if(res == QMessageBox::Yes)
        {
            QString dlgTitle="删除订单";
            QString strInfo="删除成功!";
            QMessageBox::information(this, dlgTitle, strInfo,
                                          QMessageBox::Ok,QMessageBox::NoButton);

            QString msg = m_msgdeal.FormInfoMsg();
            emit sendMsgInfo(msg);
            msgBox.close();
        }else
        {
            msgBox.close();
        }
    }
}

//增加订单返回
void MerchantUI::slotInsertFormResult(bool res)
{
    if(res)
    {
        GlobalVars::g_formInfoList->clear();
        GlobalVars::g_formInfoMap.clear();

        QString msg = m_msgdeal.FormInfoMsg();
        emit sendMsgInfo(msg);
    }
}

///编辑资料
void MerchantUI::slotUpdateMerchant(QString name, QString phone, QString site)
{
    qDebug() << "----------";
    QString msg = m_msgdeal.UpdateMerchant(name, phone, site);
    emit sendMsgInfo(msg);
}

//编辑资料
void MerchantUI::slotUpdateMerchantResult(bool res)
{
    if(res)
    {
        GlobalVars::UserImageMap.clear();
        GlobalVars::g_shopInfoList->clear();
        GlobalVars::g_shopInfoMap.clear();
        GlobalVars::g_commodityInfoList->clear();
        GlobalVars::g_commodityInfoMap.clear();
        GlobalVars::g_sortInfoList->clear();
        GlobalVars::g_sortInfoMap.clear();
        GlobalVars::CommodityImageMap.clear();
        GlobalVars::g_formInfoList->clear();
        GlobalVars::g_formInfoMap.clear();
        GlobalVars::g_clientInfoList->clear();
        GlobalVars::g_clientInfoMap.clear();

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
void MerchantUI::slotUpdateMerImage(QImage image)
{
    QString id = GlobalVars::g_localMerchant.getID() % "|";
    emit sendMerImage(id, image);
}

//修改头像返回
void MerchantUI::slotUpdateMerImageResult(bool res)
{
    if(res)
    {
        GlobalVars::UserImageMap.clear();
        GlobalVars::g_shopInfoList->clear();
        GlobalVars::g_shopInfoMap.clear();
        GlobalVars::g_commodityInfoList->clear();
        GlobalVars::g_commodityInfoMap.clear();
        GlobalVars::g_sortInfoList->clear();
        GlobalVars::g_sortInfoMap.clear();
        GlobalVars::CommodityImageMap.clear();
        GlobalVars::g_formInfoList->clear();
        GlobalVars::g_formInfoMap.clear();
        GlobalVars::g_clientInfoList->clear();
        GlobalVars::g_clientInfoMap.clear();

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

///修改商品信息
//修改商品信息
void MerchantUI::slotUpdateCommodity(QString name, QString sprice, QString sex)
{
    QString msg = m_msgdeal.UpdateCommodity(name, sprice, sex);

    emit sendMsgInfo(msg);
}
//修改商信息返回
void MerchantUI::slotUpdateCommodityResult(bool res)
{
    if(res)
    {
        GlobalVars::g_commodityInfoList->clear();
        GlobalVars::g_commodityInfoMap.clear();
        GlobalVars::g_sortInfoList->clear();
        GlobalVars::g_sortInfoMap.clear();
        GlobalVars::CommodityImageMap.clear();
        GlobalVars::g_formInfoList->clear();
        GlobalVars::g_formInfoMap.clear();
        GlobalVars::g_clientInfoList->clear();
        GlobalVars::g_clientInfoMap.clear();

        QMessageBox msgBox(this);
        int res = msgBox.question(this, "修改商品信息", "是否修改商品信息？");
        if(res == QMessageBox::Yes)
        {
            QString dlgTitle="修改商品信息";
            QString strInfo="修改成功!";
            QMessageBox::information(this, dlgTitle, strInfo,
                                          QMessageBox::Ok,QMessageBox::NoButton);

            QString msg = m_msgdeal.CommodityInfoMsg();
            emit sendMsgInfo(msg);
            msgBox.close();
        }else
        {
            msgBox.close();
        }
    }
}



void MerchantUI::on_pb_f_clicked()
{
    ui->lb_head->show();
    m_mydata->hide();
    m_shopdata->hide();
    m_commoditydata->hide();
    m_formdata->hide();
    m_changepswd->hide();
}

void MerchantUI::slotUserLogout()
{
    ///用户退出请求
    QString msg = QString(CMD_UserExit_X)
            % QString("#") % GlobalVars::g_localUser.getID();
    emit sendMsgInfo(msg);
}


void MerchantUI::slotUserLogoutResult(bool res)
{
    qDebug() << "-----------";
    m_isCloseSystem = res;
    this->close();
}

void MerchantUI::closeEvent(QCloseEvent *ev)
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

void MerchantUI::on_pb_go_clicked()
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


void MerchantUI::on_actionFirst_triggered()
{
    ui->lb_head->show();
    m_mydata->hide();
    m_shopdata->hide();
    m_commoditydata->hide();
    m_formdata->hide();
    m_changepswd->hide();
}

void MerchantUI::on_actionMydata_triggered()
{
    ui->lb_head->hide();
    m_mydata->show();
    m_shopdata->hide();
    m_commoditydata->hide();
    m_formdata->hide();
    m_changepswd->hide();
}

void MerchantUI::on_actionShopinfo_triggered()
{
    ui->lb_head->hide();
    m_mydata->hide();
    m_shopdata->show();
    m_commoditydata->hide();
    m_formdata->hide();
    m_changepswd->hide();
}

void MerchantUI::on_actionCommodity_triggered()
{
    ui->lb_head->hide();
    m_mydata->hide();
    m_shopdata->hide();
    m_commoditydata->show();
    m_formdata->hide();
    m_changepswd->hide();
}

void MerchantUI::on_actionForminfo_triggered()
{
    ui->lb_head->hide();
    m_mydata->hide();
    m_shopdata->hide();
    m_commoditydata->hide();
    m_formdata->show();
    m_changepswd->hide();
}

void MerchantUI::on_actionUpdatepswd_triggered()
{
    ui->lb_head->hide();
    m_mydata->hide();
    m_shopdata->hide();
    m_commoditydata->hide();
    m_formdata->hide();
    m_changepswd->show();

    m_changepswd->setUiid();
}

void MerchantUI::on_actionTalk_triggered()
{

}

void MerchantUI::on_pb_first_clicked()
{
    ui->lb_head->show();
    m_mydata->hide();
    m_shopdata->hide();
    m_commoditydata->hide();
    m_formdata->hide();
    m_changepswd->hide();
}



void MerchantUI::on_pb_shop_clicked()
{
    ui->lb_head->hide();
    m_mydata->hide();
    m_shopdata->show();
    m_commoditydata->hide();
    m_formdata->hide();
    m_changepswd->hide();
}

void MerchantUI::on_pb_commodity_clicked()
{
    ui->lb_head->hide();
    m_mydata->hide();
    m_shopdata->hide();
    m_commoditydata->show();
    m_formdata->hide();
    m_changepswd->hide();
}

void MerchantUI::on_pb_form_clicked()
{
    ui->lb_head->hide();
    m_mydata->hide();
    m_shopdata->hide();
    m_commoditydata->hide();
    m_formdata->show();
    m_changepswd->hide();
}

void MerchantUI::on_pb_client_clicked()
{

}

void MerchantUI::on_pb_pswd_clicked()
{
    ui->lb_head->hide();
    m_mydata->hide();
    m_shopdata->hide();
    m_commoditydata->hide();
    m_formdata->hide();
    m_changepswd->show();

    m_changepswd->setUiid();
}

void MerchantUI::on_pb_mydata_pressed()
{
    ui->lb_head->hide();
    m_mydata->show();
    m_shopdata->hide();
    m_commoditydata->hide();
    m_formdata->hide();
    m_changepswd->hide();
}


