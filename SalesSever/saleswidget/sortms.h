#ifndef SORTMS_H
#define SORTMS_H

#include <QWidget>
#include "execsql.h"

namespace Ui {
class SortMS;
}

class SortMS : public QWidget
{
    Q_OBJECT

    enum Search_Condition{
        Search_None = 0,
        Search_ID,
        Search_Comid,
        Search_Bar,
        Search_Colour,
        Search_Num
    };

public:
    explicit SortMS(QWidget *parent = 0);
    ~SortMS();

    void setPushButter();

public slots:
    void on_comboBox_currentIndexChanged(int index);

    void on_tableWidget_clicked(const QModelIndex &index);

    void on_pb_update_clicked();

    void on_pb_delete_clicked();

    void on_pb_insert_clicked();

    void on_pb_cancel_clicked();

    void on_pb_save_clicked();

    void on_pb_select_clicked();

private:
    Ui::SortMS *ui;

    int m_operData;
    int m_searchCond;
    int m_row;

    void updateTableInfos(void);
    void initWidgetUnits(void);
};

#endif // SORTMS_H
