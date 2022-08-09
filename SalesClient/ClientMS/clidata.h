#ifndef CLIDATA_H
#define CLIDATA_H

#include <QWidget>
#include "updateclidata.h"

namespace Ui {
class CliData;
}

class CliData : public QWidget
{
    Q_OBJECT
signals:
    void signalUpdateClient(QString name, QString phone,
                              QString site);
    void signalUpdateCliImage(QImage image);

public:
    explicit CliData(QWidget *parent = 0);
    ~CliData();

    void getClientInfo();

public slots:
    void on_pushButton_clicked();
    void slotUpdateClient(QString name, QString phone,
                            QString site);
    void slotUpdateCliImage(QImage image);

private:
    Ui::CliData *ui;

    UpdateCliData *m_updateclidata;
};

#endif // CLIDATA_H
