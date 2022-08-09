#ifndef COMMODITYINFO_H
#define COMMODITYINFO_H
#include <QString>
#include <QList>
#include <QDebug>

class CommodityInfo
{
public:
    CommodityInfo();

    CommodityInfo(const QString &id, const QString &shid, const QString &imid,
                  const QString &name, const QString &sprice, const QString &sex);

    void display(void) const;

    void setID(const QString &id);
    void setShid(const QString &shid);
    void setImid(const QString &imid);
    void setName(const QString &name);
    void setSprice(const QString &sprice);
    void setSex(const QString &sex);

    const QString &getID() const;
    const QString &getShid() const;
    const QString &getImid() const;
    const QString &getName() const;
    const QString &getSprice() const;
    const QString &getSex() const;

private:
    QString m_id;
    QString m_shid;
    QString m_imid;
    QString m_name;
    QString m_sprice;
    QString m_sex;
};

typedef QList<CommodityInfo> CommodityInfoList;
typedef QMap<QString, CommodityInfoList::iterator> CommodityInfoMap;  //网络操作使用
#endif // COMMODITYINFO_H
