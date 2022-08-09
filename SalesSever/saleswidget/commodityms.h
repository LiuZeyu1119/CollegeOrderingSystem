#ifndef COMMODITYMS_H
#define COMMODITYMS_H

#include <QWidget>
#include "execsql.h"

namespace Ui {
class CommodityMS;
}

class CommodityMS : public QWidget
{
    Q_OBJECT

    enum Search_Condition{
        Search_None = 0,
        Search_ID,
        Search_Shid,
        Search_Name,
        Search_Sprice,
        Search_Sex
    };

public:
    explicit CommodityMS(QWidget *parent = 0);
    ~CommodityMS();

    void setPushButter();

public slots:
    void on_comboBox_currentIndexChanged(int index);

    void on_tableWidget_clicked(const QModelIndex &index);

    void on_pb_select_clicked();

    void on_pb_update_clicked();

    void on_pb_delete_clicked();

    void on_pb_insert_clicked();

    void on_pb_cancel_clicked();

    void on_pb_save_clicked();

private:
    Ui::CommodityMS *ui;

    int m_operData;
    int m_searchCond;
    int m_row;

    void updateTableInfos(void);
    void initWidgetUnits(void);
};

#endif // COMMODITYMS_H
