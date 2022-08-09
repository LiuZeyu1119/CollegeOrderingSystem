#ifndef SALESLOGIN_H
#define SALESLOGIN_H

#include <QWidget>
#include <QPaintEvent>
#include <QPainter>
#include <QPixmap>

#include <QMessageBox>
#include <QCloseEvent>

#include "insertuser.h"

namespace Ui {
class SalesLogin;
}

class SalesLogin : public QWidget
{
    Q_OBJECT

signals:
    void signalUserLogin(QString id, QString pswd);
    void signalInsertUser(QString id, QString pswd, QString type);


public:
    explicit SalesLogin(QWidget *parent = 0);
    ~SalesLogin();

    void userLoginFail(void);
    void userInsert();

protected:
    void paintEvent(QPaintEvent *);

public slots:
    void on_pb_login_clicked();

    void on_pb_register_clicked();

    void slotInsertUser(QString id, QString pswd, QString type);

private slots:
    void on_pb_login_2_clicked();

private:
    Ui::SalesLogin *ui;

    InsertUser *m_insertuser;
};

#endif // SALESLOGIN_H
