#include "clicominfo.h"
#include "ui_clicominfo.h"

CliComInfo::CliComInfo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CliComInfo)
{
    ui->setupUi(this);
    setWindowTitle("商品详情");

    ui->pb_form->setIcon(QPixmap(":/ico/insert.jpg"));
    ui->pb_shopcart->setIcon(QPixmap(":/ico/insert.jpg"));
}

CliComInfo::~CliComInfo()
{
    delete ui;
}

void CliComInfo::paintEvent(QPaintEvent *)
{
    QPainter p(this);
    QPixmap pix(":/image/sback.jpg");
    p.drawPixmap(0,0,pix);
}

void CliComInfo::getCliComInfo(const QString &id)
{
    m_id = id;
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

void CliComInfo::on_pb_shopcart_clicked()
{
    m_comdeal = new ComDeal;

    connect(m_comdeal, SIGNAL(signalInsertForm(QString,QString,QString,QString)),
            this, SLOT(slotInsertShopcart(QString,QString,QString,QString)));

    m_comdeal->getComDeal(m_id);
    m_comdeal->show();
}

void CliComInfo::on_pb_form_clicked()
{
    m_comdeal = new ComDeal;

    connect(m_comdeal, SIGNAL(signalInsertForm(QString,QString,QString,QString)),
            this, SLOT(slotInsertForm(QString,QString,QString,QString)));

    m_comdeal->getComDeal(m_id);
    m_comdeal->show(); 
}

void CliComInfo::slotInsertForm(QString cliid, QString comid, QString soid, QString num)
{
    emit signalInsertForm(cliid, comid, soid, num);
}

void CliComInfo::slotInsertShopcart(QString cliid, QString comid, QString soid, QString num)
{
    emit signalInsertShopcart(cliid, comid, soid, num);
}

//关闭对话框

void CliComInfo::closeMex()
{
    m_comdeal->close();
}
