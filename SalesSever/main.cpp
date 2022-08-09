#include "mainwindow.h"
#include <QApplication>
#include "connectmysql.h"
#include <QTranslator>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    ConnectMysql sql;
    if(sql.createConnection())
    {
        qDebug() << "Success: connect DB!!";
    }

    QTranslator translator;
    translator.load(":/ch2en.qm");
    a.installTranslator(&translator);

    MainWindow w;
    //w.show();

    int res = a.exec();

    sql.closeConnection();

    return res;
}
