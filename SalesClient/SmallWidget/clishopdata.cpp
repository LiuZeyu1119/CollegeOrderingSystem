#include "clishopdata.h"
#include "ui_clishopdata.h"


CliShopData::CliShopData(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CliShopData)
{
    ui->setupUi(this);
    setWindowTitle("商家店铺");

    m_searchCond = Search_None;

    ui->pb_select->setIcon(QPixmap(":/ico/select.jpg"));
}

CliShopData::~CliShopData()
{
    delete ui;
}

void CliShopData::paintEvent(QPaintEvent *)
{
    QPainter p(this);
    QPixmap pix(":/image/sback.jpg");
    p.drawPixmap(0,0,pix);
}

void CliShopData::clientShopInfo(const QString &id)
{
    m_id = id;
    QImage image = GlobalVars::UserImageMap[id];
    QImage image2 = image.scaled(ui->lb_head->size(),
                                 Qt::IgnoreAspectRatio,
                                 Qt::SmoothTransformation);
    ui->lb_head->setPixmap(QPixmap::fromImage(image2));
    ui->lb_name->setText(GlobalVars::g_merchantInfoMap[id]->getName());
    ui->lb_phone->setText(GlobalVars::g_merchantInfoMap[id]->getPhone());
    ui->lb_time->setText(GlobalVars::g_merchantInfoMap[id]->getTime());
    ui->lb_site->setText(GlobalVars::g_merchantInfoMap[id]->getSite());

    ui->tableWidget->clear();
    ui->tableWidget->setColumnCount(4);

    // set header lables
    QStringList headers;
    headers << "店铺编号" << "店铺名称"  << "卖货类别" << "开店时间";
    ui->tableWidget->setHorizontalHeaderLabels(headers);

    for(int i = 0; i < GlobalVars::g_shopInfoList->length(); i++)
    {
        if(id == GlobalVars::g_shopInfoList->at(i).getMerid())
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

}

void CliShopData::on_comboBox_currentIndexChanged(int index)
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

void CliShopData::on_pb_select_clicked()
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
        ShopInfo l_cshopinfo;
        ShopInfoList l_cshopinfolist;
        for(int i = 0; i < l_shopinfolist.length(); i++)
        {
            if(name == l_shopinfolist.at(i).getName())
            {
                l_cshopinfo = l_shopinfolist.at(i);
                l_cshopinfolist.append(l_cshopinfo);
            }
        }
        ui->tableWidget->setRowCount(l_cshopinfolist.length());

        for(int i = 0; i < l_cshopinfolist.length(); i++)
        {
            QTableWidgetItem *item = new QTableWidgetItem(l_cshopinfolist.at(i).getID());
            ui->tableWidget->setItem(i, 0, item);
            item = new QTableWidgetItem(l_cshopinfolist.at(i).getName());
            ui->tableWidget->setItem(i, 1, item);
            item = new QTableWidgetItem(l_cshopinfolist.at(i).getType());
            ui->tableWidget->setItem(i, 2, item);
            item = new QTableWidgetItem(l_cshopinfolist.at(i).getTime());
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
        ShopInfo l_cshopinfo;
        ShopInfoList l_cshopinfolist;
        for(int i = 0; i < l_shopinfolist.length(); i++)
        {
            if(type == l_shopinfolist.at(i).getType())
            {
                l_cshopinfo = l_shopinfolist.at(i);
                l_cshopinfolist.append(l_cshopinfo);
            }
        }
        ui->tableWidget->setRowCount(l_cshopinfolist.length());

        for(int i = 0; i < l_cshopinfolist.length(); i++)
        {
            QTableWidgetItem *item = new QTableWidgetItem(l_cshopinfolist.at(i).getID());
            ui->tableWidget->setItem(i, 0, item);
            item = new QTableWidgetItem(l_cshopinfolist.at(i).getName());
            ui->tableWidget->setItem(i, 1, item);
            item = new QTableWidgetItem(l_cshopinfolist.at(i).getType());
            ui->tableWidget->setItem(i, 2, item);
            item = new QTableWidgetItem(l_cshopinfolist.at(i).getTime());
            ui->tableWidget->setItem(i, 3, item);
        }
    }else
    {
        clientShopInfo(m_id);
    }
}
