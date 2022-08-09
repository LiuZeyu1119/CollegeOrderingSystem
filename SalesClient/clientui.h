#ifndef CLIENTUI_H
#define CLIENTUI_H

#include <QMainWindow>
#include <QDebug>
#include "msgdeal.h"

#include <QTimer>
#include <QTime>
#include <QImage>
#include <QMessageBox>
#include <QCloseEvent>

#include "clidata.h"
#include "firstdata.h"
#include "merchantdata.h"
#include "shopcartdata.h"
#include "cliformdata.h"
#include "changepswd.h"


namespace Ui {
class ClientUI;
}

class ClientUI : public QMainWindow
{
    Q_OBJECT

public:
    explicit ClientUI(QWidget *parent = 0);
    ~ClientUI();
    void slotUserLogout();

protected:
    void closeEvent(QCloseEvent *ev);

signals:
    void sendMsgInfo(const QString &msg);
    void sendCliImage(const QString &id, const QImage &image);

public slots:

    void slotGainClientInfo(bool res);
    void slotGetUserImageResult(bool res);
    void slotGetMerchantInfoResult(bool res);
    void slotGetMerImageResult(bool res);
    void slotGetShopInfoResult(bool res);
    void slotGetCommodityInfoResult(bool res);
    void slotGetSortInfoResult(bool res);
    void slotGetComImageResult(bool res);
    void slotGetFormInfoResult(bool res);
    void slotGetShopcartInfoResult(bool res);

    void slotChangePswd(QString id, QString pswd);
    void slotChangePswdResult(bool res);

    void slotDeleteForm(QString cliid, QString id);
    void slotDeleteFormResult(bool res);

    void slotDeleteShopcart(QString cliid, QString comid);
    void slotDeleteShopcartResult(bool res);

    void slotInsertForm(QString cliid, QString comid, QString soid, QString num);
    void slotInsertFormResult(bool res);

    void slotInsertShopcart(QString cliid, QString comid, QString soid, QString num);
    void slotInsertShopcartResult(bool res);

    void slotUpdateClient(QString name, QString phone, QString site);
    void slotUpdateClientResult(bool res);

    void slotUserLogoutResult(bool res);

    void slotUpdateCliImage(QImage image);
    void slotUpdateCliImageResult(bool res);

    void GetDateTime();//动态显示时间

private slots:

    void on_pb_first_clicked();

    void on_pb_mydata_clicked();

    void on_pb_pswd_clicked();

    void on_pb_merchant_clicked();

    void on_pb_form_clicked();

    void on_pb_shopcart_clicked();

    void on_pb_clientmer_clicked();


    void on_pb_f_clicked();

    void on_pb_go_clicked();


private:
    Ui::ClientUI *ui;

    MsgDeal m_msgdeal;

    int m_x;
    int m_y;

    QTimer *m_Timer;

    CliData *m_clidata;
    FirstData *m_firstdata;
    CliFormData *m_cliformdata;
    ShopcartData *m_shopcartdata;
    MerchantData *m_merchantdata;
    ChangePswd *m_changepswd;

    bool m_isCloseSystem;
};

#endif // CLIENTUI_H
