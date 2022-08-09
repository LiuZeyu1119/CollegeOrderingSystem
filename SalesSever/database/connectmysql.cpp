#include "connectmysql.h"
#include <QSqlDatabase>
#include <QSqlError>

ConnectMysql::ConnectMysql()
{

}

bool ConnectMysql::createConnection()
{
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("sales1");
    db.setUserName("root");
    db.setPassword("123456");
    db.setPort(3306);
    if(!db.open()){
        qCritical("Can't open database: %s(%s)",
                  db.lastError().text().toLocal8Bit().data(),
                  qt_error_string().toLocal8Bit().data());

        return false;
    }
    return true;
}

void ConnectMysql::closeConnection()
{
    QSqlDatabase::database().close();
}
