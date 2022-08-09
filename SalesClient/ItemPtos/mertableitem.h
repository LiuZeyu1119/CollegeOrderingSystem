#ifndef MERTABLEITEM_H
#define MERTABLEITEM_H

#include <QWidget>
#include "clishopdata.h"

namespace Ui {
class MerTableItem;
}

class MerTableItem : public QWidget
{
    Q_OBJECT

public:
    explicit MerTableItem(QWidget *parent = 0);
    ~MerTableItem();

    void updateItemInfo(const QString &id, const QString &name, const QImage &image);

private slots:
    void on_pushButton_clicked();

private:
    Ui::MerTableItem *ui;

    QString m_id;

    CliShopData *m_clishopdata;
};

#endif // MERTABLEITEM_H
