#include "cliformdata.h"
#include "ui_cliformdata.h"

CliFormData::CliFormData(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CliFormData)
{
    ui->setupUi(this);

    m_searchCond = Search_None;
    ui->pb_delete->setIcon(QPixmap(":/ico/delete.jpg"));
    ui->pb_select->setIcon(QPixmap(":/ico/select.jpg"));
}

CliFormData::~CliFormData()
{
    delete ui;
}

void CliFormData::getFormInfo()
{
    ui->tableWidget->clear();
    ui->tableWidget->setColumnCount(9);
    QTableWidgetItem *item;

    // set header lables
    QStringList headers;
    headers << "订单编号" << "商品名称"  << "码号" << "颜色" << "订单时间" << "商品数量"
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

        item = new QTableWidgetItem(GlobalVars::g_localClient.getName());
        ui->tableWidget->setItem(i, 6, item);
        item = new QTableWidgetItem(GlobalVars::g_localClient.getPhone());
        ui->tableWidget->setItem(i, 7, item);
        item = new QTableWidgetItem(GlobalVars::g_localClient.getSite());
        ui->tableWidget->setItem(i, 8, item);
    }
}

void CliFormData::on_tableWidget_clicked(const QModelIndex &index)
{
    const int m_row = index.row();
    ui->le_id->setText(ui->tableWidget->item(m_row, 0)->text());
}

void CliFormData::on_comboBox_currentIndexChanged(int index)
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

void CliFormData::on_pb_select_clicked()
{
    QTableWidgetItem *item;
    if(m_searchCond == Search_ID)
    {
        ui->tableWidget->clear();
        ui->tableWidget->setColumnCount(9);

        // set header lables
        QStringList headers;
        headers << "订单编号" << "商品名称"  << "码号" << "颜色" << "订单时间" << "商品数量"
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

            item = new QTableWidgetItem(GlobalVars::g_localClient.getName());
            ui->tableWidget->setItem(i, 6, item);
            item = new QTableWidgetItem(GlobalVars::g_localClient.getPhone());
            ui->tableWidget->setItem(i, 7, item);
            item = new QTableWidgetItem(GlobalVars::g_localClient.getSite());
            ui->tableWidget->setItem(i, 8, item);
        }
    }else
    {
        getFormInfo();
    }
}

void CliFormData::on_pb_delete_clicked()
{
    emit signalDeleteForm(GlobalVars::g_localClient.getID(),
                          ui->le_id->text());
}
