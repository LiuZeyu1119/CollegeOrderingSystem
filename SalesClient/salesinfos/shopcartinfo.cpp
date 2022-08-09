#include "shopcartinfo.h"

ShopcartInfo::ShopcartInfo()
{
    m_cliid.clear();
    m_comid.clear();
    m_soid.clear();
    m_num.clear();
}

ShopcartInfo::ShopcartInfo(const QString &cliid, const QString &comid,
                        const QString &soid, const QString &num)
{
    m_cliid = cliid;
    m_comid = comid;
    m_soid = soid;
    m_num = num;
}

void ShopcartInfo::display(void) const
{
    qDebug() << "Comid: " << m_comid;
    qDebug() << "Cliid: " << m_cliid;
    qDebug() << "Soid: " << m_soid;
    qDebug() << "Num: " << m_num;
}

void ShopcartInfo::setComid(const QString &comid)
{
    m_comid = comid;
}
void ShopcartInfo::setCliid(const QString &cliid)
{
    m_cliid = cliid;
}
void ShopcartInfo::setSoid(const QString &soid)
{
    m_soid = soid;
}
void ShopcartInfo::setNum(const QString &num)
{
    m_num = num;
}

const QString &ShopcartInfo::getComid() const
{
    return m_comid;
}
const QString &ShopcartInfo::getSoid() const
{
    return m_soid;
}
const QString &ShopcartInfo::getCliid() const
{
    return m_cliid;
}
const QString &ShopcartInfo::getNum() const
{
    return m_num;
}
