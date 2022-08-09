#ifndef MYDATA_H
#define MYDATA_H

#include <QWidget>
#include "globalvars.h"
#include <QImage>
#include "updatemydata.h"

namespace Ui {
class MyData;
}

class MyData : public QWidget
{
    Q_OBJECT

public:
    explicit MyData(QWidget *parent = 0);
    ~MyData();

    void getMerchantInfo();

signals:
    void signalUpdateMerchant(QString name, QString phone,
                              QString site);
    void signalUpdateMerImage(QImage image);

public slots:
    void on_pushButton_clicked();

    void slotUpdateMerchant(QString name, QString phone,
                            QString site);
    void slotUpdateMerImage(QImage image);

private:
    Ui::MyData *ui;

    UpdateMyData *m_updatemydata;
};

#endif // MYDATA_H
