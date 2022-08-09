#include "userinfo.h"

UserInfo::UserInfo()
{
    m_id.clear();
    m_pswd.clear();
    m_type.clear();
    m_time.clear();
}

UserInfo::UserInfo(const QString &id, const QString &pswd,
           const QString &type, const QString &time)
{
    m_id = id;
    m_pswd = pswd;
    m_type = type;
    m_time = time;
}

void UserInfo::display(void) const
{
    qDebug() << "ID: " << m_id;
    qDebug() << "Pswd: " << m_pswd;
    qDebug() << "Type: " << m_type;
    qDebug() << "Time: " << m_time;
}

void UserInfo::setID(const QString &id)
{
    m_id = id;
}

void UserInfo::setPswd(const QString &pswd)
{
    m_pswd = pswd;
}

void UserInfo::setType(const QString &type)
{
    m_type = type;
}

void UserInfo::setTime(const QString &time)
{
    m_time = time;
}

const QString &UserInfo::getID() const
{
    return m_id;
}
const QString &UserInfo::getPswd() const
{
    return m_pswd;
}
const QString &UserInfo::getType() const
{
    return m_type;
}
const QString &UserInfo::getTime() const
{
    return m_time;
}
