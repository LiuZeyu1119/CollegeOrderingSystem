#include "shopinfo.h"

ShopInfo::ShopInfo()
{
    m_id.clear();
    m_merid.clear();
    m_name.clear();
    m_type.clear();
    m_time.clear();
}

ShopInfo::ShopInfo(const QString &id, const QString &merid, const QString &name,
           const QString &type, const QString &time)
{
    m_id = id;
    m_merid = merid;
    m_name = name;
    m_type = type;
    m_time = time;
}

void ShopInfo::display(void) const
{
    qDebug() << "ID: " << m_id;
    qDebug() << "Merid: " << m_merid;
    qDebug() << "Name: " << m_name;
    qDebug() << "Type: " << m_type;
    qDebug() << "Time: " << m_time;
}

void ShopInfo::setID(const QString &id)
{
    m_id = id;
}

void ShopInfo::setMerid(const QString &merid)
{
    m_merid = merid;
}
void ShopInfo::setName(const QString &name)
{
    m_name = name;
}
void ShopInfo::setType(const QString &type)
{
    m_type = type;
}
void ShopInfo::setTime(const QString &time)
{
    m_time = time;
}

const QString &ShopInfo::getID() const
{
    return m_id;
}
const QString &ShopInfo::getMerid() const
{
    return m_merid;
}
const QString &ShopInfo::getName() const
{
    return m_name;
}
const QString &ShopInfo::getType() const
{
    return m_type;
}
const QString &ShopInfo::getTime() const
{
    return m_time;
}
