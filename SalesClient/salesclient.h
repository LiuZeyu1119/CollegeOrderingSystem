#ifndef SALESCLIENT_H
#define SALESCLIENT_H

#include <QMainWindow>
#include "msgsocket.h"
#include "globalvars.h"
#include "merchantui.h"
#include "clientui.h"
#include "saleslogin.h"
#include "msgdeal.h"

class SalesClient : public QMainWindow
{
    Q_OBJECT

public:
    explicit SalesClient(QWidget *parent = 0);
    ~SalesClient();

    void initMerchantMS();
    void initClientMS();

public slots:
    void slotUserLogin(QString id, QString pswd);
    void slotUserLoginResult(bool res);
    void slotInsertUser(QString id, QString pswd, QString type);
    void slotInsertUserResult(bool res);

private:
    MsgSocket *m_msgSocket;
    SalesLogin *m_saleslogin;
    MerchantUI *m_merchantui;
    ClientUI *m_clientui;

    MsgDeal m_msgdeal;
};

#endif // SALESCLIENT_H
