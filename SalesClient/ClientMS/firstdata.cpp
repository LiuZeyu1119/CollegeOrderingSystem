#include "firstdata.h"
#include "ui_firstdata.h"

FirstData::FirstData(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FirstData)
{
    ui->setupUi(this);

    m_searchCond = Search_None;

    ui->pb_select->setIcon(QPixmap(":/ico/select.jpg"));
}

FirstData::~FirstData()
{
    delete ui;
}

void FirstData::getCommodityInfo()
{
    int k = 0;

    ui->tableWidget->setRowCount(GlobalVars::g_commodityInfoList->length() / 4 + 1);
    for(int i = 0 ; i < ui->tableWidget->rowCount(); i++)
    {
        for(int j = 0; j < ui->tableWidget->columnCount(); j++)
        {  
            if(k < GlobalVars::g_commodityInfoList->length())
            {
                m_tableitem = new TableItem;
                QString id = GlobalVars::g_commodityInfoList->at(k).getID();
                QString name = GlobalVars::g_commodityInfoList->at(k).getName();
                QImage image = GlobalVars::CommodityImageMap[id];

                m_tableitem->updateItemInfo(id, name, image);
                ui->tableWidget->setCellWidget(i, j, m_tableitem);

                connect(m_tableitem, SIGNAL(signalInsertForm(QString,QString,QString,QString)),
                        this, SLOT(slotInsertForm(QString,QString,QString,QString)));
                connect(m_tableitem, SIGNAL(signalInsertShopcart(QString,QString,QString,QString)),
                        this, SLOT(slotInsertShopcart(QString,QString,QString,QString)));
                k++;
            }
        }
    }
}

void FirstData::on_comboBox_currentIndexChanged(int index)
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

void FirstData::on_pb_select_clicked()
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
        ui->tableWidget->setRowCount(l_commoditylist.length() / 4 + 1);
        for(int i = 0 ; i < ui->tableWidget->rowCount(); i++)
        {
            for(int j = 0; j < ui->tableWidget->columnCount(); j++)
            {
                if(k < l_commoditylist.length())
                {
                    m_tableitem = new TableItem;
                    QString id = l_commoditylist.at(k).getID();
                    QString name = l_commoditylist.at(k).getName();
                    QImage image = GlobalVars::CommodityImageMap[id];

                    m_tableitem->updateItemInfo(id, name, image);
                    ui->tableWidget->setCellWidget(i, j, m_tableitem);

                    connect(m_tableitem, SIGNAL(signalInsertForm(QString,QString,QString,QString)),
                            this, SLOT(slotInsertForm(QString,QString,QString,QString)));
                    connect(m_tableitem, SIGNAL(signalInsertShopcart(QString,QString,QString,QString)),
                            this, SLOT(slotInsertShopcart(QString,QString,QString,QString)));
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
        ui->tableWidget->setRowCount(l_commoditylist.length() / 4 + 1);
        for(int i = 0 ; i < ui->tableWidget->rowCount(); i++)
        {
            for(int j = 0; j < ui->tableWidget->columnCount(); j++)
            {

                if(k < l_commoditylist.length())
                {
                    m_tableitem = new TableItem;
                    QString id = l_commoditylist.at(k).getID();
                    QString name = l_commoditylist.at(k).getName();
                    QImage image = GlobalVars::CommodityImageMap[id];

                    m_tableitem->updateItemInfo(id, name, image);
                    ui->tableWidget->setCellWidget(i, j, m_tableitem);

                    connect(m_tableitem, SIGNAL(signalInsertForm(QString,QString,QString,QString)),
                            this, SLOT(slotInsertForm(QString,QString,QString,QString)));
                    connect(m_tableitem, SIGNAL(signalInsertShopcart(QString,QString,QString,QString)),
                            this, SLOT(slotInsertShopcart(QString,QString,QString,QString)));
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


void FirstData::slotInsertForm(QString cliid, QString comid, QString soid, QString num)
{
    emit signalInsertForm(cliid, comid, soid, num);
}

void FirstData::slotInsertShopcart(QString cliid, QString comid, QString soid, QString num)
{
    emit signalInsertShopcart(cliid, comid, soid, num);
}

