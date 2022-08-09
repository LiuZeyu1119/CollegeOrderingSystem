#include "clientinfo.h"

ClientInfo::ClientInfo()
{
    m_id.clear();
    m_imid.clear();
    m_name.clear();
    m_phone.clear();
    m_time.clear();
    m_site.clear();
}

ClientInfo::ClientInfo (const QString &id, const QString &imid, const QString &name,
                        const QString &phone,const QString &time, const QString &site)
{
    m_id = id;
    m_imid = imid;
    m_name = name;
    m_phone = phone;
    m_time = time;
    m_site = site;
}

void ClientInfo::display(void) const
{
    qDebug() << "ID: " << m_id;
    qDebug() << "Imid: " << m_imid;
    qDebug() << "Name: " << m_name;
    qDebug() << "Phone: " << m_phone;
    qDebug() << "Time: " << m_time;
    qDebug() << "Site: " << m_site;
}

void ClientInfo::setID(const QString &id)
{
    m_id = id;
}
void ClientInfo::setImid(const QString &imid)
{
    m_imid = imid;
}
void ClientInfo::setName(const QString &name)
{
    m_name = name;
}
void ClientInfo::setPhone(const QString &phone)
{
    m_phone = phone;
}
void ClientInfo::setTime(const QString &time)
{
    m_time = time;
}
void ClientInfo::setSite(const QString &site)
{
    m_site = site;
}

const QString &ClientInfo::getID() const
{
    return m_id;
}
const QString &ClientInfo::getImid() const
{
    return m_imid;
}
const QString &ClientInfo::getName() const
{
    return m_name;
}
const QString &ClientInfo::getPhone() const
{
    return m_phone;
}
const QString &ClientInfo::getTime() const
{
    return m_time;
}
const QString &ClientInfo::getSite() const
{
    return m_site;
}
