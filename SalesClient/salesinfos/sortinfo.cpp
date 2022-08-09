#include "sortinfo.h"

SortInfo::SortInfo()
{
    m_id.clear();
    m_comid.clear();
    m_bar.clear();
    m_colour.clear();
    m_num.clear();
}

SortInfo::SortInfo(const QString &id, const QString &comid, const QString &bar,
         const QString &colour, const QString &num)
{
    m_id = id;
    m_comid = comid;
    m_bar = bar;
    m_colour = colour;
    m_num = num;
}

void SortInfo::display(void) const
{
    qDebug() << "ID: " << m_id;
    qDebug() << "Comid: " << m_comid;
    qDebug() << "Bar: " << m_bar;
    qDebug() << "Colour: " << m_colour;
    qDebug() << "Num: " << m_num;
}

void SortInfo::setID(const QString &id)
{
    m_id = id;
}
void SortInfo::setComid(const QString &comid)
{
    m_comid = comid;
}
void SortInfo::setBar(const QString &bar)
{
    m_bar = bar;
}
void SortInfo::setColour(const QString &colour)
{
    m_colour = colour;
}
void SortInfo::setNum(const QString &num)
{
    m_num = num;
}

const QString &SortInfo::getID() const
{
    return m_id;
}
const QString &SortInfo::getComid() const
{
    return m_comid;
}
const QString &SortInfo::getBar() const
{
    return m_bar;
}
const QString &SortInfo::getColour() const
{
    return m_colour;
}
const QString &SortInfo::getNum() const
{
    return m_num;
}

