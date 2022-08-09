#ifndef SHOPCARTDATA_H
#define SHOPCARTDATA_H

#include <QWidget>
#include "globalvars.h"

#include "listitem.h"

namespace Ui {
class ShopcartData;
}

class ShopcartData : public QWidget
{
    Q_OBJECT

public:
    explicit ShopcartData(QWidget *parent = 0);
    ~ShopcartData();

    void getShopcartInfo();

signals:
    void signalDeleteShopcart(QString cliid, QString comid);
    void signalInsertForm(QString cliid, QString comid,
                          QString soid, QString num);

public slots:
    void slotDeleteShopcart(QString cliid, QString comid);
    void slotInsertForm(QString cliid, QString comid,
                          QString soid, QString num);

private:
    Ui::ShopcartData *ui;

    ListItem *m_listitem;
};

#endif // SHOPCARTDATA_H
