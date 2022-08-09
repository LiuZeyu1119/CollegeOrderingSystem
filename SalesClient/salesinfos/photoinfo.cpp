#include "photoinfo.h"

PhotoInfo::PhotoInfo()
{
    m_id.clear();
    m_name.clear();
    m_site.clear();
}

PhotoInfo::PhotoInfo (const QString &id, const QString &name, const QString &site)
{
    m_id = id;
    m_name = name;
    m_site = site;
}

void PhotoInfo::display(void) const
{
    qDebug() << "ID: " << m_id;
    qDebug() << "Name: " << m_name;
    qDebug() << "Site: " << m_site;
}

void PhotoInfo::setID(const QString &id)
{
    m_id = id;
}
void PhotoInfo::setName(const QString &name)
{
    m_name = name;
}
void PhotoInfo::setSite(const QString &site)
{
    m_site = site;
}

const QString &PhotoInfo::getID() const
{
    return m_id;
}
const QString &PhotoInfo::getName() const
{
    return m_name;
}
const QString &PhotoInfo::getSite() const
{
    return m_site;
}
