#ifndef FORMINFO_H
#define FORMINFO_H
#include <QString>
#include <QList>
#include <QDebug>

class FormInfo
{
public:
    FormInfo();

    FormInfo(const QString &id, const QString &comid,const QString &cliid,
               const QString &soid, const QString &time, const QString &num);
    void display(void) const;

    void setID(const QString &id);
    void setComid(const QString &comid);
    void setCliid(const QString &cliid);
    void setSoid(const QString &soid);
    void setTime(const QString &time);
    void setNum(const QString &Num);

    const QString &getID() const;
    const QString &getComid() const;
    const QString &getCliid() const;
    const QString &getSoid() const;
    const QString &getTime() const;
    const QString &getNum() const;

private:
    QString m_id;
    QString m_comid;
    QString m_cliid;
    QString m_soid;
    QString m_time;
    QString m_num;
};

typedef QList<FormInfo> FormInfoList;
typedef QMap<QString, FormInfoList::iterator> FormInfoMap;  //网络操作使用
#endif // FORMINFO_H
