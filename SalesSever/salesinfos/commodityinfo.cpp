#include "commodityinfo.h"

CommodityInfo::CommodityInfo()
{

}

CommodityInfo::CommodityInfo(const QString &id, const QString &shid, const QString &imid,
                             const QString &name, const QString &sprice, const QString &sex)
{
    m_id = id;
    m_shid = shid;
    m_imid = imid;
    m_name = name;
    m_sprice = sprice;
    m_sex = sex;
}

void CommodityInfo::display(void) const
{
    qDebug() << "ID: " << m_id;
    qDebug() << "Shid: " << m_shid;
    qDebug() << "Imid: " << m_imid;
    qDebug() << "Name: " << m_name;
    qDebug() << "Sprice: " << m_sprice;
    qDebug() << "Sex: " << m_sex;
}

void CommodityInfo::setID(const QString &id)
{
    m_id = id;
}

void CommodityInfo::setShid(const QString &shid)
{
    m_shid = shid;
}
void CommodityInfo::setImid(const QString &imid)
{
    m_imid = imid;
}
void CommodityInfo::setName(const QString &name)
{
    m_name = name;
}
void CommodityInfo::setSprice(const QString &sprice)
{
    m_sprice = sprice;
}
void CommodityInfo::setSex(const QString &sex)
{
    m_sex = sex;
}

const QString &CommodityInfo::getID() const
{
    return m_id;
}
const QString &CommodityInfo::getShid() const
{
    return m_shid;
}
const QString &CommodityInfo::getImid() const
{
    return m_imid;
}
const QString &CommodityInfo::getName() const
{
    return m_name;
}
const QString &CommodityInfo::getSprice() const
{
    return m_sprice;
}
const QString &CommodityInfo::getSex() const
{
    return m_sex;
}
