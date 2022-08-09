#ifndef SHOPCARTINFO_H
#define SHOPCARTINFO_H
#include <QString>
#include <QList>
#include <QDebug>

class ShopcartInfo
{
public:
    ShopcartInfo();

    ShopcartInfo(const QString &cliid, const QString &comid,
               const QString &soid, const QString &num);
    void display(void) const;

    void setCliid(const QString &cliid);
    void setComid(const QString &comid);
    void setSoid(const QString &soid);
    void setNum(const QString &Num);


    const QString &getComid() const;
    const QString &getCliid() const;
    const QString &getSoid() const;
    const QString &getNum() const;

private:
    QString m_comid;
    QString m_cliid;
    QString m_soid;
    QString m_num;
};

typedef QList<ShopcartInfo> ShopcartInfoList;
typedef QMap<QString, ShopcartInfoList::iterator> ShopcartInfoMap;  //网络操作使用

#endif // SHOPCARTINFO_H
