#ifndef TCPSOCKET_H
#define TCPSOCKET_H

#include <QObject>
#include <QTcpSocket>
#include <QMap>
#include <QStringBuilder>

#include <QImage>
#include <QPixmap>
#include <QByteArray>
#include <QDataStream>

#include "globalvars.h"
#include "execsql.h"

class TcpSocket : public QObject
{
    Q_OBJECT
public:
    explicit TcpSocket(QTcpSocket *socket, QObject *parent = 0);
    ~TcpSocket();
    QString m_localUid;

signals:
    void signalRegisterSocket(QString id, TcpSocket *socket);
    void signalLogoutSocket(QString id, TcpSocket *socket);
    void signalInsertUser(bool res);

    void signalUpdateUserImage(QString id, bool res);
//    void signalUpdateComImage(QString id, bool res);

public slots:
    void slotReadyRead();
    void slotImage(const QString &id, const QString &imid);
    void slotImagep(const QString &mid);
    bool slotSendMsg(QString msg);

private:

    quint8 m_msgType;
    quint16 m_tcpBlockSize;
    QTcpSocket *m_socket;

    void parseUserAsk(QString msg);
    ///通用请求命令 - 登录退出注册在TcpSocket中实现
    void parseUserLogin(QString data);
    void parseUserExit(QString data);
    void parseUserInsert(QString data);
};

typedef QMap<QString, TcpSocket*> SocketMap;//id, socket

#endif // TCPSOCKET_H
