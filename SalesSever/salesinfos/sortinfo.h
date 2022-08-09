#ifndef SORTINFO_H
#define SORTINFO_H
#include <QString>
#include <QList>
#include <QDebug>

class SortInfo
{
public:
    SortInfo();

    SortInfo(const QString &id, const QString &comid, const QString &bar,
             const QString &colour, const QString &num);

    void display(void) const;

    void setID(const QString &id);
    void setComid(const QString &comid);
    void setBar(const QString &bar);
    void setColour(const QString &colour);
    void setNum(const QString &num);

    const QString &getID() const;
    const QString &getComid() const;
    const QString &getBar() const;
    const QString &getColour() const;
    const QString &getNum() const;

private:
    QString m_id;
    QString m_comid;
    QString m_bar;
    QString m_colour;
    QString m_num;
};

typedef QList<SortInfo> SortInfoList;
typedef QMap<QString, SortInfoList::iterator> SortInfoMap;  //网络操作使用

#endif // SORTINFO_H
