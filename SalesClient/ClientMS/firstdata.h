#ifndef FIRSTDATA_H
#define FIRSTDATA_H

#include <QWidget>
#include "tableitem.h"

namespace Ui {
class FirstData;
}

class FirstData : public QWidget
{
    Q_OBJECT

    enum Search_Condition{
        Search_None = 0,
        Search_Name,
        Search_Sex
    };

public:
    explicit FirstData(QWidget *parent = 0);
    ~FirstData();

    void getCommodityInfo();

signals:
    void signalInsertForm(QString cliid, QString comid, QString soid, QString num);
    void signalInsertShopcart(QString cliid, QString comid, QString soid, QString num);


public slots:
    void on_comboBox_currentIndexChanged(int index);
    void on_pb_select_clicked();

    void slotInsertForm(QString cliid, QString comid, QString soid, QString num);
    void slotInsertShopcart(QString cliid, QString comid, QString soid, QString num);

private:
    Ui::FirstData *ui;

    TableItem *m_tableitem;

    int m_searchCond;
};

#endif // FIRSTDATA_H
