#ifndef SHOPINFO_H
#define SHOPINFO_H
#include <QString>
#include <QList>
#include <QDebug>

class ShopInfo
{
public:
    ShopInfo();

    ShopInfo(const QString &id, const QString &merid, const QString &name,
             const QString &type, const QString &time);

    void display(void) const;

    void setID(const QString &id);
    void setMerid(const QString &merid);
    void setName(const QString &name);
    void setType(const QString &type);
    void setTime(const QString &time);

    const QString &getID() const;
    const QString &getMerid() const;
    const QString &getName() const;
    const QString &getType() const;
    const QString &getTime() const;

private:
    QString m_id;
    QString m_merid;
    QString m_name;
    QString m_type;
    QString m_time;
};

typedef QList<ShopInfo> ShopInfoList;
typedef QMap<QString, ShopInfoList::iterator> ShopInfoMap;  //网络操作使用
#endif // SHOPINFO_H
