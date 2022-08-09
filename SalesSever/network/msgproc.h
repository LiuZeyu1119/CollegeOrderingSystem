#ifndef MSGPROC_H
#define MSGPROC_H

#include <QThread>
#include <QTimer>
#include <QTime>

#include "execsql.h"

class MsgProc : public QThread
{
    Q_OBJECT

signals:
    void signalSendMsgToClient(QString id, QString msg);
    void signalImage(const QString &id, const QString &imid);
    void signalImagep(const QString &id, const QString &mid);

    ///更新缓存信息
    void signalUpdateSql(bool res);
    void signalInsertShop(bool res);
    void signalDeleteShop(bool res);
    void signalDeleteForm(bool res);
    void signalDeleteShopcart(bool res);
    void signalInsertForm(bool res);
    void signalInsertShopcart(bool res);
    void signalUpdateMerchant(bool res);
    void signalUpdateClient(bool res);
    void signalUpdateCommodity(bool res);

public:
    explicit MsgProc(QThread *parent = 0);
    void exitThread(void);


protected:
    void run();

private:
    bool m_isExit;

    QString str;


    void parseUserAsk(QString msg);
    ///通用请求命令 - 登录退出在MsgSocket中实现
    void parseUserInfo(QString data);
    void parseChangePswd(QString data);
    void parseSendImage(QString data);
    void parseSendImagep(QString data);


    ///解析商家请求命令
    void parseMerSelectShopInfo(QString data);
    void parseMerSelectComInfo(QString data);
    void parseMerComSortInfo(QString data);
    void parseMerFormInfo(QString data);
    void parseMerClientInfo(QString data);
    void parseInsertShop(QString data);
    void parseDeleteShop(QString data);
    void parseDeleteForm(QString data);
    void parseUpdateMerchant(QString data);
    void parseUpdateCommodity(QString data);

    ///解析顾客请求命令
    void parseCliMerchantInfo(QString data);
    void parseCliShopcartInfo(QString data);
    void parseDeleteShopcart(QString data);
    void parseInsertForm(QString data);
    void parseInsertShopcart(QString data);
    void parseUpdateClient(QString data);
};

#endif // MSGPROC_H
