#include "clidata.h"
#include "ui_clidata.h"
#include "globalvars.h"
#include <QImage>

CliData::CliData(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CliData)
{
    ui->setupUi(this);
    ui->pushButton->setIcon(QPixmap(":/ico/zhuxiao.jpg"));
}

CliData::~CliData()
{
    delete ui;
}

void CliData::getClientInfo()
{
    QImage image = GlobalVars::UserImageMap[GlobalVars::g_localUser.getID()];
    QImage image2 = image.scaled(ui->lb_head->size(),
                                 Qt::IgnoreAspectRatio,
                                 Qt::SmoothTransformation);
    ui->lb_head->setPixmap(QPixmap::fromImage(image2));

    ui->le_id->setText(GlobalVars::g_localClient.getID());
    ui->le_name->setText(GlobalVars::g_localClient.getName());
    ui->le_phone->setText(GlobalVars::g_localClient.getPhone());
    ui->le_time->setText(GlobalVars::g_localClient.getTime());
    ui->le_site->setText(GlobalVars::g_localClient.getSite());
}

void CliData::on_pushButton_clicked()
{
    m_updateclidata = new UpdateCliData;
    m_updateclidata->updateClientInfo();
    m_updateclidata->show();

    connect(m_updateclidata, SIGNAL(signalUpdateClient(QString,QString,QString)),
            this, SLOT(slotUpdateClient(QString,QString,QString)));
    connect(m_updateclidata, SIGNAL(signalUpdateCliImage(QImage)),
            this, SLOT(slotUpdateCliImage(QImage)));
}

void CliData::slotUpdateClient(QString name, QString phone, QString site)
{
    emit signalUpdateClient(name, phone, site);
}

void CliData::slotUpdateCliImage(QImage image)
{
    emit signalUpdateCliImage(image);
}
