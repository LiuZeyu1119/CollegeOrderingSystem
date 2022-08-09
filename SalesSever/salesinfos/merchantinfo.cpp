#include "merchantinfo.h"

MerchantInfo::MerchantInfo()
{
    m_id.clear();
    m_imid.clear();
    m_name.clear();
    m_phone.clear();
    m_time.clear();
    m_site.clear();
}

MerchantInfo::MerchantInfo (const QString &id, const QString &imid, const QString &name,
                            const QString &phone,const QString &time, const QString &site)
{
    m_id = id;
    m_imid = imid;
    m_name = name;
    m_phone = phone;
    m_time = time;
    m_site = site;
}

void MerchantInfo::display(void) const
{
    qDebug() << "ID: " << m_id;
    qDebug() << "Imid: " << m_imid;
    qDebug() << "Name: " << m_name;
    qDebug() << "Phone: " << m_phone;
    qDebug() << "Time: " << m_time;
    qDebug() << "Site: " << m_site;
}

void MerchantInfo::setID(const QString &id)
{
    m_id = id;
}
void MerchantInfo::setImid(const QString &imid)
{
    m_imid = imid;
}
void MerchantInfo::setName(const QString &name)
{
    m_name = name;
}
void MerchantInfo::setPhone(const QString &phone)
{
    m_phone = phone;
}
void MerchantInfo::setTime(const QString &time)
{
    m_time = time;
}
void MerchantInfo::setSite(const QString &site)
{
    m_site = site;
}

const QString &MerchantInfo::getID() const
{
    return m_id;
}
const QString &MerchantInfo::getImid() const
{
    return m_imid;
}
const QString &MerchantInfo::getName() const
{
    return m_name;
}
const QString &MerchantInfo::getPhone() const
{
    return m_phone;
}
const QString &MerchantInfo::getTime() const
{
    return m_time;
}
const QString &MerchantInfo::getSite() const
{
    return m_site;
}

