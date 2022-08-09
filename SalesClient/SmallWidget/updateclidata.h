#ifndef UPDATECLIDATA_H
#define UPDATECLIDATA_H

#include <QWidget>
#include <QPaintEvent>
#include <QPainter>
#include <QImage>
#include <QMessageBox>
#include <QFileDialog>

namespace Ui {
class UpdateCliData;
}

class UpdateCliData : public QWidget
{
    Q_OBJECT
signals:
    void signalUpdateClient(QString name, QString phone, QString site);
    void signalUpdateCliImage(QImage image);

public:
    explicit UpdateCliData(QWidget *parent = 0);
    ~UpdateCliData();

    void updateClientInfo();

    void paintEvent(QPaintEvent *);


private slots:
    void on_pushButton_clicked();

    void on_pb_insert_clicked();

    void on_pb_save_clicked();

private:
    Ui::UpdateCliData *ui;

    QImage cli_image;
};

#endif // UPDATECLIDATA_H
