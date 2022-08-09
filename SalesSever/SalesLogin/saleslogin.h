#ifndef SALESLOGIN_H
#define SALESLOGIN_H

#include <QWidget>
#include <QPaintEvent>
#include <QPainter>
#include <QPixmap>

#include <QMessageBox>

#include "creatuser.h"
#include "pwsd.h"

namespace Ui {
class SalesLogin;
}

class SalesLogin : public QWidget
{
    Q_OBJECT

signals:
    void sendUserLogin(QString id, QString pswd);
    void creatUserSignal();
    void updatePswdSignal();

public:
    explicit SalesLogin(QWidget *parent = 0);
    ~SalesLogin();

    void userLoginFail(void);

protected:
    void paintEvent(QPaintEvent *);

private slots:
    void on_pb_login_clicked();

    void on_pb_register_clicked();

    void creatUserSlot();
    void updatePswdSlot();

    void on_pb_forget_clicked();

private:
    Ui::SalesLogin *ui;

    CreatUser *m_creatuser;
    Pwsd *m_pwsd;
};

#endif // SALESLOGIN_H
