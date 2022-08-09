#ifndef CLIENTINFO_H
#define CLIENTINFO_H
#include <QString>
#include <QList>
#include <QDebug>

class ClientInfo
{
public:
    ClientInfo();
    ClientInfo(const QString &id, const QString &imid,const QString &name,
               const QString &phone, const QString &time, const QString &site);
    void display(void) const;

    void setID(const QString &id);
    void setImid(const QString &imid);
    void setName(const QString &name);
    void setPhone(const QString &phone);
    void setTime(const QString &time);
    void setSite(const QString &site);

    const QString &getID() const;
    const QString &getImid() const;
    const QString &getName() const;
    const QString &getPhone() const;
    const QString &getTime() const;
    const QString &getSite() const;

private:
    QString m_id;
    QString m_imid;
    QString m_name;
    QString m_phone;
    QString m_time;
    QString m_site;
};

typedef QList<ClientInfo> ClientInfoList;
typedef QMap<QString, ClientInfoList::iterator> ClientInfoMap;  //网络操作使用
#endif // CLIENTINFO_H
