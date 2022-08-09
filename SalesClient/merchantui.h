#ifndef MERCHANTUI_H
#define MERCHANTUI_H

#include <QMainWindow>
#include "msgdeal.h"

#include <QTimer>
#include <QTime>
#include <QImage>
#include <QCloseEvent>

#include "mydata.h"
#include "shopdata.h"
#include "formdata.h"
#include "commoditydata.h"
#include "changepswd.h"

namespace Ui {
class MerchantUI;
}

class MerchantUI : public QMainWindow
{
    Q_OBJECT

public:
    explicit MerchantUI(QWidget *parent = 0);
    ~MerchantUI();
    void slotUserLogout();

protected:
    void closeEvent(QCloseEvent *ev);

signals:
    void sendMsgInfo(const QString &msg);
    void sendMerImage(const QString &id, const QImage &image);

public slots:
    void slotGainMerchantInfo(bool res);
    void slotGetUserImageResult(bool res);
    void slotUserLogoutResult(bool res);
    void slotGetShopInfoResult(bool res);
    void slotGetCommodityInfoResult(bool res);
    void slotGetSortInfoResult(bool res);
    void slotGetComImageResult(bool res);
    void slotGetFormInfoResult(bool res);
    void slotGetClientInfoResult(bool res);

    void slotChangePswd(QString id, QString pswd);
    void slotChangePswdResult(bool res);

    void slotInsertShop(QString id, QString merid, QString name, QString type);
    void slotInsertShopResult(bool res);

    void slotDeleteShop(QString merid, QString id);
    void slotDeleteShopResult(bool res);

    void slotDeleteForm(QString merid, QString id);
    void slotDeleteFormResult(bool res);

    void slotUpdateMerchant(QString name, QString phone,
                            QString site);
    void slotUpdateMerchantResult(bool res);

    void slotUpdateCommodity(QString name, QString sprice, QString sex);
    void slotUpdateCommodityResult(bool res);

    void slotUpdateMerImage(QImage image);
    void slotUpdateMerImageResult(bool res);

    void slotInsertFormResult(bool res);

    void GetDateTime();//动态显示时间

private slots:


    void on_actionFirst_triggered();

    void on_actionMydata_triggered();

    void on_actionShopinfo_triggered();

    void on_actionCommodity_triggered();

    void on_actionForminfo_triggered();

    void on_actionUpdatepswd_triggered();

    void on_actionTalk_triggered();

    void on_pb_first_clicked();

    void on_pb_shop_clicked();

    void on_pb_commodity_clicked();

    void on_pb_form_clicked();

    void on_pb_client_clicked();

    void on_pb_pswd_clicked();

    void on_pb_mydata_pressed();

    void on_pb_f_clicked();

    void on_pb_go_clicked();

private:
    Ui::MerchantUI *ui;

    MsgDeal m_msgdeal;

    int m_x;
    QTimer *m_Timer;

    MyData *m_mydata;
    ShopData *m_shopdata;
    CommodityData *m_commoditydata;
    FormData *m_formdata;
    ChangePswd *m_changepswd;

    QImage mer_image;
    bool m_isCloseSystem;
};

#endif // MERCHANTUI_H
