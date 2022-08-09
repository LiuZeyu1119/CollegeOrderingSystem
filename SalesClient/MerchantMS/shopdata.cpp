#include "shopdata.h"
#include "ui_shopdata.h"

ShopData::ShopData(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ShopData)
{
    ui->setupUi(this);

    m_searchCond = Search_None;

    ui->pb_delete->setIcon(QPixmap(":/ico/delete.jpg"));
    ui->pb_insert->setIcon(QPixmap(":/ico/insert.jpg"));
    ui->pb_save->setIcon(QPixmap(":/ico/save.jpg"));
    ui->pb_select->setIcon(QPixmap(":/ico/select.jpg"));
}

ShopData::~ShopData()
{
    delete ui;
}

void ShopData::getShopInfo()
{
    QImage image = GlobalVars::UserImageMap[GlobalVars::g_localUser.getID()];
    QImage image2 = image.scaled(ui->lb_head->size(),
                                 Qt::IgnoreAspectRatio,
                                 Qt::SmoothTransformation);
    ui->lb_head->setPixmap(QPixmap::fromImage(image2));
    ui->lb_name->setText(GlobalVars::g_localMerchant.getName());

    ui->tableWidget->clear();
    ui->tableWidget->setColumnCount(4);

    // set header lables
    QStringList headers;
    headers << "店铺编号" << "店铺名称"  << "卖货类别" << "开店时间";
    ui->tableWidget->setHorizontalHeaderLabels(headers);
    ui->tableWidget->setRowCount(GlobalVars::g_shopInfoList->length());

    for(int i=0; i < GlobalVars::g_shopInfoList->length(); i++)
    {
        QTableWidgetItem *item = new QTableWidgetItem(GlobalVars::g_shopInfoList->at(i).getID());
        ui->tableWidget->setItem(i, 0, item);
        item = new QTableWidgetItem(GlobalVars::g_shopInfoList->at(i).getName());
        ui->tableWidget->setItem(i, 1, item);
        item = new QTableWidgetItem(GlobalVars::g_shopInfoList->at(i).getType());
        ui->tableWidget->setItem(i, 2, item);
        item = new QTableWidgetItem(GlobalVars::g_shopInfoList->at(i).getTime());
        ui->tableWidget->setItem(i, 3, item);
    }
}

void ShopData::on_comboBox_currentIndexChanged(int index)
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

void ShopData::on_pb_select_clicked()
{
    if(m_searchCond == Search_Name)
    {
        ui->tableWidget->clear();
        ui->tableWidget->setColumnCount(4);

        // set header lables
        QStringList headers;
        headers << "店铺编号" << "店铺名称"  << "卖货类别" << "开店时间";
        ui->tableWidget->setHorizontalHeaderLabels(headers);

        QString name = ui->le_select->text();
        ShopInfo l_shopinfo;
        ShopInfoList l_shopinfolist;
        for(int i = 0; i < GlobalVars::g_shopInfoList->length(); i++)
        {
            if(name == GlobalVars::g_shopInfoList->at(i).getName())
            {
                l_shopinfo = GlobalVars::g_shopInfoList->at(i);
                l_shopinfolist.append(l_shopinfo);
            }
        }
        ui->tableWidget->setRowCount(l_shopinfolist.length());

        for(int i = 0; i < l_shopinfolist.length(); i++)
        {
            QTableWidgetItem *item = new QTableWidgetItem(l_shopinfolist.at(i).getID());
            ui->tableWidget->setItem(i, 0, item);
            item = new QTableWidgetItem(l_shopinfolist.at(i).getName());
            ui->tableWidget->setItem(i, 1, item);
            item = new QTableWidgetItem(l_shopinfolist.at(i).getType());
            ui->tableWidget->setItem(i, 2, item);
            item = new QTableWidgetItem(l_shopinfolist.at(i).getTime());
            ui->tableWidget->setItem(i, 3, item);
        }
    }else if(m_searchCond == Search_Type)
    {
        ui->tableWidget->clear();
        ui->tableWidget->setColumnCount(4);

        // set header lables
        QStringList headers;
        headers << "店铺编号" << "店铺名称"  << "卖货类别" << "开店时间";
        ui->tableWidget->setHorizontalHeaderLabels(headers);

        QString type = ui->le_select->text();
        ShopInfo l_shopinfo;
        ShopInfoList l_shopinfolist;
        for(int i = 0; i < GlobalVars::g_shopInfoList->length(); i++)
        {
            if(type == GlobalVars::g_shopInfoList->at(i).getType())
            {
                l_shopinfo = GlobalVars::g_shopInfoList->at(i);
                l_shopinfolist.append(l_shopinfo);
            }
        }
        ui->tableWidget->setRowCount(l_shopinfolist.length());

        for(int i = 0; i < l_shopinfolist.length(); i++)
        {
            QTableWidgetItem *item = new QTableWidgetItem(l_shopinfolist.at(i).getID());
            ui->tableWidget->setItem(i, 0, item);
            item = new QTableWidgetItem(l_shopinfolist.at(i).getName());
            ui->tableWidget->setItem(i, 1, item);
            item = new QTableWidgetItem(l_shopinfolist.at(i).getType());
            ui->tableWidget->setItem(i, 2, item);
            item = new QTableWidgetItem(l_shopinfolist.at(i).getTime());
            ui->tableWidget->setItem(i, 3, item);
        }
    }else
    {
        getShopInfo();
    }
}

void ShopData::on_tableWidget_clicked(const QModelIndex &index)
{
    const int m_row = index.row();

    ui->le_id->setText(ui->tableWidget->item(m_row, 0)->text());
    ui->le_name->setText(ui->tableWidget->item(m_row, 1)->text());
    ui->le_type->setText(ui->tableWidget->item(m_row, 2)->text());
}

void ShopData::on_pb_insert_clicked()
{
    ui->le_id->setEnabled(true);
    ui->le_name->setEnabled(true);
    ui->le_type->setEnabled(true);
}

void ShopData::on_pb_save_clicked()
{
    emit signalInsertShop(ui->le_id->text(),
                          GlobalVars::g_localMerchant.getID(),
                          ui->le_name->text(),
                          ui->le_type->text());
}

void ShopData::on_pb_delete_clicked()
{
    emit signalDeleteShop(GlobalVars::g_localMerchant.getID(),
                          ui->le_id->text());
}
