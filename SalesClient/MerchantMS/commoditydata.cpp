#include "commoditydata.h"
#include "ui_commoditydata.h"
#include <QImage>

CommodityData::CommodityData(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CommodityData)
{
    ui->setupUi(this);
    m_searchCond = Search_None;
    ui->pb_insert->setIcon(QPixmap(":/ico/insert.jpg"));
    ui->pb_select->setIcon(QPixmap(":/ico/select.jpg"));
}

CommodityData::~CommodityData()
{
    delete ui;
}

void CommodityData::getCommodityInfo()
{
    int k = 0;
    QImage image = GlobalVars::UserImageMap[GlobalVars::g_localUser.getID()];
    QImage image2 = image.scaled(ui->lb_head->size(),
                                 Qt::IgnoreAspectRatio,
                                 Qt::SmoothTransformation);
    ui->lb_head->setPixmap(QPixmap::fromImage(image2));
    ui->lb_name->setText(GlobalVars::g_localMerchant.getName());

    ui->tableWidget->setRowCount(GlobalVars::g_commodityInfoList->length() / 3 + 1);
    for(int i = 0 ; i < ui->tableWidget->rowCount(); i++)
    {
        for(int j = 0; j < ui->tableWidget->columnCount(); j++)
        {
            if(k < GlobalVars::g_commodityInfoList->length())
            {
                m_tableitem = new TableItem;

                connect(m_tableitem, SIGNAL(signalUpdateCommodity(QString,QString,QString)),
                        this, SLOT(slotUpdateCommodity(QString,QString,QString)));

                QString id = GlobalVars::g_commodityInfoList->at(k).getID();
                QString name = GlobalVars::g_commodityInfoList->at(k).getName();
                QImage image = GlobalVars::CommodityImageMap[id];

                m_tableitem->updateItemInfo(id, name, image);
                ui->tableWidget->setCellWidget(i, j, m_tableitem);

                k++;
            }
        }
    }
}

void CommodityData::on_comboBox_currentIndexChanged(int index)
{
    m_searchCond = index;
    if(m_searchCond == Search_None)
    {
        ui->le_select->setEnabled(false);
    }else
    {
        ui->le_select->setEnabled(true);
    }
}

void CommodityData::on_pb_select_clicked()
{
    if(m_searchCond == Search_Name)
    {
        ui->tableWidget->clear();

        int k = 0;
        CommodityInfoList l_commoditylist;
        for(int i = 0; i < GlobalVars::g_commodityInfoList->length(); i++)
        {
            if(ui->le_select->text() == GlobalVars::g_commodityInfoList->at(i).getName())
            {
                l_commoditylist.append(GlobalVars::g_commodityInfoList->at(i));
            }
        }
        ui->tableWidget->setRowCount(l_commoditylist.length() / 3 + 1);
        for(int i = 0 ; i < ui->tableWidget->rowCount(); i++)
        {
            for(int j = 0; j < ui->tableWidget->columnCount(); j++)
            {
                if(k < l_commoditylist.length())
                {
                    m_tableitem = new TableItem;

                    connect(m_tableitem, SIGNAL(signalUpdateCommodity(QString,QString,QString)),
                            this, SLOT(slotUpdateCommodity(QString,QString,QString)));

                    QString id = l_commoditylist.at(k).getID();
                    QString name = l_commoditylist.at(k).getName();
                    QImage image = GlobalVars::CommodityImageMap[id];

                    m_tableitem->updateItemInfo(id, name, image);
                    ui->tableWidget->setCellWidget(i, j, m_tableitem);

                    k++;
                }
            }
        }
    }else if(m_searchCond == Search_Sex)
    {
        ui->tableWidget->clear();

        int k = 0;
        CommodityInfoList l_commoditylist;
        for(int i = 0; i < GlobalVars::g_commodityInfoList->length(); i++)
        {
            if(ui->le_select->text() == GlobalVars::g_commodityInfoList->at(i).getSex())
            {
                l_commoditylist.append(GlobalVars::g_commodityInfoList->at(i));
            }
        }
        ui->tableWidget->setRowCount(l_commoditylist.length() / 3 + 1);
        for(int i = 0 ; i < ui->tableWidget->rowCount(); i++)
        {
            for(int j = 0; j < ui->tableWidget->columnCount(); j++)
            {
                if(k < l_commoditylist.length())
                {
                    m_tableitem = new TableItem;

                    connect(m_tableitem, SIGNAL(signalUpdateCommodity(QString,QString,QString)),
                            this, SLOT(slotUpdateCommodity(QString,QString,QString)));

                    QString id = l_commoditylist.at(k).getID();
                    QString name = l_commoditylist.at(k).getName();
                    QImage image = GlobalVars::CommodityImageMap[id];

                    m_tableitem->updateItemInfo(id, name, image);
                    ui->tableWidget->setCellWidget(i, j, m_tableitem);

                    k++;
                }
            }
        }

    }else
    {
        ui->tableWidget->clear();
        getCommodityInfo();
    }
}

void CommodityData::slotUpdateCommodity(QString name, QString sprice, QString sex)
{
    emit signalUpdateCommodity(name, sprice, sex);
}
