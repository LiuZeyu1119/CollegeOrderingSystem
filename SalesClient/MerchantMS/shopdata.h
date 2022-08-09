#ifndef SHOPDATA_H
#define SHOPDATA_H

#include <QWidget>
#include "globalvars.h"
#include <QImage>

namespace Ui {
class ShopData;
}

class ShopData : public QWidget
{
    Q_OBJECT

    enum Search_Condition{
        Search_None = 0,
        Search_Name,
        Search_Type
    };

public:
    explicit ShopData(QWidget *parent = 0);
    ~ShopData();

    void getShopInfo();

signals:
    void signalInsertShop(QString id, QString merid, QString name, QString type);
    void signalDeleteShop(QString merid, QString id);

private slots:
    void on_comboBox_currentIndexChanged(int index);

    void on_pb_select_clicked();

    void on_tableWidget_clicked(const QModelIndex &index);
    
    void on_pb_insert_clicked();

    void on_pb_save_clicked();

    void on_pb_delete_clicked();

private:
    Ui::ShopData *ui;

    int m_searchCond;
};

#endif // SHOPDATA_H
