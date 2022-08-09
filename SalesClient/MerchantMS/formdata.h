#ifndef FORMDATA_H
#define FORMDATA_H

#include <QWidget>
#include "globalvars.h"
#include <QImage>

namespace Ui {
class FormData;
}

class FormData : public QWidget
{
    Q_OBJECT

    enum Search_Condition{
        Search_None = 0,
        Search_ID,
    };

public:
    explicit FormData(QWidget *parent = 0);
    ~FormData();

    void getFormInfo();

signals:
    void signalDeleteForm(QString merid, QString id);

private slots:
    void on_comboBox_currentIndexChanged(int index);

    void on_pb_select_clicked();

    void on_tableWidget_clicked(const QModelIndex &index);

    void on_pb_delete_clicked();

private:
    Ui::FormData *ui;
    int m_searchCond;
};

#endif // FORMDATA_H
