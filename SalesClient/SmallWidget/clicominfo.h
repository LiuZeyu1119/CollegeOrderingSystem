#ifndef CLICOMINFO_H
#define CLICOMINFO_H

#include <QWidget>
#include "globalvars.h"
#include "comdeal.h"

#include <QPaintEvent>
#include <QPainter>

namespace Ui {
class CliComInfo;
}

class CliComInfo : public QWidget
{
    Q_OBJECT

public:
    explicit CliComInfo(QWidget *parent = 0);
    ~CliComInfo();

    void getCliComInfo(const QString &id);

    void paintEvent(QPaintEvent *);
    void closeMex();

signals:
    void signalInsertForm(QString cliid, QString comid,
                          QString soid, QString num);
    void signalInsertShopcart(QString cliid, QString comid,
                              QString soid, QString num);

public slots:
    void on_pb_shopcart_clicked();
    void on_pb_form_clicked();

    void slotInsertForm(QString cliid, QString comid, QString soid, QString num);
    void slotInsertShopcart(QString cliid, QString comid, QString soid, QString num);

private:
    Ui::CliComInfo *ui;

    ComDeal *m_comdeal;
    QString m_id;
};

#endif // CLICOMINFO_H
