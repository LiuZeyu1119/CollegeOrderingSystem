/********************************************************************************
** Form generated from reading UI file 'clientui.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTUI_H
#define UI_CLIENTUI_H

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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientUI
{
public:
    QAction *actionFirst;
    QAction *actionMydata;
    QAction *actionUpdatepswd;
    QAction *actionMerchant;
    QAction *actionForm;
    QAction *actionShopcart;
    QAction *actionTalk;
    QWidget *centralwidget;
    QLabel *label_2;
    QWidget *widget_4;
    QWidget *widget;
    QPushButton *pb_clientmer;
    QFrame *line;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_3;
    QPushButton *pb_pswd;
    QSpacerItem *verticalSpacer;
    QPushButton *pb_shopcart;
    QPushButton *pb_form;
    QPushButton *pb_merchant;
    QPushButton *pb_first;
    QPushButton *pb_mydata;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QWidget *layoutWidget_4;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *lb_time;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QPushButton *pb_f;
    QPushButton *pb_go;
    QLabel *label_3;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *ClientUI)
    {
        if (ClientUI->objectName().isEmpty())
            ClientUI->setObjectName(QStringLiteral("ClientUI"));
        ClientUI->resize(1081, 764);
        ClientUI->setStyleSheet(QLatin1String("QMainWindow#ClientUI{	\n"
"	\n"
"	background-image: url(:/image/climain.jpg);\n"
"\n"
"}"));
        actionFirst = new QAction(ClientUI);
        actionFirst->setObjectName(QStringLiteral("actionFirst"));
        actionMydata = new QAction(ClientUI);
        actionMydata->setObjectName(QStringLiteral("actionMydata"));
        actionUpdatepswd = new QAction(ClientUI);
        actionUpdatepswd->setObjectName(QStringLiteral("actionUpdatepswd"));
        actionMerchant = new QAction(ClientUI);
        actionMerchant->setObjectName(QStringLiteral("actionMerchant"));
        actionForm = new QAction(ClientUI);
        actionForm->setObjectName(QStringLiteral("actionForm"));
        actionShopcart = new QAction(ClientUI);
        actionShopcart->setObjectName(QStringLiteral("actionShopcart"));
        actionTalk = new QAction(ClientUI);
        actionTalk->setObjectName(QStringLiteral("actionTalk"));
        centralwidget = new QWidget(ClientUI);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 10, 341, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font.setPointSize(22);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral("color:rgb(81, 81, 81);"));
        label_2->setInputMethodHints(Qt::ImhUppercaseOnly);
        widget_4 = new QWidget(centralwidget);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setGeometry(QRect(10, 60, 1061, 761));
        widget_4->setStyleSheet(QLatin1String("QWidget#widget_4{\n"
"	background-image: url(:/image/timg.jpg);\n"
"}"));
        widget = new QWidget(widget_4);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setEnabled(true);
        widget->setGeometry(QRect(10, 50, 1031, 571));
        widget->setStyleSheet(QLatin1String("QWidget#widget{\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
"	\n"
"	\n"
"}"));
        pb_clientmer = new QPushButton(widget);
        pb_clientmer->setObjectName(QStringLiteral("pb_clientmer"));
        pb_clientmer->setEnabled(false);
        pb_clientmer->setGeometry(QRect(940, 540, 76, 20));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pb_clientmer->sizePolicy().hasHeightForWidth());
        pb_clientmer->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(12);
        pb_clientmer->setFont(font1);
        pb_clientmer->setStyleSheet(QLatin1String("QPushButton#pb_clientmer{\n"
"	\n"
"	background-image: url(:/ico/pb1.jpg);\n"
"}\n"
"QPushButton#pb_clientmer{\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    min-width: 5em;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton#pb_clientmer:hover\n"
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
        line = new QFrame(widget_4);
        line->setObjectName(QStringLiteral("line"));
        line->setEnabled(true);
        line->setGeometry(QRect(0, 10, 1, 1));
        line->setMaximumSize(QSize(1, 1));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        layoutWidget_2 = new QWidget(widget_4);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 0, 1031, 57));
        gridLayout_3 = new QGridLayout(layoutWidget_2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        pb_pswd = new QPushButton(layoutWidget_2);
        pb_pswd->setObjectName(QStringLiteral("pb_pswd"));
        sizePolicy.setHeightForWidth(pb_pswd->sizePolicy().hasHeightForWidth());
        pb_pswd->setSizePolicy(sizePolicy);
        pb_pswd->setFont(font1);
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

        gridLayout_3->addWidget(pb_pswd, 3, 5, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 0, 3, 1, 1);

        pb_shopcart = new QPushButton(layoutWidget_2);
        pb_shopcart->setObjectName(QStringLiteral("pb_shopcart"));
        sizePolicy.setHeightForWidth(pb_shopcart->sizePolicy().hasHeightForWidth());
        pb_shopcart->setSizePolicy(sizePolicy);
        pb_shopcart->setFont(font1);
        pb_shopcart->setStyleSheet(QLatin1String("QPushButton#pb_shopcart{\n"
"	\n"
"	background-image: url(:/ico/pb1.jpg);\n"
"}\n"
"QPushButton#pb_shopcart{\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    min-width: 5em;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton#pb_shopcart:hover\n"
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

        gridLayout_3->addWidget(pb_shopcart, 3, 4, 1, 1);

        pb_form = new QPushButton(layoutWidget_2);
        pb_form->setObjectName(QStringLiteral("pb_form"));
        sizePolicy.setHeightForWidth(pb_form->sizePolicy().hasHeightForWidth());
        pb_form->setSizePolicy(sizePolicy);
        pb_form->setFont(font1);
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
"QPushButton#pb_commodity:pressed {\n"
"	\n"
"	background-image: url(:/ico/pb2.jpg);\n"
"    border-style: inset;\n"
"}\n"
"\n"
"\n"
""));

        gridLayout_3->addWidget(pb_form, 3, 3, 1, 1);

        pb_merchant = new QPushButton(layoutWidget_2);
        pb_merchant->setObjectName(QStringLiteral("pb_merchant"));
        sizePolicy.setHeightForWidth(pb_merchant->sizePolicy().hasHeightForWidth());
        pb_merchant->setSizePolicy(sizePolicy);
        pb_merchant->setFont(font1);
        pb_merchant->setStyleSheet(QLatin1String("QPushButton#pb_merchant{\n"
"	\n"
"	background-image: url(:/ico/pb1.jpg);\n"
"}\n"
"QPushButton#pb_merchant{\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    min-width: 5em;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton#pb_merchant:hover\n"
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

        gridLayout_3->addWidget(pb_merchant, 3, 2, 1, 1);

        pb_first = new QPushButton(layoutWidget_2);
        pb_first->setObjectName(QStringLiteral("pb_first"));
        sizePolicy.setHeightForWidth(pb_first->sizePolicy().hasHeightForWidth());
        pb_first->setSizePolicy(sizePolicy);
        pb_first->setFont(font1);
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

        gridLayout_3->addWidget(pb_first, 3, 0, 1, 1);

        pb_mydata = new QPushButton(layoutWidget_2);
        pb_mydata->setObjectName(QStringLiteral("pb_mydata"));
        sizePolicy.setHeightForWidth(pb_mydata->sizePolicy().hasHeightForWidth());
        pb_mydata->setSizePolicy(sizePolicy);
        pb_mydata->setFont(font1);
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

        gridLayout_3->addWidget(pb_mydata, 3, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 2, 3, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_3, 1, 3, 1, 1);

        layoutWidget_4 = new QWidget(widget_4);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(670, 630, 371, 51));
        gridLayout = new QGridLayout(layoutWidget_4);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget_4);
        label->setObjectName(QStringLiteral("label"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(9);
        label->setFont(font2);
        label->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lb_time = new QLabel(layoutWidget_4);
        lb_time->setObjectName(QStringLiteral("lb_time"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lb_time->sizePolicy().hasHeightForWidth());
        lb_time->setSizePolicy(sizePolicy1);
        lb_time->setFont(font2);
        lb_time->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(lb_time, 0, 1, 1, 1);

        layoutWidget = new QWidget(widget_4);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 630, 241, 41));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        pb_f = new QPushButton(layoutWidget);
        pb_f->setObjectName(QStringLiteral("pb_f"));
        sizePolicy.setHeightForWidth(pb_f->sizePolicy().hasHeightForWidth());
        pb_f->setSizePolicy(sizePolicy);
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        pb_f->setFont(font3);
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

        gridLayout_2->addWidget(pb_f, 0, 0, 1, 1);

        pb_go = new QPushButton(layoutWidget);
        pb_go->setObjectName(QStringLiteral("pb_go"));
        sizePolicy.setHeightForWidth(pb_go->sizePolicy().hasHeightForWidth());
        pb_go->setSizePolicy(sizePolicy);
        pb_go->setFont(font3);
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

        gridLayout_2->addWidget(pb_go, 0, 1, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 80, 71, 41));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\215\216\346\226\207\345\275\251\344\272\221"));
        font4.setPointSize(20);
        font4.setStrikeOut(true);
        label_3->setFont(font4);
        label_3->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        ClientUI->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(ClientUI);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        ClientUI->setStatusBar(statusbar);
        toolBar = new QToolBar(ClientUI);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        toolBar->setMaximumSize(QSize(1, 1));
        toolBar->setLayoutDirection(Qt::LeftToRight);
        toolBar->setMovable(false);
        ClientUI->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionFirst);
        toolBar->addAction(actionMerchant);
        toolBar->addAction(actionForm);
        toolBar->addAction(actionShopcart);
        toolBar->addAction(actionTalk);
        toolBar->addAction(actionMydata);
        toolBar->addAction(actionUpdatepswd);

        retranslateUi(ClientUI);

        QMetaObject::connectSlotsByName(ClientUI);
    } // setupUi

    void retranslateUi(QMainWindow *ClientUI)
    {
        ClientUI->setWindowTitle(QApplication::translate("ClientUI", "MainWindow", Q_NULLPTR));
        actionFirst->setText(QApplication::translate("ClientUI", "first", Q_NULLPTR));
        actionMydata->setText(QApplication::translate("ClientUI", "mydata", Q_NULLPTR));
        actionUpdatepswd->setText(QApplication::translate("ClientUI", "updatepswd", Q_NULLPTR));
        actionMerchant->setText(QApplication::translate("ClientUI", "merchant", Q_NULLPTR));
        actionForm->setText(QApplication::translate("ClientUI", "form", Q_NULLPTR));
        actionShopcart->setText(QApplication::translate("ClientUI", "shopcart", Q_NULLPTR));
        actionTalk->setText(QApplication::translate("ClientUI", "talk", Q_NULLPTR));
        label_2->setText(QApplication::translate("ClientUI", "\346\240\241\345\233\255\345\277\253\350\267\221\345\244\226\345\215\226\350\256\242\351\244\220\347\263\273\347\273\237", Q_NULLPTR));
        pb_clientmer->setText(QString());
        pb_pswd->setText(QApplication::translate("ClientUI", "\344\277\256\346\224\271\345\257\206\347\240\201", Q_NULLPTR));
        pb_shopcart->setText(QApplication::translate("ClientUI", "\350\264\255\347\211\251\345\260\217\350\275\246", Q_NULLPTR));
        pb_form->setText(QApplication::translate("ClientUI", "\350\256\242\345\215\225\347\256\241\347\220\206", Q_NULLPTR));
        pb_merchant->setText(QApplication::translate("ClientUI", "\345\225\206\345\256\266\347\256\241\347\220\206", Q_NULLPTR));
        pb_first->setText(QApplication::translate("ClientUI", "\347\224\250\346\210\267\351\246\226\351\241\265", Q_NULLPTR));
        pb_mydata->setText(QApplication::translate("ClientUI", "\346\210\221\347\232\204\350\265\204\346\226\231", Q_NULLPTR));
        label->setText(QString());
        lb_time->setText(QApplication::translate("ClientUI", "TextLabel", Q_NULLPTR));
        pb_f->setText(QApplication::translate("ClientUI", "\351\246\226\351\241\265", Q_NULLPTR));
        pb_go->setText(QApplication::translate("ClientUI", "\351\200\200\345\207\272", Q_NULLPTR));
        label_3->setText(QString());
        toolBar->setWindowTitle(QApplication::translate("ClientUI", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ClientUI: public Ui_ClientUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTUI_H
