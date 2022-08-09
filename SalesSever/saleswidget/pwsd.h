#ifndef PWSD_H
#define PWSD_H

#include <QWidget>
#include <QDebug>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QSqlTableModel>
#include <QPainter>
#include <QEvent>

namespace Ui {
class Pwsd;
}

class Pwsd : public QWidget
{
    Q_OBJECT

public:
    explicit Pwsd(QWidget *parent = 0);
    ~Pwsd();

protected:
    void paintEvent(QPaintEvent *);

public slots:
    void on_pb_ok_clicked();

private:
    Ui::Pwsd *ui;
};

#endif // PWSD_H
