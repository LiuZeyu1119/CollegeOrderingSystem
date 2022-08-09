#include "salesclient.h"
#include <QStringBuilder>

SalesClient::SalesClient(QWidget *parent) :
    QMainWindow(parent)
{

    m_msgSocket = new MsgSocket;

    m_saleslogin = new SalesLogin;
    m_merchantui = new MerchantUI;
    m_clientui = new ClientUI;

    connect(m_saleslogin, SIGNAL(signalUserLogin(QString,QString)),
            this, SLOT(slotUserLogin(QString,QString)));

    connect(m_msgSocket, SIGNAL(signalUserLoginResult(bool)),
            this, SLOT(slotUserLoginResult(bool)));

    connect(m_saleslogin, SIGNAL(signalInsertUser(QString,QString,QString)),
            this, SLOT(slotInsertUser(QString,QString,QString)));
    connect(m_msgSocket, SIGNAL(signalInsertUserResult(bool)),
            this, SLOT(slotInsertUserResult(bool)));


    m_saleslogin->show();

    m_msgSocket->start();
}

SalesClient::~SalesClient()
{
    m_msgSocket->exitThread();
    if(m_msgSocket->wait())
    {
        delete m_msgSocket;
    }
}

void SalesClient::slotInsertUser(QString id, QString pswd, QString type)
{
    ///注册用户
    QString msg = m_msgdeal.UserInsertMsg(id, pswd, type);
    m_msgSocket->slotSendMsg(msg);
}

void SalesClient::slotUserLogin(QString id, QString pswd)
{
    ///用户登录请求
    QString msg = m_msgdeal.UserLoginMsg(id, pswd);
    m_msgSocket->slotSendMsg(msg);
}

void SalesClient::slotUserLoginResult(bool res)
{
    if(res)
    {
        if(GlobalVars::g_localUser.getType() == "商家")
        {
            initMerchantMS();
        }else if(GlobalVars::g_localUser.getType() == "顾客")
        {
            initClientMS();
        }

        m_saleslogin->hide();

        ///个人信息请求
        QString msg = m_msgdeal.UserInfoMsg();
        m_msgSocket->slotSendMsg(msg);
    }else
    {
        m_saleslogin->userLoginFail();
    }
}

void SalesClient::slotInsertUserResult(bool res)
{
    if(res)
    {
        m_saleslogin->userInsert();
    }
}

//商家
void SalesClient::initMerchantMS()
{
    this->setWindowTitle(tr("外卖销售系统[商家版]"));
    m_merchantui->show();
    m_clientui->hide();

    connect(m_merchantui, SIGNAL(sendMsgInfo(QString)),
            m_msgSocket, SLOT(slotSendMsg(QString)));

    connect(m_msgSocket, SIGNAL(signalGainMerchantInfo(bool)),
            m_merchantui, SLOT(slotGainMerchantInfo(bool)));

    connect(m_msgSocket, SIGNAL(signalUserLogoutResult(bool)),
            m_merchantui, SLOT(slotUserLogoutResult(bool)));

    connect(m_msgSocket, SIGNAL(signalGetUserImageResult(bool)),
            m_merchantui, SLOT(slotGetUserImageResult(bool)));

    connect(m_msgSocket, SIGNAL(signalGetShopInfoResult(bool)),
            m_merchantui, SLOT(slotGetShopInfoResult(bool)));

    connect(m_msgSocket, SIGNAL(signalGetCommodityInfoResult(bool)),
            m_merchantui, SLOT(slotGetCommodityInfoResult(bool)));

    connect(m_msgSocket, SIGNAL(signalGetSortInfoResult(bool)),
            m_merchantui, SLOT(slotGetSortInfoResult(bool)));

    connect(m_msgSocket, SIGNAL(signalGetComImageResult(bool)),
            m_merchantui, SLOT(slotGetComImageResult(bool)));

    connect(m_msgSocket, SIGNAL(signalGetFormInfoResult(bool)),
            m_merchantui, SLOT(slotGetFormInfoResult(bool)));

    connect(m_msgSocket, SIGNAL(signalGetClientInfoResult(bool)),
            m_merchantui, SLOT(slotGetClientInfoResult(bool)));

    ///增加删除操作
    connect(m_msgSocket, SIGNAL(signalChangePswdResult(bool)),
            m_merchantui, SLOT(slotChangePswdResult(bool)));
    connect(m_msgSocket, SIGNAL(signalInsertShopResult(bool)),
            m_merchantui, SLOT(slotInsertShopResult(bool)));
    connect(m_msgSocket, SIGNAL(signalDeleteShopResult(bool)),
            m_merchantui, SLOT(slotDeleteShopResult(bool)));
    connect(m_msgSocket, SIGNAL(signalDeleteFormResult(bool)),
            m_merchantui, SLOT(slotDeleteFormResult(bool)));
    connect(m_msgSocket, SIGNAL(signalUpdateMerchantResult(bool)),
            m_merchantui, SLOT(slotUpdateMerchantResult(bool)));
    connect(m_msgSocket, SIGNAL(signalUpdateCommodityResult(bool)),
            m_merchantui, SLOT(slotUpdateCommodityResult(bool)));
    connect(m_merchantui, SIGNAL(sendMerImage(QString,QImage)),
            m_msgSocket, SLOT(slotImage(QString,QImage)));
    connect(m_msgSocket, SIGNAL(signalUpdateMerImageResult(bool)),
            m_merchantui, SLOT(slotUpdateMerImageResult(bool)));

    connect(m_msgSocket, SIGNAL(signalInsertFormResult(bool)),
            m_merchantui, SLOT(slotInsertFormResult(bool)));

}

//顾客
void SalesClient::initClientMS()
{
    this->setWindowTitle(tr("外卖销售系统[顾客版]"));
    m_merchantui->hide();
    m_clientui->show();

    connect(m_msgSocket, SIGNAL(signalUserLogoutResult(bool)),
            m_clientui, SLOT(slotUserLogoutResult(bool)));

    connect(m_clientui, SIGNAL(sendMsgInfo(QString)),
            m_msgSocket, SLOT(slotSendMsg(QString)));

    connect(m_msgSocket, SIGNAL(signalGainClientInfo(bool)),
            m_clientui, SLOT(slotGainClientInfo(bool)));

    connect(m_msgSocket, SIGNAL(signalGetUserImageResult(bool)),
            m_clientui, SLOT(slotGetUserImageResult(bool)));

    connect(m_msgSocket, SIGNAL(signalGetMerchantInfoResult(bool)),
            m_clientui, SLOT(slotGetMerchantInfoResult(bool)));

    connect(m_msgSocket, SIGNAL(signalGetMerImageResult(bool)),
            m_clientui, SLOT(slotGetMerImageResult(bool)));

    connect(m_msgSocket, SIGNAL(signalGetShopInfoResult(bool)),
            m_clientui, SLOT(slotGetShopInfoResult(bool)));

    connect(m_msgSocket, SIGNAL(signalGetCommodityInfoResult(bool)),
            m_clientui, SLOT(slotGetCommodityInfoResult(bool)));

    connect(m_msgSocket, SIGNAL(signalGetSortInfoResult(bool)),
            m_clientui, SLOT(slotGetSortInfoResult(bool)));

    connect(m_msgSocket, SIGNAL(signalGetComImageResult(bool)),
            m_clientui, SLOT(slotGetComImageResult(bool)));

    connect(m_msgSocket, SIGNAL(signalGetFormInfoResult(bool)),
            m_clientui, SLOT(slotGetFormInfoResult(bool)));

    connect(m_msgSocket, SIGNAL(signalGetShopcartInfoResult(bool)),
            m_clientui, SLOT(slotGetShopcartInfoResult(bool)));


    ///增加删除操作
    connect(m_msgSocket, SIGNAL(signalChangePswdResult(bool)),
            m_clientui, SLOT(slotChangePswdResult(bool))); 
    connect(m_msgSocket, SIGNAL(signalDeleteFormResult(bool)),
            m_clientui, SLOT(slotDeleteFormResult(bool)));
    connect(m_msgSocket, SIGNAL(signalDeleteShopcartResult(bool)),
            m_clientui, SLOT(slotDeleteShopcartResult(bool)));
    connect(m_msgSocket, SIGNAL(signalInsertFormResult(bool)),
            m_clientui, SLOT(slotInsertFormResult(bool)));
    connect(m_msgSocket, SIGNAL(signalInsertShopcartResult(bool)),
            m_clientui, SLOT(slotInsertShopcartResult(bool)));
    connect(m_msgSocket, SIGNAL(signalUpdateClientResult(bool)),
            m_clientui, SLOT(slotUpdateClientResult(bool)));
    connect(m_clientui, SIGNAL(sendCliImage(QString,QImage)),
            m_msgSocket, SLOT(slotImage(QString,QImage)));
    connect(m_msgSocket, SIGNAL(signalUpdateCliImageResult(bool)),
            m_clientui, SLOT(slotUpdateCliImageResult(bool)));
}
