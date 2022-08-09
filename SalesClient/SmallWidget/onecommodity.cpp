#include "onecommodity.h"
#include "ui_onecommodity.h"

OneCommodity::OneCommodity(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::OneCommodity)
{
    ui->setupUi(this);
    this->setWindowTitle("商品详情");

    ui->pb_delete->setIcon(QPixmap(":/ico/delete.jpg"));
    ui->pb_update->setIcon(QPixmap(":/ico/zhuxiao.jpg"));
    ui->pb_save->setIcon(QPixmap(":/ico/save.jpg"));
}

OneCommodity::~OneCommodity()
{
    delete ui;
}

void OneCommodity::paintEvent(QPaintEvent *)
{
    QPainter p(this);
    QPixmap pix(":/image/sback.jpg");
    p.drawPixmap(0,0,pix);
}


void OneCommodity::getOneCommodity(const QString &id)
{
    QString xid;
    QStringList stream;
    int x = 0;

    for(int i = 0; i < GlobalVars::g_commodityInfoList->length(); i++)
    {
        if(id == GlobalVars::g_commodityInfoList->at(i).getID())
        {
            QString name = GlobalVars::g_commodityInfoList->at(i).getName();
            QString sprice = GlobalVars::g_commodityInfoList->at(i).getSprice();
            QString sex = GlobalVars::g_commodityInfoList->at(i).getSex();
            ui->le_name->setText(name);
            ui->le_sprice->setText(sprice);
            ui->le_sex->setText(sex);
            break;
        }
    }
    QImage image = GlobalVars::CommodityImageMap[id];
    ui->lb_head->setPixmap(QPixmap::fromImage(image));

    for(int i = 0; i < GlobalVars::g_sortInfoList->length(); i++)
    {
        if(id == GlobalVars::g_sortInfoList->at(i).getComid())
        {
            xid = GlobalVars::g_sortInfoList->at(i).getID();
            stream.append(xid);
        }
    }

    if(x < stream.length())
    {
        ui->lb_bar1->setText(GlobalVars::g_sortInfoMap[stream.at(x)]->getBar());
        ui->lb_color1->setText(GlobalVars::g_sortInfoMap[stream.at(x)]->getColour());
        ui->lb_num1->setText(GlobalVars::g_sortInfoMap[stream.at(x)]->getNum());
        x++;
    }
    if(x < stream.length())
    {
        ui->lb_bar2->setText(GlobalVars::g_sortInfoMap[stream.at(x)]->getBar());
        ui->lb_color2->setText(GlobalVars::g_sortInfoMap[stream.at(x)]->getColour());
        ui->lb_num2->setText(GlobalVars::g_sortInfoMap[stream.at(x)]->getNum());
        x++;
    }
    if(x < stream.length())
    {
        ui->lb_bar3->setText(GlobalVars::g_sortInfoMap[stream.at(x)]->getBar());
        ui->lb_color3->setText(GlobalVars::g_sortInfoMap[stream.at(x)]->getColour());
        ui->lb_num3->setText(GlobalVars::g_sortInfoMap[stream.at(x)]->getNum());
        x++;
    }
    if(x < stream.length())
    {
        ui->lb_bar4->setText(GlobalVars::g_sortInfoMap[stream.at(x)]->getBar());
        ui->lb_color4->setText(GlobalVars::g_sortInfoMap[stream.at(x)]->getColour());
        ui->lb_num4->setText(GlobalVars::g_sortInfoMap[stream.at(x)]->getNum());
        x++;
    }
    if(x < stream.length())
    {
        ui->lb_bar5->setText(GlobalVars::g_sortInfoMap[stream.at(x)]->getBar());
        ui->lb_color5->setText(GlobalVars::g_sortInfoMap[stream.at(x)]->getColour());
        ui->lb_num5->setText(GlobalVars::g_sortInfoMap[stream.at(x)]->getNum());
        x++;
    }
}

void OneCommodity::on_pb_update_clicked()
{
    ui->le_name->setEnabled(true);
    ui->le_sex->setEnabled(true);
    ui->le_sprice->setEnabled(true);
}

void OneCommodity::on_pb_save_clicked()
{
    emit signalUpdateCommodity(ui->le_name->text(),
                               ui->le_sprice->text(),
                               ui->le_sex->text());
}
