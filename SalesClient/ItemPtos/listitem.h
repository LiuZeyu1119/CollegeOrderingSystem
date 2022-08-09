#ifndef LISTITEM_H
#define LISTITEM_H

#include <QWidget>
#include "globalvars.h"

namespace Ui {
class ListItem;
}

class ListItem : public QWidget
{
    Q_OBJECT

public:
    explicit ListItem(QWidget *parent = 0);
    ~ListItem();

    void updateItemInfo(const QString &comid, const QString &soid, const QString &num);

signals:
    void signalDeleteShopcart(QString cliid, QString comid);
    void signalInsertForm(QString cliid, QString comid,
                          QString soid, QString num);

private slots:
    void on_pb_delete_clicked();

    void on_pb_insert_clicked();

private:
    Ui::ListItem *ui;
};

#endif // LISTITEM_H
