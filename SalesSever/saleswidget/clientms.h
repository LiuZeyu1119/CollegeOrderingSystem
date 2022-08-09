#ifndef CLIENTMS_H
#define CLIENTMS_H

#include <QWidget>
#include "execsql.h"

namespace Ui {
class ClientMS;
}

class ClientMS : public QWidget
{
    Q_OBJECT

    enum Search_Condition{
        Search_None = 0,
        Search_ID,
        Search_Name,
        Search_Phone,
        Search_Site
    };

public:
    explicit ClientMS(QWidget *parent = 0);
    ~ClientMS();

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
    Ui::ClientMS *ui;

    int m_operData;
    int m_searchCond;
    int m_row;

    void updateTableInfos(void);
    void initWidgetUnits(void);
};

#endif // CLIENTMS_H
