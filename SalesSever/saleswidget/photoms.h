#ifndef PHOTOMS_H
#define PHOTOMS_H

#include <QWidget>
#include "execsql.h"

namespace Ui {
class PhotoMS;
}

class PhotoMS : public QWidget
{
    Q_OBJECT

    enum Search_Condition{
        Search_None = 0,
        Search_ID,
        Search_Name,
        Search_Site
    };

public:
    explicit PhotoMS(QWidget *parent = 0);
    ~PhotoMS();

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
    Ui::PhotoMS *ui;

    int m_operData;
    int m_searchCond;
    int m_row;

    void updateTableInfos(void);
    void initWidgetUnits(void);
};

#endif // PHOTOMS_H
