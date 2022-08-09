/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *first;
    QAction *user;
    QAction *client;
    QAction *merchant;
    QAction *shop;
    QAction *commodity;
    QAction *actionPswdMS;
    QAction *actionSortMS;
    QAction *actionPhotoMS;
    QAction *actionFormMS;
    QAction *actionShopcartMS;
    QAction *actionDialogMS;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_8;
    QLabel *lb_time_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLabel *lb_clientnum;
    QLabel *label_9;
    QLabel *lb_merchantnum;
    QHBoxLayout *horizontalLayout;
    QPushButton *pb_remove;
    QPushButton *pb_back;
    QPushButton *pb_quit;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QPushButton *pb_com_3;
    QPushButton *pb_cart_3;
    QPushButton *pb_shop_3;
    QPushButton *pb_cli_3;
    QPushButton *pb_user_3;
    QPushButton *pb_pswd_3;
    QPushButton *pb_mer_3;
    QPushButton *pb_form_3;
    QPushButton *pb_dia_3;
    QMenuBar *menuBar;
    QMenu *sales_info;
    QStatusBar *statusBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1160, 701);
        MainWindow->setStyleSheet(QLatin1String("\n"
"QWidget#MainWindow{\n"
"	background-image: url(:/image/main.jpg)\n"
"}"));
        first = new QAction(MainWindow);
        first->setObjectName(QStringLiteral("first"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/ico/first.png"), QSize(), QIcon::Normal, QIcon::Off);
        first->setIcon(icon);
        user = new QAction(MainWindow);
        user->setObjectName(QStringLiteral("user"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/ico/user.png"), QSize(), QIcon::Normal, QIcon::Off);
        user->setIcon(icon1);
        client = new QAction(MainWindow);
        client->setObjectName(QStringLiteral("client"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/ico/guke.png"), QSize(), QIcon::Normal, QIcon::Off);
        client->setIcon(icon2);
        merchant = new QAction(MainWindow);
        merchant->setObjectName(QStringLiteral("merchant"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/ico/shangjia.png"), QSize(), QIcon::Normal, QIcon::Off);
        merchant->setIcon(icon3);
        shop = new QAction(MainWindow);
        shop->setObjectName(QStringLiteral("shop"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/ico/shop.png"), QSize(), QIcon::Normal, QIcon::Off);
        shop->setIcon(icon4);
        commodity = new QAction(MainWindow);
        commodity->setObjectName(QStringLiteral("commodity"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/ico/shoe.png"), QSize(), QIcon::Normal, QIcon::Off);
        commodity->setIcon(icon5);
        actionPswdMS = new QAction(MainWindow);
        actionPswdMS->setObjectName(QStringLiteral("actionPswdMS"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/ico/mima.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPswdMS->setIcon(icon6);
        actionSortMS = new QAction(MainWindow);
        actionSortMS->setObjectName(QStringLiteral("actionSortMS"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/ico/sort.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSortMS->setIcon(icon7);
        actionPhotoMS = new QAction(MainWindow);
        actionPhotoMS->setObjectName(QStringLiteral("actionPhotoMS"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/ico/photo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPhotoMS->setIcon(icon8);
        actionFormMS = new QAction(MainWindow);
        actionFormMS->setObjectName(QStringLiteral("actionFormMS"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/ico/form.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFormMS->setIcon(icon9);
        actionShopcartMS = new QAction(MainWindow);
        actionShopcartMS->setObjectName(QStringLiteral("actionShopcartMS"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/ico/cart.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionShopcartMS->setIcon(icon10);
        actionDialogMS = new QAction(MainWindow);
        actionDialogMS->setObjectName(QStringLiteral("actionDialogMS"));
        actionDialogMS->setEnabled(false);
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/ico/diaglo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDialogMS->setIcon(icon11);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(7);
        font.setBold(false);
        font.setWeight(50);
        groupBox->setFont(font);
        groupBox->setLayoutDirection(Qt::LeftToRight);
        gridLayout_4 = new QGridLayout(groupBox);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        label_8->setFont(font1);

        horizontalLayout_3->addWidget(label_8);

        lb_time_3 = new QLabel(groupBox);
        lb_time_3->setObjectName(QStringLiteral("lb_time_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lb_time_3->sizePolicy().hasHeightForWidth());
        lb_time_3->setSizePolicy(sizePolicy1);
        lb_time_3->setFont(font1);

        horizontalLayout_3->addWidget(lb_time_3);


        verticalLayout_2->addLayout(horizontalLayout_3);


        gridLayout_4->addLayout(verticalLayout_2, 0, 1, 1, 2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font1);

        horizontalLayout_4->addWidget(label_5);

        lb_clientnum = new QLabel(groupBox);
        lb_clientnum->setObjectName(QStringLiteral("lb_clientnum"));
        sizePolicy1.setHeightForWidth(lb_clientnum->sizePolicy().hasHeightForWidth());
        lb_clientnum->setSizePolicy(sizePolicy1);
        lb_clientnum->setFont(font1);

        horizontalLayout_4->addWidget(lb_clientnum);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy2);
        label_9->setFont(font1);

        horizontalLayout_4->addWidget(label_9);

        lb_merchantnum = new QLabel(groupBox);
        lb_merchantnum->setObjectName(QStringLiteral("lb_merchantnum"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lb_merchantnum->sizePolicy().hasHeightForWidth());
        lb_merchantnum->setSizePolicy(sizePolicy3);
        lb_merchantnum->setFont(font1);

        horizontalLayout_4->addWidget(lb_merchantnum);


        gridLayout_4->addLayout(horizontalLayout_4, 0, 3, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pb_remove = new QPushButton(groupBox);
        pb_remove->setObjectName(QStringLiteral("pb_remove"));
        pb_remove->setFont(font1);
        pb_remove->setStyleSheet(QLatin1String("QPushButton{\n"
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

        horizontalLayout->addWidget(pb_remove);

        pb_back = new QPushButton(groupBox);
        pb_back->setObjectName(QStringLiteral("pb_back"));
        pb_back->setFont(font1);
        pb_back->setStyleSheet(QLatin1String("QPushButton{\n"
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

        horizontalLayout->addWidget(pb_back);

        pb_quit = new QPushButton(groupBox);
        pb_quit->setObjectName(QStringLiteral("pb_quit"));
        pb_quit->setFont(font1);
        pb_quit->setStyleSheet(QLatin1String("QPushButton{\n"
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

        horizontalLayout->addWidget(pb_quit);


        gridLayout_4->addLayout(horizontalLayout, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox, 3, 0, 1, 1);

        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(0, 0));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        groupBox_2 = new QGroupBox(widget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setEnabled(true);
        groupBox_2->setMaximumSize(QSize(900, 900));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(12);
        groupBox_2->setFont(font2);
        groupBox_2->setFlat(false);
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        pb_com_3 = new QPushButton(groupBox_2);
        pb_com_3->setObjectName(QStringLiteral("pb_com_3"));
        sizePolicy1.setHeightForWidth(pb_com_3->sizePolicy().hasHeightForWidth());
        pb_com_3->setSizePolicy(sizePolicy1);
        QFont font3;
        font3.setPointSize(18);
        pb_com_3->setFont(font3);
        pb_com_3->setStyleSheet(QLatin1String("QPushButton{\n"
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

        gridLayout_3->addWidget(pb_com_3, 4, 1, 1, 1);

        pb_cart_3 = new QPushButton(groupBox_2);
        pb_cart_3->setObjectName(QStringLiteral("pb_cart_3"));
        sizePolicy1.setHeightForWidth(pb_cart_3->sizePolicy().hasHeightForWidth());
        pb_cart_3->setSizePolicy(sizePolicy1);
        pb_cart_3->setFont(font3);
        pb_cart_3->setStyleSheet(QLatin1String("QPushButton{\n"
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

        gridLayout_3->addWidget(pb_cart_3, 10, 1, 1, 1);

        pb_shop_3 = new QPushButton(groupBox_2);
        pb_shop_3->setObjectName(QStringLiteral("pb_shop_3"));
        sizePolicy1.setHeightForWidth(pb_shop_3->sizePolicy().hasHeightForWidth());
        pb_shop_3->setSizePolicy(sizePolicy1);
        pb_shop_3->setFont(font3);
        pb_shop_3->setStyleSheet(QLatin1String("QPushButton{\n"
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

        gridLayout_3->addWidget(pb_shop_3, 5, 1, 1, 1);

        pb_cli_3 = new QPushButton(groupBox_2);
        pb_cli_3->setObjectName(QStringLiteral("pb_cli_3"));
        sizePolicy1.setHeightForWidth(pb_cli_3->sizePolicy().hasHeightForWidth());
        pb_cli_3->setSizePolicy(sizePolicy1);
        pb_cli_3->setFont(font3);
        pb_cli_3->setStyleSheet(QLatin1String("QPushButton{\n"
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

        gridLayout_3->addWidget(pb_cli_3, 2, 0, 1, 3);

        pb_user_3 = new QPushButton(groupBox_2);
        pb_user_3->setObjectName(QStringLiteral("pb_user_3"));
        pb_user_3->setEnabled(true);
        sizePolicy1.setHeightForWidth(pb_user_3->sizePolicy().hasHeightForWidth());
        pb_user_3->setSizePolicy(sizePolicy1);
        pb_user_3->setFont(font3);
        pb_user_3->setStyleSheet(QLatin1String("QPushButton{\n"
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

        gridLayout_3->addWidget(pb_user_3, 1, 0, 1, 3);

        pb_pswd_3 = new QPushButton(groupBox_2);
        pb_pswd_3->setObjectName(QStringLiteral("pb_pswd_3"));
        sizePolicy1.setHeightForWidth(pb_pswd_3->sizePolicy().hasHeightForWidth());
        pb_pswd_3->setSizePolicy(sizePolicy1);
        pb_pswd_3->setFont(font3);
        pb_pswd_3->setStyleSheet(QLatin1String("QPushButton{\n"
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

        gridLayout_3->addWidget(pb_pswd_3, 6, 1, 1, 1);

        pb_mer_3 = new QPushButton(groupBox_2);
        pb_mer_3->setObjectName(QStringLiteral("pb_mer_3"));
        sizePolicy1.setHeightForWidth(pb_mer_3->sizePolicy().hasHeightForWidth());
        pb_mer_3->setSizePolicy(sizePolicy1);
        pb_mer_3->setFont(font3);
        pb_mer_3->setStyleSheet(QLatin1String("QPushButton{\n"
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

        gridLayout_3->addWidget(pb_mer_3, 3, 0, 1, 3);

        pb_form_3 = new QPushButton(groupBox_2);
        pb_form_3->setObjectName(QStringLiteral("pb_form_3"));
        sizePolicy1.setHeightForWidth(pb_form_3->sizePolicy().hasHeightForWidth());
        pb_form_3->setSizePolicy(sizePolicy1);
        pb_form_3->setFont(font3);
        pb_form_3->setStyleSheet(QLatin1String("QPushButton{\n"
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

        gridLayout_3->addWidget(pb_form_3, 7, 1, 1, 1);


        gridLayout_2->addWidget(groupBox_2, 0, 0, 1, 1);


        gridLayout->addWidget(widget, 2, 0, 1, 1);

        pb_dia_3 = new QPushButton(centralWidget);
        pb_dia_3->setObjectName(QStringLiteral("pb_dia_3"));
        sizePolicy1.setHeightForWidth(pb_dia_3->sizePolicy().hasHeightForWidth());
        pb_dia_3->setSizePolicy(sizePolicy1);
        pb_dia_3->setMinimumSize(QSize(91, 0));
        pb_dia_3->setMaximumSize(QSize(1, 1));
        pb_dia_3->setFont(font3);
        pb_dia_3->setStyleSheet(QLatin1String("QPushButton{\n"
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

        gridLayout->addWidget(pb_dia_3, 4, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1160, 26));
        sales_info = new QMenu(menuBar);
        sales_info->setObjectName(QStringLiteral("sales_info"));
        sales_info->setTearOffEnabled(false);
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setEnabled(true);
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        mainToolBar->setFont(font4);
        mainToolBar->setContextMenuPolicy(Qt::PreventContextMenu);
        mainToolBar->setLayoutDirection(Qt::LeftToRight);
        mainToolBar->setMovable(false);
        mainToolBar->setOrientation(Qt::Vertical);
        mainToolBar->setIconSize(QSize(90, 90));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        MainWindow->addToolBar(Qt::LeftToolBarArea, mainToolBar);

        menuBar->addAction(sales_info->menuAction());
        mainToolBar->addAction(first);
        mainToolBar->addAction(user);
        mainToolBar->addAction(client);
        mainToolBar->addAction(merchant);
        mainToolBar->addAction(shop);
        mainToolBar->addAction(commodity);
        mainToolBar->addAction(actionSortMS);
        mainToolBar->addAction(actionPhotoMS);
        mainToolBar->addAction(actionFormMS);
        mainToolBar->addAction(actionShopcartMS);
        mainToolBar->addAction(actionPswdMS);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        first->setText(QApplication::translate("MainWindow", "FirstMS", Q_NULLPTR));
        user->setText(QApplication::translate("MainWindow", "UserMS", Q_NULLPTR));
        client->setText(QApplication::translate("MainWindow", "ClientMS", Q_NULLPTR));
        merchant->setText(QApplication::translate("MainWindow", "MerchantMS", Q_NULLPTR));
        shop->setText(QApplication::translate("MainWindow", "ShopMS", Q_NULLPTR));
        commodity->setText(QApplication::translate("MainWindow", "CommidityMS", Q_NULLPTR));
        actionPswdMS->setText(QApplication::translate("MainWindow", "PswdMS", Q_NULLPTR));
        actionSortMS->setText(QApplication::translate("MainWindow", "SortMS", Q_NULLPTR));
        actionPhotoMS->setText(QApplication::translate("MainWindow", "PhotoMS", Q_NULLPTR));
        actionFormMS->setText(QApplication::translate("MainWindow", "FormMS", Q_NULLPTR));
        actionShopcartMS->setText(QApplication::translate("MainWindow", "ShopcartMS", Q_NULLPTR));
        actionDialogMS->setText(QApplication::translate("MainWindow", "DialogMS", Q_NULLPTR));
        groupBox->setTitle(QString());
        label_8->setText(QApplication::translate("MainWindow", "\345\275\223\345\211\215\347\263\273\347\273\237\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        lb_time_3->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "\351\241\276\345\256\242\345\234\250\347\272\277\344\272\272\346\225\260\357\274\232", Q_NULLPTR));
        lb_clientnum->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "\345\225\206\345\256\266\345\234\250\347\272\277\344\272\272\346\225\260\357\274\232", Q_NULLPTR));
        lb_merchantnum->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        pb_remove->setText(QApplication::translate("MainWindow", "\346\263\250\351\224\200", Q_NULLPTR));
        pb_back->setText(QApplication::translate("MainWindow", "\351\246\226\351\241\265", Q_NULLPTR));
        pb_quit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
        groupBox_2->setTitle(QString());
        pb_com_3->setText(QApplication::translate("MainWindow", "\345\225\206\345\223\201\347\256\241\347\220\206", Q_NULLPTR));
        pb_cart_3->setText(QApplication::translate("MainWindow", "\350\264\255\347\211\251\350\275\246", Q_NULLPTR));
        pb_shop_3->setText(QApplication::translate("MainWindow", "\345\272\227\351\223\272\347\256\241\347\220\206", Q_NULLPTR));
        pb_cli_3->setText(QApplication::translate("MainWindow", "\351\241\276\345\256\242\347\256\241\347\220\206", Q_NULLPTR));
        pb_user_3->setText(QApplication::translate("MainWindow", "\347\224\250\346\210\267\347\256\241\347\220\206", Q_NULLPTR));
        pb_pswd_3->setText(QApplication::translate("MainWindow", "\344\277\256\346\224\271\345\257\206\347\240\201", Q_NULLPTR));
        pb_mer_3->setText(QApplication::translate("MainWindow", "\345\225\206\345\256\266\347\256\241\347\220\206", Q_NULLPTR));
        pb_form_3->setText(QApplication::translate("MainWindow", "\350\256\242\345\215\225\347\256\241\347\220\206", Q_NULLPTR));
        pb_dia_3->setText(QString());
        sales_info->setTitle(QApplication::translate("MainWindow", "sales_info", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
