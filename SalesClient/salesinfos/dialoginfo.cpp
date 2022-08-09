#include "dialoginfo.h"

DialogInfo::DialogInfo()
{

}

DialogInfo::DialogInfo(const QString &merid, const QString &cliid,
                        const QString &mersay,const QString &clisay, const QString &time)
{
    m_merid = merid;
    m_cliid = cliid;
    m_mersay = mersay;
    m_time = time;
    m_clisay = clisay;
}

void DialogInfo::display(void) const
{
    qDebug() << "Merid: " << m_merid;
    qDebug() << "Cliid: " << m_cliid;
    qDebug() << "Mersay: " << m_mersay;
    qDebug() << "Time: " << m_time;
    qDebug() << "Clisay: " << m_clisay;
}

void DialogInfo::setMerid(const QString &merid)
{
    m_merid = merid;
}
void DialogInfo::setCliid(const QString &cliid)
{
    m_cliid = cliid;
}
void DialogInfo::setMersay(const QString &mersay)
{
    m_mersay = mersay;
}
void DialogInfo::setTime(const QString &time)
{
    m_time = time;
}
void DialogInfo::setClisay(const QString &clisay)
{
    m_clisay = clisay;
}

const QString &DialogInfo::getMerid() const
{
    return m_merid;
}
const QString &DialogInfo::getMersay() const
{
    return m_mersay;
}
const QString &DialogInfo::getCliid() const
{
    return m_cliid;
}
const QString &DialogInfo::getTime() const
{
    return m_time;
}
const QString &DialogInfo::getClisay() const
{
    return m_clisay;
}
