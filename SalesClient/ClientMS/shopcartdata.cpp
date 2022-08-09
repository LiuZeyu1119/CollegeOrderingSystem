#include "shopcartdata.h"
#include "ui_shopcartdata.h"

ShopcartData::ShopcartData(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ShopcartData)
{
    ui->setupUi(this);

}

ShopcartData::~ShopcartData()
{
    delete ui;
}

void ShopcartData::getShopcartInfo()
{
    ui->listWidget->clear();
    for(int i = 0; i < GlobalVars::g_shopcartInfoList->length(); i++)
    {
        QString comid = GlobalVars::g_shopcartInfoList->at(i).getComid();
        QString soid = GlobalVars::g_shopcartInfoList->at(i).getSoid();
        QString num = GlobalVars::g_shopcartInfoList->at(i).getNum();
        ui->listWidget->addItem("");
        m_listitem = new ListItem;
        m_listitem->updateItemInfo(comid, soid, num);
        ui->listWidget->item(i)->setSizeHint(QSize(1000,275));
        ui->listWidget->setItemWidget(ui->listWidget->item(i), m_listitem);

        connect(m_listitem, SIGNAL(signalDeleteShopcart(QString,QString)),
                this, SLOT(slotDeleteShopcart(QString,QString)));

        connect(m_listitem, SIGNAL(signalInsertForm(QString,QString,QString,QString)),
                this, SLOT(slotInsertForm(QString,QString,QString,QString)));
    }
}

void ShopcartData::slotDeleteShopcart(QString cliid, QString comid)
{
    emit signalDeleteShopcart(cliid, comid);
}

void ShopcartData::slotInsertForm(QString cliid, QString comid, QString soid, QString num)
{
    emit signalInsertForm(cliid, comid, soid, num);
}
