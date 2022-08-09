#ifndef CREATUSER_H
#define CREATUSER_H

#include <QWidget>
#include <QPixmap>
#include <QEvent>
#include <QPainter>

#include <QDebug>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QSqlTableModel>

namespace Ui {
class CreatUser;
}

class CreatUser : public QWidget
{
    Q_OBJECT

public:
    explicit CreatUser(QWidget *parent = 0);
    ~CreatUser();

    void paintEvent(QPaintEvent *);


public slots:
    void on_pb_ok_clicked();

private:
    Ui::CreatUser *ui;
};

#endif // CREATUSER_H
