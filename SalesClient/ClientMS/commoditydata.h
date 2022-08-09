#ifndef COMMODITYDATA_H
#define COMMODITYDATA_H

#include <QWidget>

namespace Ui {
class CommodityData;
}

class CommodityData : public QWidget
{
    Q_OBJECT

public:
    explicit CommodityData(QWidget *parent = 0);
    ~CommodityData();

private:
    Ui::CommodityData *ui;
};

#endif // COMMODITYDATA_H
