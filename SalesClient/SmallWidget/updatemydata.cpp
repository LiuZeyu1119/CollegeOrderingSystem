#include "updatemydata.h"
#include "ui_updatemydata.h"
#include <QMessageBox>
#include <QFileDialog>

UpdateMyData::UpdateMyData(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UpdateMyData)
{
    ui->setupUi(this);
    setWindowTitle("编辑资料");
    ui->pushButton_2->setIcon(QPixmap(":/ico/insert.jpg"));
    ui->pb_save->setIcon(QPixmap(":/ico/save.jpg"));
}

UpdateMyData::~UpdateMyData()
{
    delete ui;
}

void UpdateMyData::paintEvent(QPaintEvent *)
{
    QPainter p(this);
    QPixmap pix(":/image/sback.jpg");
    p.drawPixmap(0,0,pix);
}

void UpdateMyData::updateInfo()
{
    QImage image = GlobalVars::UserImageMap[GlobalVars::g_localUser.getID()];
    QImage image2 = image.scaled(ui->lb_head->size(),
                                 Qt::IgnoreAspectRatio,
                                 Qt::SmoothTransformation);
    ui->lb_head->setPixmap(QPixmap::fromImage(image2));

    ui->le_id->setText(GlobalVars::g_localMerchant.getID());
    ui->le_name->setText(GlobalVars::g_localMerchant.getName());
    ui->le_phone->setText(GlobalVars::g_localMerchant.getPhone());
    ui->le_time->setText(GlobalVars::g_localMerchant.getTime());
    ui->le_site->setText(GlobalVars::g_localMerchant.getSite());
}

//上传头像
void UpdateMyData::on_pushButton_2_clicked()
{
    QString filename=QFileDialog::getOpenFileName(this, tr("选择图像"),
                                                  "", tr("Images (*.png *.jpg)"));
    if(filename.isEmpty())
        return;
    else
    {
        if(!(mer_image.load(filename))) //加载图像
        {
            QMessageBox::information(this, tr("打开图像失败"),tr("打开图像失败!"));
            return;
        }
        ui->lb_head->setPixmap(QPixmap::fromImage(mer_image.scaled(ui->lb_head->size())));
    }
}

void UpdateMyData::on_pushButton_clicked()
{
    emit signalUpdateMerchant(ui->le_name->text(),
                              ui->le_phone->text(),
                              ui->le_site->text());
}

void UpdateMyData::on_pb_save_clicked()
{
    emit signalUpdateMerImage(mer_image);
}
