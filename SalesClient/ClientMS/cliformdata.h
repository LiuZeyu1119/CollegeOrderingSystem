#ifndef CLIFORMDATA_H
#define CLIFORMDATA_H

#include <QWidget>
#include "globalvars.h"

namespace Ui {
class CliFormData;
}

class CliFormData : public QWidget
{
    Q_OBJECT

    enum Search_Condition{
        Search_None = 0,
        Search_ID,
    };

public:
    explicit CliFormData(QWidget *parent = 0);
    ~CliFormData();

    void getFormInfo();

signals:
    void signalDeleteForm(QString merid, QString id);


private slots:
    void on_tableWidget_clicked(const QModelIndex &index);

    void on_comboBox_currentIndexChanged(int index);

    void on_pb_select_clicked();

    void on_pb_delete_clicked();

private:
    Ui::CliFormData *ui;

    int m_searchCond;
};

#endif // CLIFORMDATA_H
