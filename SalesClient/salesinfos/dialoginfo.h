#ifndef DIALOGINFO_H
#define DIALOGINFO_H
#include <QDebug>
#include <QString>
#include <QList>

class DialogInfo
{
public:
    DialogInfo();

    DialogInfo(const QString &merid,const QString &cliid,
               const QString &mersay, const QString &clisay, const QString &time);
    void display(void) const;

    void setMerid(const QString &merid);
    void setCliid(const QString &cliid);
    void setMersay(const QString &mersay);
    void setTime(const QString &time);
    void setClisay(const QString &clisay);

    const QString &getMerid() const;
    const QString &getCliid() const;
    const QString &getMersay() const;
    const QString &getTime() const;
    const QString &getClisay() const;

private:
    QString m_merid;
    QString m_cliid;
    QString m_mersay;
    QString m_time;
    QString m_clisay;
};

typedef QList<DialogInfo> DialogInfoList;
typedef QMap<QString, DialogInfoList::iterator> DialogInfoMap;  //网络操作使用
#endif // DIALOGINFO_H
