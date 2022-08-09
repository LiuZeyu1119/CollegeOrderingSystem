#include "mydata.h"
#include "ui_mydata.h"

MyData::MyData(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyData)
{
    ui->setupUi(this);
    ui->pushButton->setIcon(QPixmap(":/ico/zhuxiao.jpg"));
}

MyData::~MyData()
{
    delete ui;
}

void MyData::getMerchantInfo()
{
    QImage image = GlobalVars::UserImageMap[GlobalVars::g_localUser.getID()];
    QImage image2 = image.scaled(ui->lb_head->size(),
                                 Qt::IgnoreAspectRatio,
                                 Qt::SmoothTransformation);
    ui->lb_head->setPixmap(QPixmap::fromImage(image2));

    ui->le_id->setText(GlobalVars::g_localMerchant.getID());
    ui->le_name->setText(GlobalVars::g_localMerchant.getName());
    ui->le_phone->setText(GlobalVars::g_localMerchant.getPhone());
    ui->le_time->setText(GlobalVars::g_localMerchant.getTime());
    ui->le_site->setText(GlobalVars::g_localMerchant.getSite());
}

void MyData::on_pushButton_clicked()
{
    m_updatemydata = new UpdateMyData;
    m_updatemydata->updateInfo();
    m_updatemydata->show();

    connect(m_updatemydata, SIGNAL(signalUpdateMerchant(QString,QString,QString)),
            this, SLOT(slotUpdateMerchant(QString,QString,QString)));
    connect(m_updatemydata, SIGNAL(signalUpdateMerImage(QImage)),
            this, SLOT(slotUpdateMerImage(QImage)));
}

void MyData::slotUpdateMerchant(QString name, QString phone, QString site)
{
    emit signalUpdateMerchant(name, phone, site);
}

void MyData::slotUpdateMerImage(QImage image)
{
    emit signalUpdateMerImage(image);
}
