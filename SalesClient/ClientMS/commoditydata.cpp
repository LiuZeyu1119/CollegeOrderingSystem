#include "commoditydata.h"
#include "ui_commoditydata.h"

CommodityData::CommodityData(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CommodityData)
{
    ui->setupUi(this);
}

CommodityData::~CommodityData()
{
    delete ui;
}
