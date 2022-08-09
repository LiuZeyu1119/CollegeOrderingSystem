#include "photoms.h"
#include "ui_photoms.h"

PhotoMS::PhotoMS(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PhotoMS)
{
    ui->setupUi(this);

    setPushButter();

    m_operData = Oper_None;
    initWidgetUnits();
    on_pb_select_clicked();
}

PhotoMS::~PhotoMS()
{
    delete ui;
}

void PhotoMS::setPushButter()
{
    ui->label_3->setStyleSheet("color:red;");
    ui->pb_delete->setIcon(QPixmap(":/ico/delete.jpg"));
    ui->pb_insert->setIcon(QPixmap(":/ico/insert.jpg"));
    ui->pb_save->setIcon(QPixmap(":/ico/save.jpg"));
    ui->pb_update->setIcon(QPixmap(":/ico/zhuxiao.jpg"));
    ui->pb_cancel->setIcon(QPixmap(":/ico/update.jpg"));
    ui->pb_select->setIcon(QPixmap(":/ico/select.jpg"));
}

void PhotoMS::on_comboBox_currentIndexChanged(int index)
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

void PhotoMS::updateTableInfos(void)
{
    ui->tableWidget->clear();
    ui->tableWidget->setColumnCount(3);

    // set header lables
    QStringList headers;
    headers << "图片编号" << "图片名称"  << "所存地址";
    ui->tableWidget->setHorizontalHeaderLabels(headers);
    ui->tableWidget->setRowCount(GlobalVars::g_photoInfoList->length());
    for(int i=0; i < GlobalVars::g_photoInfoList->length(); i++)
    {
        QTableWidgetItem *item = new QTableWidgetItem(GlobalVars::g_photoInfoList->at(i).getID());
        ui->tableWidget->setItem(i, 0, item);
        item = new QTableWidgetItem(GlobalVars::g_photoInfoList->at(i).getName());
        ui->tableWidget->setItem(i, 1, item);
        item = new QTableWidgetItem(GlobalVars::g_photoInfoList->at(i).getSite());
        ui->tableWidget->setItem(i, 2, item);
    }
}

void PhotoMS::initWidgetUnits(void)
{
    ui->le_select->setEnabled(false);
    ui->pb_save->setEnabled(false);
}


void PhotoMS::on_tableWidget_clicked(const QModelIndex &index)
{
    m_row = index.row();
}

void PhotoMS::on_pb_select_clicked()
{
    if(m_searchCond == Search_ID)
    {
        ExecSQL::searchPhotoInfoForID(ui->le_select->text());
    }else if(m_searchCond == Search_Name)
    {
        ExecSQL::searchPhotoInfoForName(ui->le_select->text());
    }else if(m_searchCond == Search_Site)
    {
        ExecSQL::searchPhotoInfoForSite(ui->le_select->text());
    }else
    {
        ExecSQL::searchAllPhotoInfos();
    }

    updateTableInfos();
}

void PhotoMS::on_pb_update_clicked()
{
    m_operData = Oper_Mdy;
    ui->tableWidget->setEnabled(true);
    ui->pb_save->setEnabled(true);
}

void PhotoMS::on_pb_delete_clicked()
{
    m_operData = Oper_Del;
    ui->tableWidget->setEnabled(true);
    ui->pb_save->setEnabled(true);
}

void PhotoMS::on_pb_insert_clicked()
{
    m_operData = Oper_Add;
    ui->tableWidget->setEnabled(true);
    PhotoInfo info("NULL", "NULL", "NULL");
    GlobalVars::g_photoInfoList->append(info);
    updateTableInfos();
    ui->pb_save->setEnabled(true);
}

void PhotoMS::on_pb_cancel_clicked()
{
    ui->tableWidget->setEnabled(true);
    ui->pb_save->setEnabled(false);
}

void PhotoMS::on_pb_save_clicked()
{
    if(m_operData == Oper_Mdy)
    {
        QString str_id = ui->tableWidget->item(m_row, 0)->text();
        QString str_name = ui->tableWidget->item(m_row, 1)->text();
        QString str_site = ui->tableWidget->item(m_row, 2)->text();
        ExecSQL::modifyPhotoInfoForName(str_id, str_name);
        ExecSQL::modifyPhotoInfoForSite(str_id, str_site);
    }else if(m_operData == Oper_Del)
    {
        QString str_id = ui->tableWidget->item(m_row, 0)->text();
        ExecSQL::removePhotoInfo(str_id);
    }else if(m_operData == Oper_Add)
    {
        QString str_id = ui->tableWidget->item(m_row, 0)->text();
        QString str_name = ui->tableWidget->item(m_row, 1)->text();
        QString str_site = ui->tableWidget->item(m_row, 2)->text();
        PhotoInfo info(str_id, str_name, str_site);
        ExecSQL::addNewPhotoInfo(info);
    }

    on_pb_cancel_clicked();
    on_pb_select_clicked();
}
