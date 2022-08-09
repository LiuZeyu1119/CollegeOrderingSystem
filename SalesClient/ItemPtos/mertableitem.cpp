#include "mertableitem.h"
#include "ui_mertableitem.h"

MerTableItem::MerTableItem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MerTableItem)
{
    ui->setupUi(this);
}

MerTableItem::~MerTableItem()
{
    delete ui;
}

void MerTableItem::updateItemInfo(const QString &id, const QString &name, const QImage &image)
{
    m_id = id;

    QImage image2 = image.scaled(ui->lb_head->size(),
                                 Qt::IgnoreAspectRatio,
                                 Qt::SmoothTransformation);
    ui->lb_head->setPixmap(QPixmap::fromImage(image2));
    ui->lb_name->setText(name);
}

void MerTableItem::on_pushButton_clicked()
{
    m_clishopdata = new CliShopData;
    m_clishopdata->clientShopInfo(m_id);
    m_clishopdata->show();
}
