#ifndef MSGSOCKET_H
#define MSGSOCKET_H

#include <QThread>
#include <QTcpSocket>

#include "globalvars.h"
#include <QImage>
#include <QPixmap>

class MsgSocket : public QThread
{
    Q_OBJECT

signals:
    void signalUserLoginResult(bool res);
    void signalUserLogoutResult(bool res);
    void signalGainMerchantInfo(bool res);
    void signalGainClientInfo(bool res);
    void signalGetUserImageResult(bool res);
    void signalInsertUserResult(bool res);

    void signalGetShopInfoResult(bool res);
    void signalGetCommodityInfoResult(bool res);
    void signalGetSortInfoResult(bool res);
    void signalGetComImageResult(bool res);
    void signalGetFormInfoResult(bool res);
    void signalGetClientInfoResult(bool res);
    void signalGetMerchantInfoResult(bool res);
    void signalGetMerImageResult(bool res);
    void signalGetShopcartInfoResult(bool res);

    void signalChangePswdResult(bool res);
    void signalInsertShopResult(bool res);
    void signalDeleteShopResult(bool res);
    void signalDeleteFormResult(bool res);
    void signalDeleteShopcartResult(bool res);
    void signalInsertFormResult(bool res);
    void signalInsertShopcartResult(bool res);
    void signalUpdateMerchantResult(bool res);
    void signalUpdateClientResult(bool res);
    void signalUpdateCommodityResult(bool res);
    void signalUpdateMerImageResult(bool res);
    void signalUpdateCliImageResult(bool res);

public slots:
    void slotReadyRead();
    void slotSendMsg(QString msg);
    void slotImage(const QString &id, const QImage &image);

public:
    explicit MsgSocket(QThread *parent = 0);
    ~MsgSocket();

    void exitThread(void);

protected:
    void run();

private:
    bool m_isExit;
    quint8 m_msgType;
    quint16 m_tcpBlockSize;
    QTcpSocket *m_tcpSocket;

    void parseUserAsk(QString msg);
    ///解析通用请求命令
    void parseUserLogin(QString data);
    void parseUserInfo(QString data);
    void parseChangePswd(QString data);
    void parseUserExit(QString data);
    void parseUserInsert(QString data);

    void parseShopInfo(QString data);
    void parseCommodityInfo(QString data);
    void parseSortInfo(QString data);
    void parseFormInfo(QString data);
    void parseClientInfo(QString data);
    void parseMerchantInfo(QString data);
    void parseShopcartInfo(QString data);

    ///商家请求命令
    void parseInsertShop(QString data);
    void parseDeleteShop(QString data);
    void parseDeleteForm(QString data);
    void parseUpdateMerInfo(QString data);
    void parseUpdateComInfo(QString data);
    void parseUpdateUserImage(QString data);

    ///顾客请求命令
    void parseDeleteShopcart(QString data);
    void parseInsertForm(QString data);
    void parseInsertShopcart(QString data);
    void parseUpdateCliInfo(QString data);
};

#endif // MSGSOCKET_H
