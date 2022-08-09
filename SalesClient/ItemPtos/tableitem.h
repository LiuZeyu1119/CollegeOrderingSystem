#ifndef TABLEITEM_H
#define TABLEITEM_H

#include <QWidget>
#include "onecommodity.h"
#include "clicominfo.h"

namespace Ui {
class TableItem;
}

class TableItem : public QWidget
{
    Q_OBJECT

public:
    explicit TableItem(QWidget *parent = 0);
    ~TableItem();

    void updateItemInfo(const QString &id, const QString &name, const QImage &image);

signals:
    void signalInsertForm(QString cliid, QString comid, QString soid, QString num);
    void signalInsertShopcart(QString cliid, QString comid, QString soid, QString num);
    void signalUpdateCommodity(QString name, QString sprice, QString sex);

public slots:
    void on_pb_info_clicked();
    void slotInsertForm(QString cliid, QString comid, QString soid, QString num);
    void slotInsertShopcart(QString cliid, QString comid, QString soid, QString num);
    void slotUpdateCommodity(QString name, QString sprice, QString sex);

private:
    Ui::TableItem *ui;

    OneCommodity *m_onecommodity;
    CliComInfo *m_clicominfo;

    QString m_id;
};

#endif // TABLEITEM_H
