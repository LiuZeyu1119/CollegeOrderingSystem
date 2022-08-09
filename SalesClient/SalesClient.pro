#-------------------------------------------------
#
# Project created by QtCreator 2019-08-06T20:08:00
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SalesClient
TEMPLATE = app


SOURCES += main.cpp\
        salesclient.cpp \
    globalvars.cpp \
    merchantui.cpp \
    clientui.cpp

HEADERS  += salesclient.h \
    globalvars.h \
    merchantui.h \
    clientui.h

FORMS    += \
    merchantui.ui \
    clientui.ui

INCLUDEPATH += $$PWD/include
include(SalesLogin/SalesLogin.pri)
include(salesinfos/salesinfos.pri)
include(network/network.pri)
include(MsgDeal/MsgDeal.pri)
include(MerchantMS/MerchantMS.pri)
include(ClientMS/ClientMS.pri)
include(ItemPtos/ItemPtos.pri)
include(SmallWidget/SmallWidget.pri)

RESOURCES += \
    image.qrc \
    icos.qrc
