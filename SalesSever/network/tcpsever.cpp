#include "tcpsever.h"
#include "tcpsocket.h"
#include <QDebug>

TcpSever::TcpSever(QObject *parent) : QObject(parent)
{
    qDebug() << "TcpSever::TcpSever(QObject *parent) : QObject(parent)";

    m_socketMap.clear();
    m_msgProc = new MsgProc;
    m_server = new QTcpServer(this);



    ///通用信号和槽
    connect(m_server, SIGNAL(newConnection()),
            this, SLOT(slotNewConnection()));
    connect(m_msgProc, SIGNAL(signalSendMsgToClient(QString,QString)),
            this, SLOT(slotSendMsgToClient(QString,QString)));
    connect(m_msgProc, SIGNAL(signalImage(QString,QString)),
            this, SLOT(slotSendImageToClient(QString,QString)));
    connect(m_msgProc, SIGNAL(signalImagep(QString,QString)),
            this, SLOT(slotSendImagepToClient(QString,QString)));
//    connect(m_msgProc, SIGNAL(signalUserNum(bool,QString)),
//            this, SLOT(slotUserNum(bool,QString)));

    ///更新缓存信息
    connect(m_msgProc, SIGNAL(signalUpdateSql(bool)),
            this, SLOT(slotUpdateSql(bool)));
    connect(m_msgProc, SIGNAL(signalInsertShop(bool)),
            this, SLOT(slotInsertShop(bool)));
    connect(m_msgProc, SIGNAL(signalDeleteShop(bool)),
            this, SLOT(slotDeleteShop(bool)));
    connect(m_msgProc, SIGNAL(signalDeleteForm(bool)),
            this, SLOT(slotDeleteForm(bool)));
    connect(m_msgProc, SIGNAL(signalDeleteShopcart(bool)),
            this, SLOT(slotDeleteShopcart(bool)));
    connect(m_msgProc, SIGNAL(signalInsertForm(bool)),
            this, SLOT(slotInsertForm(bool)));
    connect(m_msgProc, SIGNAL(signalInsertShopcart(bool)),
            this, SLOT(slotInsertShopcart(bool)));
    connect(m_msgProc, SIGNAL(signalUpdateMerchant(bool)),
            this, SLOT(slotUpdateMerchant(bool)));
    connect(m_msgProc, SIGNAL(signalUpdateClient(bool)),
            this, SLOT(slotUpdateClient(bool)));
    connect(m_msgProc, SIGNAL(signalUpdateCommodity(bool)),
            this, SLOT(slotUpdateCommodity(bool)));


    m_server->listen(QHostAddress::Any, 55555);
    m_msgProc->start();
}

void TcpSever::slotNewConnection()
{
    qDebug() << "TcpSever::slotNewConnection()";
    QTcpSocket *socket = m_server->nextPendingConnection();

    tcpSocket = new TcpSocket(socket);
    connect(tcpSocket, SIGNAL(signalRegisterSocket(QString,TcpSocket*)),
            this, SLOT(slotRegisterSocket(QString,TcpSocket*)));
    connect(tcpSocket, SIGNAL(signalLogoutSocket(QString,TcpSocket*)),
            this, SLOT(slotLogoutSocket(QString,TcpSocket*)));

    connect(tcpSocket, SIGNAL(signalInsertUser(bool)),
            this, SLOT(slotInsertUser(bool)));

    connect(tcpSocket, SIGNAL(signalUpdateUserImage(QString,bool)),
            this, SLOT(slotUpdateUserImage(QString,bool)));
}

void TcpSever::slotRegisterSocket(QString id, TcpSocket *socket)
{
    emit signalUserNum(id);
    m_socketMap.insert(id, socket); //登录成功，添加Socket到g_socketMap
}

void TcpSever::slotLogoutSocket(QString id, TcpSocket *socket)
{
    if(m_socketMap.contains(id))
    {
        emit signalUserNumX(id);
        m_socketMap.remove(id);
    }
}

void TcpSever::slotSendMsgToClient(QString id, QString msg)
{
    if(m_socketMap.contains(id))
    {
        m_socketMap[id]->slotSendMsg(msg);
    }
}

void TcpSever::slotSendImageToClient(QString id, QString imid)
{
    if(m_socketMap.contains(id))
    {
        m_socketMap[id]->slotImage(id, imid);
    }
}

void TcpSever::slotSendImagepToClient(QString id, QString mid)
{
    if(m_socketMap.contains(id))
    {
        m_socketMap[id]->slotImagep(mid);
    }
}

///更新缓存信息
void TcpSever::slotInsertUser(bool res)
{
    if(res)
    {
        emit signalInsertUser(res);
    }
}

void TcpSever::slotUpdateSql(bool res)
{
    if(res)
    {
        emit signalUpdateSqla(res);
    }

}

void TcpSever::slotInsertShop(bool res)
{
    if(res)
    {
        emit signalInsertShop(res);
    }

}

void TcpSever::slotDeleteShop(bool res)
{
    if(res)
    {
        emit signalDeleteShop(res);
    }

}

void TcpSever::slotDeleteForm(bool res)
{
    if(res)
    {
        emit signalDeleteForm(res);
    }

}

void TcpSever::slotDeleteShopcart(bool res)
{
    if(res)
    {
        emit signalDeleteShopcart(res);
    }

}

void TcpSever::slotInsertForm(bool res)
{
    if(res)
    {
        emit signalInsertForm(res);
    }

}

void TcpSever::slotInsertShopcart(bool res)
{
    if(res)
    {
        emit signalInsertShopcart(res);
    }

}

void TcpSever::slotUpdateMerchant(bool res)
{
    if(res)
    {
        emit signalUpdateMerchant(res);
    }

}

void TcpSever::slotUpdateClient(bool res)
{
    if(res)
    {
        emit signalUpdateClient(res);
    }

}

void TcpSever::slotUpdateCommodity(bool res)
{
    if(res)
    {
        emit signalUpdateCommodity(res);
    }

}

void TcpSever::slotUpdateUserImage(QString id, bool res)
{
    if(res)
    {
        emit signalUpdateUserImage(id, res);
    }

}
