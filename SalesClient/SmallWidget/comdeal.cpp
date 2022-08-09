#include "comdeal.h"
#include "ui_comdeal.h"

ComDeal::ComDeal(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ComDeal)
{
    ui->setupUi(this);
    setWindowTitle("商品处理");
}

ComDeal::~ComDeal()
{
    delete ui;
}

void ComDeal::paintEvent(QPaintEvent *)
{
    QPainter p(this);
    QPixmap pix(":/image/sback.jpg");
    p.drawPixmap(0,0,pix);
}

void ComDeal::getComDeal(const QString &id)
{
    QImage image = GlobalVars::CommodityImageMap[id];
    ui->lb_head->setPixmap(QPixmap::fromImage(image));
    ui->le_name->setText(GlobalVars::g_commodityInfoMap[id]->getName());
    ui->le_sprice->setText(GlobalVars::g_commodityInfoMap[id]->getSprice());
}

void ComDeal::on_pushButton_clicked()
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
