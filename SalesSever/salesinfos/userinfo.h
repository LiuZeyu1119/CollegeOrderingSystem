#ifndef USERINFO_H
#define USERINFO_H

#include <QString>
#include <QList>
#include <QDebug>

class UserInfo
{
public:
    UserInfo();
    UserInfo(const QString &id, const QString &pswd,
               const QString &type, const QString &Time);

    void display(void) const;

    void setID(const QString &id);
    void setPswd(const QString &pswd);
    void setType(const QString &type);
    void setTime(const QString &time);

    const QString &getID() const;
    const QString &getPswd() const;
    const QString &getType() const;
    const QString &getTime() const;

private:
    QString m_id;
    QString m_pswd;
    QString m_type;
    QString m_time;    
};

typedef QList<UserInfo> UserInfoList;
typedef QMap<QString, UserInfoList::iterator> UserInfoMap;  //网络操作使用

#endif // USERINFO_H
