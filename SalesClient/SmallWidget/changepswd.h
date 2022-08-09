#ifndef CHANGEPSWD_H
#define CHANGEPSWD_H

#include <QWidget>

namespace Ui {
class ChangePswd;
}

class ChangePswd : public QWidget
{
    Q_OBJECT

public:
    explicit ChangePswd(QWidget *parent = 0);
    ~ChangePswd();

    void setUiid();

signals:
    void signalNewUserInfo(QString id, QString pswd);

private slots:
    void on_pushButton_clicked();

private:
    Ui::ChangePswd *ui;
};

#endif // CHANGEPSWD_H
