#include "formdata.h"
#include "ui_formdata.h"
#include <QImage>

FormData::FormData(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormData)
{
    ui->setupUi(this);

    m_searchCond = Search_None;

    ui->pb_delete->setIcon(QPixmap(":/ico/delete.jpg"));
    ui->pb_select->setIcon(QPixmap(":/ico/select.jpg"));
}

FormData::~FormData()
{
    delete ui;
}

void FormData::getFormInfo()
{
    QImage image = GlobalVars::UserImageMap[GlobalVars::g_localUser.getID()];
    QImage image2 = image.scaled(ui->lb_head->size(),
                                 Qt::IgnoreAspectRatio,
                                 Qt::SmoothTransformation);
    ui->lb_head->setPixmap(QPixmap::fromImage(image2));
    ui->lb_name->setText(GlobalVars::g_localMerchant.getName());

    ui->tableWidget->clear();
    ui->tableWidget->setColumnCount(9);
    QTableWidgetItem *item;

    // set header lables
    QStringList headers;
    headers << "订单编号" << "商品名称"  << "调料" << "口味" << "订单时间" << "商品份数"
            << "顾客名字" << "联系方式" << "顾客地址";
    ui->tableWidget->setHorizontalHeaderLabels(headers);
    ui->tableWidget->setRowCount(GlobalVars::g_formInfoList->length());
    for(int i = 0; i < GlobalVars::g_formInfoList->length(); i++)
    {
        item = new QTableWidgetItem(GlobalVars::g_formInfoList->at(i).getID());
        ui->tableWidget->setItem(i, 0, item);

        QString comid = GlobalVars::g_formInfoList->at(i).getComid();
        for(int j = 0; j < GlobalVars::g_commodityInfoList->length(); j++)
        {
            if(comid == GlobalVars::g_commodityInfoList->at(j).getID())
            {
                item = new QTableWidgetItem(GlobalVars::g_commodityInfoList->at(j).getName());
                ui->tableWidget->setItem(i, 1, item);
            }
        }


        QString soid = GlobalVars::g_formInfoList->at(i).getSoid();
        for(int k = 0; k < GlobalVars::g_sortInfoList->length(); k++)
        {
            if(soid == GlobalVars::g_sortInfoList->at(k).getID())
            {
                item = new QTableWidgetItem(GlobalVars::g_sortInfoList->at(k).getBar());
                ui->tableWidget->setItem(i, 2, item);
                item = new QTableWidgetItem(GlobalVars::g_sortInfoList->at(k).getColour());
                ui->tableWidget->setItem(i, 3, item);
            }
        }


        item = new QTableWidgetItem(GlobalVars::g_formInfoList->at(i).getTime());
        ui->tableWidget->setItem(i, 4, item);
        item = new QTableWidgetItem(GlobalVars::g_formInfoList->at(i).getNum());
        ui->tableWidget->setItem(i, 5, item);

        QString cliid = GlobalVars::g_formInfoList->at(i).getCliid();
        for(int l = 0; l < GlobalVars::g_clientInfoList->length(); l++)
        {
            if(cliid == GlobalVars::g_clientInfoList->at(l).getID())
            {
                item = new QTableWidgetItem(GlobalVars::g_clientInfoList->at(l).getName());
                ui->tableWidget->setItem(i, 6, item);
                item = new QTableWidgetItem(GlobalVars::g_clientInfoList->at(l).getPhone());
                ui->tableWidget->setItem(i, 7, item);
                item = new QTableWidgetItem(GlobalVars::g_clientInfoList->at(l).getSite());
                ui->tableWidget->setItem(i, 8, item);
            }
        }
    }
}

void FormData::on_comboBox_currentIndexChanged(int index)
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

void FormData::on_pb_select_clicked()
{
    QTableWidgetItem *item;
    if(m_searchCond == Search_ID)
    {
        ui->tableWidget->clear();
        ui->tableWidget->setColumnCount(9);

        // set header lables
        QStringList headers;
        headers << "订单编号" << "商品名称"  << "调料" << "口味" << "订单时间" << "商品份数"
                << "顾客名字" << "联系方式" << "顾客地址";
        ui->tableWidget->setHorizontalHeaderLabels(headers);

        QString id = ui->le_select->text();
        FormInfo l_forminfo;
        FormInfoList l_forminfolist;
        for(int i = 0; i < GlobalVars::g_formInfoList->length(); i++)
        {
            if(id == GlobalVars::g_formInfoList->at(i).getID())
            {
                l_forminfo = GlobalVars::g_formInfoList->at(i);
                l_forminfolist.append(l_forminfo);
            }
        }
        ui->tableWidget->setRowCount(l_forminfolist.length());

        for(int i = 0; i < l_forminfolist.length(); i++)
        {
            item = new QTableWidgetItem(l_forminfolist.at(i).getID());
            ui->tableWidget->setItem(i, 0, item);

            QString comid = l_forminfolist.at(i).getComid();
            for(int j = 0; j < GlobalVars::g_commodityInfoList->length(); j++)
            {
                if(comid == GlobalVars::g_commodityInfoList->at(j).getID())
                {
                    item = new QTableWidgetItem(GlobalVars::g_commodityInfoList->at(j).getName());
                    ui->tableWidget->setItem(i, 1, item);
                }
            }


            QString soid = l_forminfolist.at(i).getSoid();
            for(int k = 0; k < GlobalVars::g_sortInfoList->length(); k++)
            {
                if(soid == GlobalVars::g_sortInfoList->at(k).getID())
                {
                    item = new QTableWidgetItem(GlobalVars::g_sortInfoList->at(k).getBar());
                    ui->tableWidget->setItem(i, 2, item);
                    item = new QTableWidgetItem(GlobalVars::g_sortInfoList->at(k).getColour());
                    ui->tableWidget->setItem(i, 3, item);
                }
            }


            item = new QTableWidgetItem(l_forminfolist.at(i).getTime());
            ui->tableWidget->setItem(i, 4, item);
            item = new QTableWidgetItem(l_forminfolist.at(i).getNum());
            ui->tableWidget->setItem(i, 5, item);

            QString cliid = l_forminfolist.at(i).getCliid();
            for(int l = 0; l < GlobalVars::g_clientInfoList->length(); l++)
            {
                if(cliid == GlobalVars::g_clientInfoList->at(l).getID())
                {
                    item = new QTableWidgetItem(GlobalVars::g_clientInfoList->at(l).getName());
                    ui->tableWidget->setItem(i, 6, item);
                    item = new QTableWidgetItem(GlobalVars::g_clientInfoList->at(l).getPhone());
                    ui->tableWidget->setItem(i, 7, item);
                    item = new QTableWidgetItem(GlobalVars::g_clientInfoList->at(l).getSite());
                    ui->tableWidget->setItem(i, 8, item);
                }
            }
        }
    }else
    {
        getFormInfo();
    }
}

void FormData::on_tableWidget_clicked(const QModelIndex &index)
{
    const int m_row = index.row();
    ui->le_id->setText(ui->tableWidget->item(m_row, 0)->text());
}

void FormData::on_pb_delete_clicked()
{
    emit signalDeleteForm(GlobalVars::g_localMerchant.getID(),
                          ui->le_id->text());
}
