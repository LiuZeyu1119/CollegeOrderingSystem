#include "tableitem.h"
#include "ui_tableitem.h"

#include <QDebug>
#include <QImage>

TableItem::TableItem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TableItem)
{
    ui->setupUi(this);
}

TableItem::~TableItem()
{
    delete ui;
}

void TableItem::updateItemInfo(const QString &id, const QString &name, const QImage &image)
{
    m_id = id;
    ui->lb_name->setText(name);
    ui->lb_head->setPixmap(QPixmap::fromImage(image));
}


void TableItem::on_pb_info_clicked()
{
    if(GlobalVars::g_localClient.getID() != NULL)
    {
        m_clicominfo = new CliComInfo;
        connect(m_clicominfo, SIGNAL(signalInsertForm(QString,QString,QString,QString)),
                this, SLOT(slotInsertForm(QString,QString,QString,QString)));
        connect(m_clicominfo, SIGNAL(signalInsertShopcart(QString,QString,QString,QString)),
                this, SLOT(slotInsertShopcart(QString,QString,QString,QString)));

        m_clicominfo->getCliComInfo(m_id);
        m_clicominfo->show();

    }else
    {
        m_onecommodity = new OneCommodity;

        connect(m_onecommodity, SIGNAL(signalUpdateCommodity(QString,QString,QString)),
                this, SLOT(slotUpdateCommodity(QString,QString,QString)));

        m_onecommodity->getOneCommodity(m_id);
        m_onecommodity->show();
    }
}

void TableItem::slotInsertForm(QString cliid, QString comid, QString soid, QString num)
{
    emit signalInsertForm(cliid, comid, soid, num);
}

void TableItem::slotInsertShopcart(QString cliid, QString comid, QString soid, QString num)
{
    emit signalInsertShopcart(cliid, comid, soid, num);
}

void TableItem::slotUpdateCommodity(QString name, QString sprice, QString sex)
{
    emit signalUpdateCommodity(name, sprice, sex);
}
