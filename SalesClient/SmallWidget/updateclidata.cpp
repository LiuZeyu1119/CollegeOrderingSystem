#include "updateclidata.h"
#include "ui_updateclidata.h"
#include "globalvars.h"

UpdateCliData::UpdateCliData(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UpdateCliData)
{
    ui->setupUi(this);
    setWindowTitle("编辑资料");
    ui->pb_insert->setIcon(QPixmap(":/ico/insert.jpg"));
    ui->pb_save->setIcon(QPixmap(":/ico/save.jpg"));
}

UpdateCliData::~UpdateCliData()
{
    delete ui;
}

void UpdateCliData::paintEvent(QPaintEvent *)
{
    QPainter p(this);
    QPixmap pix(":/image/sback.jpg");
    p.drawPixmap(0,0,pix);
}


void UpdateCliData::updateClientInfo()
{
    QImage image = GlobalVars::UserImageMap[GlobalVars::g_localUser.getID()];
    QImage image2 = image.scaled(ui->lb_head->size(),
                                 Qt::IgnoreAspectRatio,
                                 Qt::SmoothTransformation);
    ui->lb_head->setPixmap(QPixmap::fromImage(image2));

    ui->le_id->setText(GlobalVars::g_localClient.getID());
    ui->le_name->setText(GlobalVars::g_localClient.getName());
    ui->le_phone->setText(GlobalVars::g_localClient.getPhone());
    ui->le_time->setText(GlobalVars::g_localClient.getTime());
    ui->le_site->setText(GlobalVars::g_localClient.getSite());
}

void UpdateCliData::on_pushButton_clicked()
{
    emit signalUpdateClient(ui->le_name->text(),
                              ui->le_phone->text(),
                              ui->le_site->text());
}

//上传头像
void UpdateCliData::on_pb_insert_clicked()
{
    QString filename=QFileDialog::getOpenFileName(this, tr("选择图像"),
                                                  "", tr("Images (*.png *.jpg)"));
    if(filename.isEmpty())
        return;
    else
    {
        if(!(cli_image.load(filename))) //加载图像
        {
            QMessageBox::information(this, tr("打开图像失败"),tr("打开图像失败!"));
            return;
        }
        ui->lb_head->setPixmap(QPixmap::fromImage(cli_image.scaled(ui->lb_head->size())));
    }
}

void UpdateCliData::on_pb_save_clicked()
{
    emit signalUpdateCliImage(cli_image);
}
