#ifndef INSERTUSER_H
#define INSERTUSER_H

#include <QWidget>

namespace Ui {
class InsertUser;
}

class InsertUser : public QWidget
{
    Q_OBJECT

signals:
    void signalInsertUser(QString id, QString pswd, QString type);

public:
    explicit InsertUser(QWidget *parent = 0);
    ~InsertUser();

private slots:
    void on_pb_ok_clicked();

private:
    Ui::InsertUser *ui;
};

#endif // INSERTUSER_H
