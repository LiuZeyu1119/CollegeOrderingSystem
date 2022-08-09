#-------------------------------------------------
#
# Project created by QtCreator 2019-07-16T15:15:22
#
#-------------------------------------------------

QT       += core gui sql network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SalesSever
TEMPLATE = app
TRANSLATIONS += ch2en.ts

SOURCES += main.cpp\
        mainwindow.cpp \
    globalvars.cpp

HEADERS  += mainwindow.h \
    globalvars.h

FORMS    += mainwindow.ui

INCLUDEPATH += $$PWD/include
include(SalesLogin/SalesLogin.pri)
include(database/database.pri)
include(saleswidget/saleswidget.pri)
include(salesinfos/salesinfos.pri)
include(network/network.pri)

RESOURCES += \
    icos.qrc \
    config.qrc \
    image.qrc

DISTFILES += \
    ch2en.ts

#RC_ICONS = shoe.ico
