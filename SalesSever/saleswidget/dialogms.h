#ifndef DIALOGMS_H
#define DIALOGMS_H

#include <QWidget>
#include "execsql.h"

namespace Ui {
class DialogMS;
}

class DialogMS : public QWidget
{
    Q_OBJECT

    enum Search_Condition{
        Search_None = 0,
        Search_Merid,
        Search_Cliid,
        Search_Time
    };

public:
    explicit DialogMS(QWidget *parent = 0);
    ~DialogMS();

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
    Ui::DialogMS *ui;

    int m_operData;
    int m_searchCond;
    int m_row;

    void updateTableInfos(void);
    void initWidgetUnits(void);
};

#endif // DIALOGMS_H
