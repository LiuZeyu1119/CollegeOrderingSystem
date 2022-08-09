#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPaintEvent>
#include <QPainter>
#include <QTimer>
#include <QTime>

#include "saleslogin.h"
#include "userms.h"
#include "clientms.h"
#include "merchantms.h"
#include "shopms.h"
#include "commodityms.h"
#include "sortms.h"
#include "photoms.h"
#include "shopcartms.h"
#include "formms.h"
#include "dialogms.h"
#include "pwsd.h"

#include "tcpsever.h"

namespace Ui {
class MainWindow;
}

//enum Index_Stack{
//    Index_Welcome = 0,
//    Index_Teacher,
//    Index_Class,
//    Index_Student,
//    Index_Course,
//    Index_Grade
//};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void setPushButton();

protected:
    void paintEvent(QPaintEvent *);

public slots:
    void GetDateTime();//动态显示时间

    void slotUserLogin(QString id, QString pswd);
    void slotUserNum(QString id);
    void slotUserNumX(QString id);

    ///更新缓存信息
    void slotInsertUser(bool res);
    void slotUpdateSqla(bool res);
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


private slots:
    void on_user_triggered();

    void on_first_triggered();

    void on_client_triggered();

    void on_merchant_triggered();

    void on_shop_triggered();

    void on_commodity_triggered();

    void on_actionPswdMS_triggered();

    void on_actionSortMS_triggered();

    void on_actionPhotoMS_triggered();

    void on_actionFormMS_triggered();

    void on_actionShopcartMS_triggered();

    void on_actionDialogMS_triggered();

    void on_pb_remove_clicked();

    void on_pb_quit_clicked();

    void on_pb_user_3_clicked();

    void on_pb_cli_3_clicked();

    void on_pb_mer_3_clicked();

    void on_pb_shop_3_clicked();

    void on_pb_com_3_clicked();

    void on_pb_pswd_3_clicked();

    void on_pb_form_3_clicked();

    void on_pb_cart_3_clicked();

    void on_pb_dia_3_clicked();

    void on_pb_back_clicked();

private:
    Ui::MainWindow *ui;
    QTimer *m_Timer;

    SalesLogin *m_saleslogin;
    UserMS *m_userms;
    ClientMS *m_clientms;
    MerchantMS *m_merchantms;
    ShopMS *m_shopms;
    CommodityMS *m_commodityms;
    SortMS *m_sortms;
    PhotoMS *m_photoms;
    FormMS *m_formms;
    ShopcartMS *m_shopcartms;
    DialogMS *m_dialogms;
    Pwsd *m_pwsd;

    TcpSever *m_tcpSever;

    int m_clientnum;
    int m_merchantnum;

    int x;
};

#endif // MAINWINDOW_H
