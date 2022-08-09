#ifndef ONECOMMODITY_H
#define ONECOMMODITY_H

#include <QWidget>
#include "globalvars.h"

#include <QPaintEvent>
#include <QPainter>

namespace Ui {
class OneCommodity;
}

class OneCommodity : public QWidget
{
    Q_OBJECT

signals:
    void signalUpdateCommodity(QString name, QString sprice, QString sex);

public:
    explicit OneCommodity(QWidget *parent = 0);
    ~OneCommodity();

    void paintEvent(QPaintEvent *);

    void getOneCommodity(const QString &id);

private slots:
    void on_pb_update_clicked();

    void on_pb_save_clicked();

private:
    Ui::OneCommodity *ui;
};

#endif // ONECOMMODITY_H
