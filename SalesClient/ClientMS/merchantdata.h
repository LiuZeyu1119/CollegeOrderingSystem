#ifndef MERCHANTDATA_H
#define MERCHANTDATA_H

#include <QWidget>
#include "mertableitem.h"

namespace Ui {
class MerchantData;
}

class MerchantData : public QWidget
{
    Q_OBJECT

    enum Search_Condition{
        Search_None = 0,
        Search_Name
    };

public:
    explicit MerchantData(QWidget *parent = 0);
    ~MerchantData();

    void getMerchantInfo();

private slots:
    void on_comboBox_currentIndexChanged(int index);

    void on_pb_select_clicked();

private:
    Ui::MerchantData *ui;

    MerTableItem *m_mertableitem;

    int m_searchCond;
};

#endif // MERCHANTDATA_H
