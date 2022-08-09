#ifndef CLISHOPDATA_H
#define CLISHOPDATA_H

#include <QWidget>
#include <QPaintEvent>
#include <QPainter>
#include "globalvars.h"

namespace Ui {
class CliShopData;
}

class CliShopData : public QWidget
{
    Q_OBJECT

    enum Search_Condition{
        Search_None = 0,
        Search_Name,
        Search_Type
    };

public:
    explicit CliShopData(QWidget *parent = 0);
    ~CliShopData();

    void clientShopInfo(const QString &id);

    void paintEvent(QPaintEvent *);


private slots:
    void on_comboBox_currentIndexChanged(int index);

    void on_pb_select_clicked();

private:
    Ui::CliShopData *ui;

    QString m_id;

    int m_searchCond;
    ShopInfo l_shopinfo;
    ShopInfoList l_shopinfolist;
};

#endif // CLISHOPDATA_H
