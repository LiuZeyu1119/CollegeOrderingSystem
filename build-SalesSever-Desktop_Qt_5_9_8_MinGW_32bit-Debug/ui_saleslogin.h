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
    QLabel *label_4;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QLineEdit *le_pswd;
    QLabel *label_3;
    QPushButton *pb_register;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *le_id;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pb_login;
    QPushButton *pb_forget;

    void setupUi(QWidget *SalesLogin)
    {
        if (SalesLogin->objectName().isEmpty())
            SalesLogin->setObjectName(QStringLiteral("SalesLogin"));
        SalesLogin->resize(557, 433);
        SalesLogin->setStyleSheet(QLatin1String("\n"
"QWidget#SalesLogin{\n"
"	\n"
"	background-image: url(:/image/back.jpg);\n"
"}"));
        label_4 = new QLabel(SalesLogin);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(-10, 40, 551, 60));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\347\273\206\351\273\221"));
        font.setPointSize(22);
        font.setBold(true);
        font.setWeight(75);
        label_4->setFont(font);
        label_4->setContextMenuPolicy(Qt::DefaultContextMenu);
        label_4->setLayoutDirection(Qt::LeftToRight);
        label_4->setAlignment(Qt::AlignCenter);
        groupBox = new QGroupBox(SalesLogin);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(70, 120, 407, 291));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\215\216\346\226\207\347\273\206\351\273\221"));
        font1.setPointSize(26);
        font1.setBold(true);
        font1.setWeight(75);
        groupBox->setFont(font1);
        groupBox->setStyleSheet(QStringLiteral(""));
        groupBox->setAlignment(Qt::AlignCenter);
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer = new QSpacerItem(10, 0, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 1, 2, 1, 1);

        le_pswd = new QLineEdit(groupBox);
        le_pswd->setObjectName(QStringLiteral("le_pswd"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font2.setPointSize(14);
        font2.setBold(false);
        font2.setWeight(50);
        le_pswd->setFont(font2);
        le_pswd->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(le_pswd, 2, 2, 1, 2);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font3.setPointSize(12);
        label_3->setFont(font3);

        gridLayout->addWidget(label_3, 2, 1, 1, 1);

        pb_register = new QPushButton(groupBox);
        pb_register->setObjectName(QStringLiteral("pb_register"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font4.setPointSize(12);
        pb_register->setFont(font4);

        gridLayout->addWidget(pb_register, 5, 1, 1, 3);

        horizontalSpacer = new QSpacerItem(10, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font3);

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(10, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 4, 1, 1);

        le_id = new QLineEdit(groupBox);
        le_id->setObjectName(QStringLiteral("le_id"));
        le_id->setFont(font2);

        gridLayout->addWidget(le_id, 0, 2, 1, 2);

        horizontalSpacer_3 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 5, 4, 1, 1);

        pb_login = new QPushButton(groupBox);
        pb_login->setObjectName(QStringLiteral("pb_login"));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font5.setPointSize(24);
        pb_login->setFont(font5);
        pb_login->setContextMenuPolicy(Qt::ActionsContextMenu);
        pb_login->setStyleSheet(QLatin1String("QPushButton#pb_login{\n"
"    background-color: rgb(255, 85, 0);\n"
"    border-style: outset;\n"
"    border-width: 4px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    min-width: 10em;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton#pb_login:pressed {\n"
"    background-color: rgb(237, 255, 245);\n"
"    border-style: inset;\n"
"}"));

        gridLayout->addWidget(pb_login, 3, 1, 1, 3);

        pb_forget = new QPushButton(groupBox);
        pb_forget->setObjectName(QStringLiteral("pb_forget"));
        pb_forget->setFont(font4);

        gridLayout->addWidget(pb_forget, 4, 1, 1, 3);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(SalesLogin);

        QMetaObject::connectSlotsByName(SalesLogin);
    } // setupUi

    void retranslateUi(QWidget *SalesLogin)
    {
        SalesLogin->setWindowTitle(QApplication::translate("SalesLogin", "SalesLogin", Q_NULLPTR));
        label_4->setText(QApplication::translate("SalesLogin", "\345\277\253\350\267\221\346\240\241\345\233\255\350\256\242\351\244\220\347\263\273\347\273\237\346\234\215\345\212\241\345\231\250", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("SalesLogin", "\347\256\241\347\220\206\345\221\230\347\231\273\345\275\225", Q_NULLPTR));
        le_pswd->setText(QApplication::translate("SalesLogin", "admin", Q_NULLPTR));
        label_3->setText(QApplication::translate("SalesLogin", "\345\257\206\347\240\201:", Q_NULLPTR));
        pb_register->setText(QApplication::translate("SalesLogin", "\346\263\250\345\206\214\350\264\246\345\217\267", Q_NULLPTR));
        label_2->setText(QApplication::translate("SalesLogin", "\347\224\250\346\210\267\345\220\215:", Q_NULLPTR));
        le_id->setText(QApplication::translate("SalesLogin", "admin", Q_NULLPTR));
        pb_login->setText(QApplication::translate("SalesLogin", "\347\231\273\345\275\225", Q_NULLPTR));
        pb_forget->setText(QApplication::translate("SalesLogin", "\345\277\230\350\256\260\345\257\206\347\240\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SalesLogin: public Ui_SalesLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALESLOGIN_H
