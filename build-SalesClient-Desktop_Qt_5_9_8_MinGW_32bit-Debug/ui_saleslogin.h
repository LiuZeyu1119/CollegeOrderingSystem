/********************************************************************************
** Form generated from reading UI file 'saleslogin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SALESLOGIN_H
#define UI_SALESLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SalesLogin
{
public:
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_3;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QLabel *label_3;
    QLineEdit *le_pswd;
    QLabel *label_2;
    QPushButton *pb_forget;
    QLineEdit *le_id;
    QPushButton *pb_register;
    QPushButton *pb_login;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pb_login_2;

    void setupUi(QWidget *SalesLogin)
    {
        if (SalesLogin->objectName().isEmpty())
            SalesLogin->setObjectName(QStringLiteral("SalesLogin"));
        SalesLogin->resize(399, 315);
        SalesLogin->setStyleSheet(QLatin1String("QWidget#SalesLogin{\n"
"	\n"
"	background-image: url(:/image/back.jpg)\n"
"}"));
        groupBox = new QGroupBox(SalesLogin);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 20, 351, 271));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(26);
        font.setBold(true);
        font.setWeight(75);
        groupBox->setFont(font);
        groupBox->setStyleSheet(QLatin1String("QGroupBox#groupBox{\n"
"	background-color:;\n"
"	border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    min-width: 10em;\n"
"    padding: 6px;\n"
"}\n"
""));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 1, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font1.setPointSize(18);
        font1.setBold(false);
        font1.setWeight(50);
        label_4->setFont(font1);
        label_4->setContextMenuPolicy(Qt::DefaultContextMenu);
        label_4->setLayoutDirection(Qt::LeftToRight);
        label_4->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_4, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 2, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer_2 = new QSpacerItem(10, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 4, 1, 1);

        horizontalSpacer = new QSpacerItem(10, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(10, 0, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 2, 2, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(14);
        label_3->setFont(font2);

        gridLayout->addWidget(label_3, 3, 1, 1, 1);

        le_pswd = new QLineEdit(groupBox);
        le_pswd->setObjectName(QStringLiteral("le_pswd"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(le_pswd->sizePolicy().hasHeightForWidth());
        le_pswd->setSizePolicy(sizePolicy);
        QFont font3;
        font3.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font3.setPointSize(8);
        font3.setBold(false);
        font3.setWeight(50);
        le_pswd->setFont(font3);
        le_pswd->setStyleSheet(QLatin1String("QLineEdit#le_pswd\n"
"{\n"
"	background-color: rgba(255, 255, 255, 80);\n"
"}	\n"
""));
        le_pswd->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(le_pswd, 3, 2, 1, 2);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font2);

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        pb_forget = new QPushButton(groupBox);
        pb_forget->setObjectName(QStringLiteral("pb_forget"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font4.setPointSize(12);
        pb_forget->setFont(font4);
        pb_forget->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color:rgb(83, 86, 255);\n"
"	color: rgb(255, 255, 255);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    min-width: 10em;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(123, 123, 255);\n"
"	color: rgb(255, 255, 255);\n"
"    border-style: inset;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(0, 13, 197);\n"
"	color: rgb(255, 255, 255);\n"
"    border-style: inset;\n"
"}\n"
""));

        gridLayout->addWidget(pb_forget, 5, 3, 1, 1);

        le_id = new QLineEdit(groupBox);
        le_id->setObjectName(QStringLiteral("le_id"));
        sizePolicy.setHeightForWidth(le_id->sizePolicy().hasHeightForWidth());
        le_id->setSizePolicy(sizePolicy);
        QFont font5;
        font5.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font5.setPointSize(14);
        font5.setBold(false);
        font5.setWeight(50);
        le_id->setFont(font5);
        le_id->setStyleSheet(QLatin1String("QLineEdit#le_id\n"
"{\n"
"	background-color: rgba(255, 255, 255, 80);\n"
"}	\n"
""));

        gridLayout->addWidget(le_id, 0, 2, 1, 2);

        pb_register = new QPushButton(groupBox);
        pb_register->setObjectName(QStringLiteral("pb_register"));
        pb_register->setFont(font4);
        pb_register->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color:rgb(83, 86, 255);\n"
"	color: rgb(255, 255, 255);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    min-width: 10em;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(123, 123, 255);\n"
"	color: rgb(255, 255, 255);\n"
"    border-style: inset;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(0, 13, 197);\n"
"	color: rgb(255, 255, 255);\n"
"    border-style: inset;\n"
"}\n"
""));

        gridLayout->addWidget(pb_register, 5, 1, 1, 2);

        pb_login = new QPushButton(groupBox);
        pb_login->setObjectName(QStringLiteral("pb_login"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pb_login->sizePolicy().hasHeightForWidth());
        pb_login->setSizePolicy(sizePolicy1);
        QFont font6;
        font6.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font6.setPointSize(12);
        font6.setBold(false);
        font6.setItalic(false);
        font6.setWeight(50);
        pb_login->setFont(font6);
        pb_login->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color:rgb(84, 244, 97);\n"
"	color: rgb(255, 255, 255);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    min-width: 10em;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(123, 123, 255);\n"
"	color: rgb(255, 255, 255);\n"
"    border-style: inset;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(0, 13, 197);\n"
"	color: rgb(255, 255, 255);\n"
"    border-style: inset;\n"
"}\n"
""));

        gridLayout->addWidget(pb_login, 4, 1, 1, 3);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 1, 2, 1, 1);

        pb_login_2 = new QPushButton(groupBox);
        pb_login_2->setObjectName(QStringLiteral("pb_login_2"));
        sizePolicy1.setHeightForWidth(pb_login_2->sizePolicy().hasHeightForWidth());
        pb_login_2->setSizePolicy(sizePolicy1);
        pb_login_2->setFont(font6);
        pb_login_2->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color:rgb(255, 39, 42);\n"
"	color: rgb(255, 255, 255);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    min-width: 10em;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(123, 123, 255);\n"
"	color: rgb(255, 255, 255);\n"
"    border-style: inset;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(0, 13, 197);\n"
"	color: rgb(255, 255, 255);\n"
"    border-style: inset;\n"
"}\n"
""));

        gridLayout->addWidget(pb_login_2, 6, 1, 1, 3);


        gridLayout_2->addLayout(gridLayout, 2, 1, 1, 1);


        retranslateUi(SalesLogin);

        QMetaObject::connectSlotsByName(SalesLogin);
    } // setupUi

    void retranslateUi(QWidget *SalesLogin)
    {
        SalesLogin->setWindowTitle(QApplication::translate("SalesLogin", "SalesLogin", Q_NULLPTR));
        groupBox->setTitle(QString());
        label_4->setText(QApplication::translate("SalesLogin", "\346\240\241\345\233\255\345\277\253\350\267\221\345\244\226\345\215\226\350\256\242\351\244\220\347\263\273\347\273\237\345\256\242\346\210\267\347\253\257", Q_NULLPTR));
        label_3->setText(QApplication::translate("SalesLogin", "\345\257\206\347\240\201:", Q_NULLPTR));
        le_pswd->setText(QApplication::translate("SalesLogin", "123456", Q_NULLPTR));
        label_2->setText(QApplication::translate("SalesLogin", "\347\224\250\346\210\267\345\220\215:", Q_NULLPTR));
        pb_forget->setText(QApplication::translate("SalesLogin", "\345\277\230\350\256\260\345\257\206\347\240\201", Q_NULLPTR));
        le_id->setText(QApplication::translate("SalesLogin", "CLI1001", Q_NULLPTR));
        pb_register->setText(QApplication::translate("SalesLogin", "\346\263\250\345\206\214\350\264\246\345\217\267", Q_NULLPTR));
        pb_login->setText(QApplication::translate("SalesLogin", "\347\231\273\345\275\225", Q_NULLPTR));
        pb_login_2->setText(QApplication::translate("SalesLogin", "\351\200\200\345\207\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SalesLogin: public Ui_SalesLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALESLOGIN_H
