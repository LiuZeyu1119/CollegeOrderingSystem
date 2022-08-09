#ifndef COMDEAL_H
#define COMDEAL_H

#include <QWidget>
#include "globalvars.h"
#include <QPaintEvent>
#include <QPainter>

namespace Ui {
class ComDeal;
}

class ComDeal : public QWidget
{
    Q_OBJECT

signals:
    void signalInsertForm(QString cliid, QString comid,
                          QString soid, QString num);

public:
    explicit ComDeal(QWidget *parent = 0);
    ~ComDeal();

    void getComDeal(const QString &id);

    void paintEvent(QPaintEvent *);


private slots:
    void on_pushButton_clicked();

private:
    Ui::ComDeal *ui;
};

#endif // COMDEAL_H
