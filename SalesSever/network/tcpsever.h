#ifndef TCPSEVER_H
#define TCPSEVER_H

#include <QObject>

#include "globalvars.h"
#include "execsql.h"
#include "tcpsocket.h"
#include "msgproc.h"

#include <QStringBuilder>
#include <QTcpServer>

class TcpSever : public QObject
{
    Q_OBJECT
public:
    explicit TcpSever(QObject *parent = 0);

signals:
    void signalInsertUser(bool res);
    void signalUpdateSqla(bool res);
    void signalInsertShop(bool res);
    void signalDeleteShop(bool res);
    void signalDeleteForm(bool res);
    void signalDeleteShopcart(bool res);
    void signalInsertForm(bool res);
    void signalInsertShopcart(bool res);
    void signalUpdateMerchant(bool res);
    void signalUpdateClient(bool res);
    void signalUpdateCommodity(bool res);
    void signalUpdateUserImage(QString id, bool res);

    void signalUserNum(QString id);
    void signalUserNumX(QString id);

public slots:
    void slotNewConnection();
    void slotRegisterSocket(QString id, TcpSocket *socket);
    void slotLogoutSocket(QString id, TcpSocket *socket);
    void slotSendMsgToClient(QString id, QString msg);
    void slotSendImageToClient(QString id, QString imid);
    void slotSendImagepToClient(QString id, QString mid);



    ///更新缓存信息
    void slotInsertUser(bool res);
    void slotUpdateSql(bool res);
    void slotInsertShop(bool res);
    void slotDeleteShop(bool res);
    void slotDeleteForm(bool res);
    void slotDeleteShopcart(bool res);
    void slotInsertForm(bool res);
    void slotInsertShopcart(bool res);
    void slotUpdateMerchant(bool res);
    void slotUpdateClient(bool res);
    void slotUpdateCommodity(bool res);
    void slotUpdateUserImage(QString id, bool res);
//    void slotUpdateComImage(QString id, bool res);


private:
    QTcpServer *m_server;
    MsgProc *m_msgProc;
    SocketMap m_socketMap;
    TcpSocket *tcpSocket;
};

#endif // TCPSEVER_H

