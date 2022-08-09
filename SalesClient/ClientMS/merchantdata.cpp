#include "merchantdata.h"
#include "ui_merchantdata.h"
#include "globalvars.h"

MerchantData::MerchantData(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MerchantData)
{
    ui->setupUi(this);
    m_searchCond = Search_None;

    ui->pb_select->setIcon(QPixmap(":/ico/select.jpg"));
}

MerchantData::~MerchantData()
{
    delete ui;
}

void MerchantData::getMerchantInfo()
{
    int k = 0;

    ui->tableWidget->setRowCount(GlobalVars::g_commodityInfoList->length() / 4 + 1);
    for(int i = 0 ; i < ui->tableWidget->rowCount(); i++)
    {
        for(int j = 0; j < ui->tableWidget->columnCount(); j++)
        {
            m_mertableitem = new MerTableItem;
            if(k < GlobalVars::g_merchantInfoList->length())
            {
                QString id = GlobalVars::g_merchantInfoList->at(k).getID();
                QString name = GlobalVars::g_merchantInfoList->at(k).getName();
                QImage image = GlobalVars::UserImageMap[id];

                m_mertableitem->updateItemInfo(id, name, image);
                ui->tableWidget->setCellWidget(i, j, m_mertableitem);

                k++;
            }
        }
    }
}

void MerchantData::on_comboBox_currentIndexChanged(int index)
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

void MerchantData::on_pb_select_clicked()
{
    if(m_searchCond == Search_Name)
    {
        ui->tableWidget->clear();

        int k = 0;
        MerchantInfoList l_merchantinfolist;
        for(int i = 0; i < GlobalVars::g_merchantInfoList->length(); i++)
        {
            if(ui->le_select->text() == GlobalVars::g_merchantInfoList->at(i).getName())
            {
                l_merchantinfolist.append(GlobalVars::g_merchantInfoList->at(i));
            }
        }

        ui->tableWidget->setRowCount(l_merchantinfolist.length() / 4 + 1);
        for(int i = 0 ; i < ui->tableWidget->rowCount(); i++)
        {
            for(int j = 0; j < ui->tableWidget->columnCount(); j++)
            {
                m_mertableitem = new MerTableItem;
                if(k < l_merchantinfolist.length())
                {
                    QString id = l_merchantinfolist.at(k).getID();
                    QString name = l_merchantinfolist.at(k).getName();
                    QImage image = GlobalVars::UserImageMap[id];

                    m_mertableitem->updateItemInfo(id, name, image);
                    ui->tableWidget->setCellWidget(i, j, m_mertableitem);

                    k++;
                }
            }
        }
    }else
    {
        ui->tableWidget->clear();
        getMerchantInfo();
    }
}
