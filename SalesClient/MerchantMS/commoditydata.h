#ifndef COMMODITYDATA_H
#define COMMODITYDATA_H

#include <QWidget>
#include "globalvars.h"
#include <QImage>
#include "tableitem.h"

namespace Ui {
class CommodityData;
}

class CommodityData : public QWidget
{
    Q_OBJECT

    enum Search_Condition{
        Search_None = 0,
        Search_Name,
        Search_Sex
    };

signals:
    void signalUpdateCommodity(QString name, QString sprice, QString sex);

public:
    explicit CommodityData(QWidget *parent = 0);
    ~CommodityData();

    void getCommodityInfo();

public slots:
    void on_comboBox_currentIndexChanged(int index);

    void on_pb_select_clicked();

    void slotUpdateCommodity(QString name, QString sprice, QString sex);

private:
    Ui::CommodityData *ui;

    TableItem *m_tableitem;
    int m_searchCond;
};

#endif // COMMODITYDATA_H
