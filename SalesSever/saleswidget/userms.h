#ifndef USERMS_H
#define USERMS_H

#include <QWidget>
#include "execsql.h"

namespace Ui {
class UserMS;
}

class UserMS : public QWidget
{
    Q_OBJECT

    enum Search_Condition{
        Search_None = 0,
        Search_ID,
        Search_Type,
        Search_Time
    };

public:
    explicit UserMS(QWidget *parent = 0);
    ~UserMS();

    QStringList m_userinfo;

    void setPushButter();

public slots:
    void on_tableWidget_clicked(const QModelIndex &index);

    void on_comboBox_currentIndexChanged(int index);

    void on_pb_cancel_clicked();

    void on_pb_delete_clicked();

    void on_pb_insert_clicked();

    void on_pb_update_clicked();

    void on_pb_save_clicked();

    void on_pb_select_clicked();

private:
    Ui::UserMS *ui;

    int m_operData;
    int m_searchCond;
    int m_row;

    void updateTableInfos(void);
    void initWidgetUnits(void);
};

#endif // USERMS_H
