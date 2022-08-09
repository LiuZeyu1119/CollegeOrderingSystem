#ifndef PHOTOINFO_H
#define PHOTOINFO_H
#include <QString>
#include <QList>
#include <QDebug>

class PhotoInfo
{
public:
    PhotoInfo();
    PhotoInfo(const QString &id, const QString &name, const QString &site);

    void display() const;

    void setID(const QString &id);
    void setName(const QString &name);
    void setSite(const QString &site);

    const QString &getID() const;
    const QString &getName() const;
    const QString &getSite() const;

private:
    QString m_id;
    QString m_name;
    QString m_site;
};

typedef QList<PhotoInfo> PhotoInfoList;
typedef QMap<QString, PhotoInfoList::iterator> PhotoInfoMap;  //网络操作使用

#endif // PHOTOINFO_H
