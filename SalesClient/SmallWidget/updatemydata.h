#ifndef UPDATEMYDATA_H
#define UPDATEMYDATA_H

#include <QWidget>
#include "globalvars.h"
#include <QImage>
#include <QPaintEvent>
#include <QPainter>

namespace Ui {
class UpdateMyData;
}

class UpdateMyData : public QWidget
{
    Q_OBJECT

public:
    explicit UpdateMyData(QWidget *parent = 0);
    ~UpdateMyData();

    void updateInfo();

    void paintEvent(QPaintEvent *);

signals:
    void signalUpdateMerchant(QString name, QString phone,
                              QString site);
    void signalUpdateMerImage(QImage image);

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pb_save_clicked();

private:
    Ui::UpdateMyData *ui;

    QImage mer_image;
};

#endif // UPDATEMYDATA_H
