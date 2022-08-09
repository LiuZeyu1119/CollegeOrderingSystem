#include "forminfo.h"

FormInfo::FormInfo()
{
    m_id.clear();
    m_comid.clear();
    m_cliid.clear();
    m_soid.clear();
    m_time.clear();
    m_num.clear();
}

FormInfo::FormInfo(const QString &id, const QString &comid, const QString &cliid,
                        const QString &soid,const QString &time, const QString &num)
{
    m_id = id;
    m_comid = comid;
    m_cliid = cliid;
    m_soid = soid;
    m_time = time;
    m_num = num;
}

void FormInfo::display(void) const
{
    qDebug() << "ID: " << m_id;
    qDebug() << "Comid: " << m_comid;
    qDebug() << "Cliid: " << m_cliid;
    qDebug() << "Soid: " << m_soid;
    qDebug() << "Time: " << m_time;
    qDebug() << "Num: " << m_num;
}

void FormInfo::setID(const QString &id)
{
    m_id = id;
}
void FormInfo::setComid(const QString &comid)
{
    m_comid = comid;
}
void FormInfo::setCliid(const QString &cliid)
{
    m_cliid = cliid;
}
void FormInfo::setSoid(const QString &soid)
{
    m_soid = soid;
}
void FormInfo::setTime(const QString &time)
{
    m_time = time;
}
void FormInfo::setNum(const QString &num)
{
    m_num = num;
}

const QString &FormInfo::getID() const
{
    return m_id;
}
const QString &FormInfo::getComid() const
{
    return m_comid;
}
const QString &FormInfo::getSoid() const
{
    return m_soid;
}
const QString &FormInfo::getCliid() const
{
    return m_cliid;
}
const QString &FormInfo::getTime() const
{
    return m_time;
}
const QString &FormInfo::getNum() const
{
    return m_num;
}
