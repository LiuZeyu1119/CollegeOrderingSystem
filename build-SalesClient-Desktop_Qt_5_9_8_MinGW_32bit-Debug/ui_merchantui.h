/********************************************************************************
** Form generated from reading UI file 'merchantui.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MERCHANTUI_H
#define UI_MERCHANTUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MerchantUI
{
public:
    QAction *actionFirst;
    QAction *actionMydata;
    QAction *actionShopinfo;
    QAction *actionCommodity;
    QAction *actionForminfo;
    QAction *actionUpdatepswd;
    QAction *actionTalk;
    QWidget *centralwidget;
    QWidget *widget_4;
    QWidget *widget;
    QLabel *lb_head;
    QPushButton *pb_client;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_3;
    QPushButton *pb_first;
    QPushButton *pb_mydata;
    QPushButton *pb_commodity;
    QPushButton *pb_shop;
    QPushButton *pb_form;
    QPushButton *pb_pswd;
    QFrame *line;
    QLabel *label_2;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *lb_time;
    QLabel *label_3;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QPushButton *pb_go;
    QPushButton *pb_f;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MerchantUI)
    {
        if (MerchantUI->objectName().isEmpty())
            MerchantUI->setObjectName(QStringLiteral("MerchantUI"));
        MerchantUI->setEnabled(true);
        MerchantUI->resize(1064, 800);
        MerchantUI->setMouseTracking(false);
        MerchantUI->setStyleSheet(QLatin1String("QMainWindow#MerchantUI{\n"
"	\n"
"	\n"
"	background-image: url(:/image/climain.jpg);\n"
"	\n"
"}"));
        actionFirst = new QAction(MerchantUI);
        actionFirst->setObjectName(QStringLiteral("actionFirst"));
        actionMydata = new QAction(MerchantUI);
        actionMydata->setObjectName(QStringLiteral("actionMydata"));
        actionMydata->setCheckable(true);
        actionShopinfo = new QAction(MerchantUI);
        actionShopinfo->setObjectName(QStringLiteral("actionShopinfo"));
        actionCommodity = new QAction(MerchantUI);
        actionCommodity->setObjectName(QStringLiteral("actionCommodity"));
        actionForminfo = new QAction(MerchantUI);
        actionForminfo->setObjectName(QStringLiteral("actionForminfo"));
        actionUpdatepswd = new QAction(MerchantUI);
        actionUpdatepswd->setObjectName(QStringLiteral("actionUpdatepswd"));
        actionTalk = new QAction(MerchantUI);
        actionTalk->setObjectName(QStringLiteral("actionTalk"));
        centralwidget = new QWidget(MerchantUI);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        widget_4 = new QWidget(centralwidget);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setGeometry(QRect(-1, 130, 1061, 681));
        widget_4->setStyleSheet(QLatin1String("QWidget#widget_4{\n"
"	\n"
"	\n"
"	background-image: url(:/image/timg.jpg);\n"
"}"));
        widget = new QWidget(widget_4);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setEnabled(true);
        widget->setGeometry(QRect(10, 70, 1051, 551));
        widget->setStyleSheet(QLatin1String("QWidget#widget{\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
"	\n"
"	\n"
"}"));
        lb_head = new QLabel(widget);
        lb_head->setObjectName(QStringLiteral("lb_head"));
        lb_head->setGeometry(QRect(270, 220, 510, 180));
        lb_head->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 255);"));
        pb_client = new QPushButton(widget);
        pb_client->setObjectName(QStringLiteral("pb_client"));
        pb_client->setGeometry(QRect(970, 530, 76, 21));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pb_client->sizePolicy().hasHeightForWidth());
        pb_client->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        pb_client->setFont(font);
        pb_client->setStyleSheet(QLatin1String("QPushButton#pb_client{\n"
"	\n"
"	background-image: url(:/ico/pb1.jpg);\n"
"}\n"
"QPushButton#pb_client{\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    min-width: 5em;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton#pb_client:hover\n"
"{\n"
"	\n"
"	background-image: url(:/ico/pb.jpg);\n"
"    border-style: inset;\n"
"}\n"
"\n"
"QPushButton#pb_client:pressed {\n"
"	\n"
"	background-image: url(:/ico/pb2.jpg);\n"
"    border-style: inset;\n"
"}\n"
"\n"
"\n"
""));
        pb_client->raise();
        lb_head->raise();
        layoutWidget_2 = new QWidget(widget_4);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 10, 1051, 41));
        gridLayout_3 = new QGridLayout(layoutWidget_2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        pb_first = new QPushButton(layoutWidget_2);
        pb_first->setObjectName(QStringLiteral("pb_first"));
        sizePolicy.setHeightForWidth(pb_first->sizePolicy().hasHeightForWidth());
        pb_first->setSizePolicy(sizePolicy);
        pb_first->setFont(font);
        pb_first->setStyleSheet(QLatin1String("QPushButton#pb_first{\n"
"	background-image: url(:/ico/pb1.jpg);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    min-width: 5em;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton#pb_first:hover\n"
"{\n"
"	\n"
"	background-image: url(:/ico/pb.jpg);\n"
"    border-style: inset;\n"
"}\n"
"\n"
"QPushButton#pb_first:pressed{\n"
"	\n"
"	background-image: url(:/ico/pb2.jpg);\n"
"    border-style: inset;\n"
"}\n"
"\n"
"\n"
""));

        gridLayout_3->addWidget(pb_first, 0, 0, 1, 1);

        pb_mydata = new QPushButton(layoutWidget_2);
        pb_mydata->setObjectName(QStringLiteral("pb_mydata"));
        sizePolicy.setHeightForWidth(pb_mydata->sizePolicy().hasHeightForWidth());
        pb_mydata->setSizePolicy(sizePolicy);
        pb_mydata->setFont(font);
        pb_mydata->setStyleSheet(QLatin1String("QPushButton#pb_mydata{\n"
"	\n"
"	background-image: url(:/ico/pb1.jpg);\n"
"}\n"
"QPushButton#pb_mydata{\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    min-width: 5em;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton#pb_mydata:hover\n"
"{\n"
"	\n"
"	background-image: url(:/ico/pb.jpg);\n"
"    border-style: inset;\n"
"}\n"
"\n"
"\n"
"\n"
"QPushButton#pb_mydata:pressed {\n"
"	\n"
"	background-image: url(:/ico/pb2.jpg);\n"
"    border-style: inset;\n"
"}\n"
""));

        gridLayout_3->addWidget(pb_mydata, 0, 1, 1, 1);

        pb_commodity = new QPushButton(layoutWidget_2);
        pb_commodity->setObjectName(QStringLiteral("pb_commodity"));
        sizePolicy.setHeightForWidth(pb_commodity->sizePolicy().hasHeightForWidth());
        pb_commodity->setSizePolicy(sizePolicy);
        pb_commodity->setFont(font);
        pb_commodity->setStyleSheet(QLatin1String("QPushButton#pb_commodity{\n"
"	\n"
"	background-image: url(:/ico/pb1.jpg);\n"
"}\n"
"QPushButton#pb_commodity{\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    min-width: 5em;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton#pb_commodity:hover\n"
"{\n"
"	\n"
"	background-image: url(:/ico/pb.jpg);\n"
"    border-style: inset;\n"
"}\n"
"\n"
"QPushButton#pb_commodity:pressed {\n"
"	\n"
"	background-image: url(:/ico/pb2.jpg);\n"
"    border-style: inset;\n"
"}\n"
"\n"
"\n"
""));

        gridLayout_3->addWidget(pb_commodity, 0, 3, 1, 1);

        pb_shop = new QPushButton(layoutWidget_2);
        pb_shop->setObjectName(QStringLiteral("pb_shop"));
        sizePolicy.setHeightForWidth(pb_shop->sizePolicy().hasHeightForWidth());
        pb_shop->setSizePolicy(sizePolicy);
        pb_shop->setFont(font);
        pb_shop->setStyleSheet(QLatin1String("QPushButton#pb_shop{\n"
"	\n"
"	background-image: url(:/ico/pb1.jpg);\n"
"}\n"
"QPushButton#pb_shop{\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    min-width: 5em;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton#pb_shop:hover\n"
"{\n"
"	\n"
"	background-image: url(:/ico/pb.jpg);\n"
"    border-style: inset;\n"
"}\n"
"\n"
"QPushButton#pb_shop:pressed {\n"
"	\n"
"	background-image: url(:/ico/pb2.jpg);\n"
"    border-style: inset;\n"
"}\n"
"\n"
"\n"
""));

        gridLayout_3->addWidget(pb_shop, 0, 2, 1, 1);

        pb_form = new QPushButton(layoutWidget_2);
        pb_form->setObjectName(QStringLiteral("pb_form"));
        sizePolicy.setHeightForWidth(pb_form->sizePolicy().hasHeightForWidth());
        pb_form->setSizePolicy(sizePolicy);
        pb_form->setFont(font);
        pb_form->setStyleSheet(QLatin1String("QPushButton#pb_form{\n"
"	\n"
"	background-image: url(:/ico/pb1.jpg);\n"
"}\n"
"QPushButton#pb_form{\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    min-width: 5em;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton#pb_form:hover\n"
"{\n"
"	\n"
"	background-image: url(:/ico/pb.jpg);\n"
"    border-style: inset;\n"
"}\n"
"\n"
"QPushButton#pb_form:pressed {\n"
"	\n"
"	background-image: url(:/ico/pb2.jpg);\n"
"    border-style: inset;\n"
"}\n"
"\n"
"\n"
""));

        gridLayout_3->addWidget(pb_form, 0, 4, 1, 1);

        pb_pswd = new QPushButton(layoutWidget_2);
        pb_pswd->setObjectName(QStringLiteral("pb_pswd"));
        sizePolicy.setHeightForWidth(pb_pswd->sizePolicy().hasHeightForWidth());
        pb_pswd->setSizePolicy(sizePolicy);
        pb_pswd->setFont(font);
        pb_pswd->setStyleSheet(QLatin1String("QPushButton#pb_pswd{\n"
"	\n"
"	background-image: url(:/ico/pb1.jpg);\n"
"}\n"
"QPushButton#pb_pswd{\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    min-width: 5em;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton#pb_pswd:hover\n"
"{\n"
"	\n"
"	background-image: url(:/ico/pb.jpg);\n"
"    border-style: inset;\n"
"}\n"
"\n"
"QPushButton#pb_pswd:pressed {\n"
"	\n"
"	background-image: url(:/ico/pb2.jpg);\n"
"    border-style: inset;\n"
"}\n"
"\n"
"\n"
""));

        gridLayout_3->addWidget(pb_pswd, 0, 5, 1, 1);

        line = new QFrame(widget_4);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(1200, 40, 20, 41));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 10, 451, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(22);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_2->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 70, 371, 31));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(9);
        label->setFont(font2);
        label->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lb_time = new QLabel(layoutWidget);
        lb_time->setObjectName(QStringLiteral("lb_time"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lb_time->sizePolicy().hasHeightForWidth());
        lb_time->setSizePolicy(sizePolicy1);
        lb_time->setFont(font2);
        lb_time->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(lb_time, 0, 1, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(390, 70, 241, 31));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\215\216\346\226\207\345\275\251\344\272\221"));
        font3.setPointSize(20);
        font3.setStrikeOut(true);
        label_3->setFont(font3);
        label_3->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(770, 20, 281, 91));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        pb_go = new QPushButton(layoutWidget1);
        pb_go->setObjectName(QStringLiteral("pb_go"));
        sizePolicy.setHeightForWidth(pb_go->sizePolicy().hasHeightForWidth());
        pb_go->setSizePolicy(sizePolicy);
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        pb_go->setFont(font4);
        pb_go->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-image: url(:/ico/pb1.jpg);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    min-width: 5em;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	\n"
"	background-image: url(:/ico/pb.jpg);\n"
"    border-style: inset;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	\n"
"	background-image: url(:/ico/pb2.jpg);\n"
"    border-style: inset;\n"
"}\n"
"\n"
"\n"
""));

        gridLayout_2->addWidget(pb_go, 1, 1, 1, 1);

        pb_f = new QPushButton(layoutWidget1);
        pb_f->setObjectName(QStringLiteral("pb_f"));
        sizePolicy.setHeightForWidth(pb_f->sizePolicy().hasHeightForWidth());
        pb_f->setSizePolicy(sizePolicy);
        pb_f->setFont(font4);
        pb_f->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-image: url(:/ico/pb1.jpg);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    min-width: 5em;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	\n"
"	background-image: url(:/ico/pb.jpg);\n"
"    border-style: inset;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	\n"
"	background-image: url(:/ico/pb2.jpg);\n"
"    border-style: inset;\n"
"}\n"
"\n"
"\n"
""));

        gridLayout_2->addWidget(pb_f, 0, 1, 1, 1);

        MerchantUI->setCentralWidget(centralwidget);
        layoutWidget->raise();
        widget_4->raise();
        label_2->raise();
        layoutWidget->raise();
        label_3->raise();
        statusbar = new QStatusBar(MerchantUI);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MerchantUI->setStatusBar(statusbar);
        toolBar = new QToolBar(MerchantUI);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        toolBar->setEnabled(true);
        toolBar->setMouseTracking(true);
        toolBar->setLayoutDirection(Qt::LeftToRight);
        toolBar->setMovable(false);
        toolBar->setIconSize(QSize(32, 75));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        MerchantUI->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionFirst);
        toolBar->addSeparator();
        toolBar->addAction(actionShopinfo);
        toolBar->addSeparator();
        toolBar->addAction(actionCommodity);
        toolBar->addSeparator();
        toolBar->addAction(actionForminfo);
        toolBar->addSeparator();
        toolBar->addAction(actionTalk);
        toolBar->addSeparator();
        toolBar->addAction(actionMydata);
        toolBar->addSeparator();
        toolBar->addAction(actionUpdatepswd);

        retranslateUi(MerchantUI);

        QMetaObject::connectSlotsByName(MerchantUI);
    } // setupUi

    void retranslateUi(QMainWindow *MerchantUI)
    {
        MerchantUI->setWindowTitle(QApplication::translate("MerchantUI", "MainWindow", Q_NULLPTR));
        actionFirst->setText(QApplication::translate("MerchantUI", "first", Q_NULLPTR));
        actionMydata->setText(QApplication::translate("MerchantUI", "mydata", Q_NULLPTR));
        actionShopinfo->setText(QApplication::translate("MerchantUI", "shopinfo", Q_NULLPTR));
        actionCommodity->setText(QApplication::translate("MerchantUI", "commodity", Q_NULLPTR));
        actionForminfo->setText(QApplication::translate("MerchantUI", "forminfo", Q_NULLPTR));
        actionUpdatepswd->setText(QApplication::translate("MerchantUI", "updatepswd", Q_NULLPTR));
        actionTalk->setText(QApplication::translate("MerchantUI", "talk", Q_NULLPTR));
        lb_head->setText(QString());
        pb_client->setText(QString());
        pb_first->setText(QApplication::translate("MerchantUI", "\347\224\250\346\210\267\351\246\226\351\241\265", Q_NULLPTR));
        pb_mydata->setText(QApplication::translate("MerchantUI", "\346\210\221\347\232\204\350\265\204\346\226\231", Q_NULLPTR));
        pb_commodity->setText(QApplication::translate("MerchantUI", "\345\225\206\345\223\201\347\256\241\347\220\206", Q_NULLPTR));
        pb_shop->setText(QApplication::translate("MerchantUI", "\345\225\206\345\272\227\347\256\241\347\220\206", Q_NULLPTR));
        pb_form->setText(QApplication::translate("MerchantUI", "\350\256\242\345\215\225\347\256\241\347\220\206", Q_NULLPTR));
        pb_pswd->setText(QApplication::translate("MerchantUI", "\344\277\256\346\224\271\345\257\206\347\240\201", Q_NULLPTR));
        label_2->setText(QApplication::translate("MerchantUI", "\346\240\241\345\233\255\345\277\253\350\267\221\345\244\226\345\215\226\350\256\242\351\244\220\347\263\273\347\273\237\357\274\210\345\225\206\345\256\266\347\253\257\357\274\211", Q_NULLPTR));
        label->setText(QApplication::translate("MerchantUI", "\345\275\223\345\211\215\346\227\266\351\227\264:", Q_NULLPTR));
        lb_time->setText(QApplication::translate("MerchantUI", "TextLabel", Q_NULLPTR));
        label_3->setText(QString());
        pb_go->setText(QApplication::translate("MerchantUI", "\351\200\200\345\207\272", Q_NULLPTR));
        pb_f->setText(QApplication::translate("MerchantUI", "\351\246\226\351\241\265", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("MerchantUI", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MerchantUI: public Ui_MerchantUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MERCHANTUI_H
