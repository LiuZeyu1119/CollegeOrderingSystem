#include "listitem.h"
#include "ui_listitem.h"

#include <QImage>
#include <QDebug>

ListItem::ListItem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ListItem)
{
    ui->setupUi(this);

    ui->pb_delete->setIcon(QPixmap(":/ico/delete.jpg"));
    ui->pb_insert->setIcon(QPixmap(":/ico/insert.jpg"));
}

ListItem::~ListItem()
{
    delete ui;
}

void ListItem::updateItemInfo(const QString &comid, const QString &soid, const QString &num)
{
    QString merid;
    QString shid;

    shid = GlobalVars::g_commodityInfoMap[comid]->getShid();
    merid = GlobalVars::g_shopInfoMap[shid]->getMerid();
    QImage merimage = GlobalVars::UserImageMap[merid];
    QImage comimage = GlobalVars::CommodityImageMap[comid];

    QImage merimage1 = merimage.scaled(ui->lb_merhead->size(),
                                 Qt::IgnoreAspectRatio,
                                 Qt::SmoothTransformation);

    ui->lb_merhead->setPixmap(QPixmap::fromImage(merimage1));
    ui->lb_comhead->setPixmap(QPixmap::fromImage(comimage));
    ui->lb_mername->setText(GlobalVars::g_merchantInfoMap[merid]->getName());

    ui->le_name->setText(GlobalVars::g_commodityInfoMap[comid]->getName());
    ui->le_sprice->setText(GlobalVars::g_commodityInfoMap[comid]->getSprice());
    ui->le_bar->setText(GlobalVars::g_sortInfoMap[soid]->getBar());
    ui->le_color->setText(GlobalVars::g_sortInfoMap[soid]->getColour());
    ui->le_num->setText(num);
}

void ListItem::on_pb_delete_clicked()
{
    QString comid;
    for(int i = 0; i < GlobalVars::g_commodityInfoList->length(); i++)
    {
        if(ui->le_name->text() == GlobalVars::g_commodityInfoList->at(i).getName())
        {
            comid = GlobalVars::g_commodityInfoList->at(i).getID();
        }
    }

    emit signalDeleteShopcart(GlobalVars::g_localClient.getID(), comid);
}

void ListItem::on_pb_insert_clicked()
{
    QString comid;
    QString soid;
    for(int i = 0; i < GlobalVars::g_commodityInfoList->length(); i++)
    {
        if(ui->le_name->text() == GlobalVars::g_commodityInfoList->at(i).getName())
        {
            comid = GlobalVars::g_commodityInfoList->at(i).getID();
        }
    }
    for(int i = 0; i < GlobalVars::g_sortInfoList->length(); i++)
    {
        if(ui->le_bar->text() == GlobalVars::g_sortInfoList->at(i).getBar() &&
                ui->le_color->text() == GlobalVars::g_sortInfoList->at(i).getColour())
        {
            soid = GlobalVars::g_sortInfoList->at(i).getID();
        }
    }

    emit signalInsertForm(GlobalVars::g_localClient.getID(), comid,
                          soid, ui->le_num->text());
}
