/********************************************************************************
** Form generated from reading UI file 'creatuser.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATUSER_H
#define UI_CREATUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreatUser
{
public:
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *le_user;
    QLabel *label_3;
    QLineEdit *le_pswd;
    QLineEdit *le_type;
    QPushButton *pb_ok;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *CreatUser)
    {
        if (CreatUser->objectName().isEmpty())
            CreatUser->setObjectName(QStringLiteral("CreatUser"));
        CreatUser->resize(1000, 600);
        CreatUser->setStyleSheet(QLatin1String("QWidget#CreatUser{\n"
"	background-image: url(:/image/main.jpg);\n"
"}\n"
""));
        widget = new QWidget(CreatUser);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(270, 130, 441, 301));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 4, 0, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        le_user = new QLineEdit(widget);
        le_user->setObjectName(QStringLiteral("le_user"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(le_user->sizePolicy().hasHeightForWidth());
        le_user->setSizePolicy(sizePolicy);
        le_user->setFont(font);
        le_user->setStyleSheet(QLatin1String("QLineEdit{\n"
"    border-style: outset;\n"
"    border-width: 1px;\n"
"    border-radius: 5px;\n"
"\n"
"    min-width: 5em;\n"
"    padding: 6px;\n"
"}"));

        gridLayout->addWidget(le_user, 0, 1, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        le_pswd = new QLineEdit(widget);
        le_pswd->setObjectName(QStringLiteral("le_pswd"));
        sizePolicy.setHeightForWidth(le_pswd->sizePolicy().hasHeightForWidth());
        le_pswd->setSizePolicy(sizePolicy);
        le_pswd->setFont(font);
        le_pswd->setStyleSheet(QLatin1String("QLineEdit{\n"
"    border-style: outset;\n"
"    border-width: 1px;\n"
"    border-radius: 5px;\n"
"\n"
"    min-width: 5em;\n"
"    padding: 6px;\n"
"}"));

        gridLayout->addWidget(le_pswd, 2, 1, 1, 1);

        le_type = new QLineEdit(widget);
        le_type->setObjectName(QStringLiteral("le_type"));
        sizePolicy.setHeightForWidth(le_type->sizePolicy().hasHeightForWidth());
        le_type->setSizePolicy(sizePolicy);
        le_type->setFont(font);
        le_type->setStyleSheet(QLatin1String("QLineEdit{\n"
"    border-style: outset;\n"
"    border-width: 1px;\n"
"    border-radius: 5px;\n"
"\n"
"    min-width: 5em;\n"
"    padding: 6px;\n"
"}"));

        gridLayout->addWidget(le_type, 4, 1, 1, 1);

        pb_ok = new QPushButton(widget);
        pb_ok->setObjectName(QStringLiteral("pb_ok"));
        sizePolicy.setHeightForWidth(pb_ok->sizePolicy().hasHeightForWidth());
        pb_ok->setSizePolicy(sizePolicy);
        pb_ok->setFont(font);
        pb_ok->setStyleSheet(QLatin1String("QPushButton{\n"
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

        gridLayout->addWidget(pb_ok, 6, 0, 1, 2);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 3, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 1, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_3, 5, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(CreatUser);

        QMetaObject::connectSlotsByName(CreatUser);
    } // setupUi

    void retranslateUi(QWidget *CreatUser)
    {
        CreatUser->setWindowTitle(QApplication::translate("CreatUser", "Form", Q_NULLPTR));
        label_2->setText(QApplication::translate("CreatUser", "\347\224\250\346\210\267\350\272\253\344\273\275:", Q_NULLPTR));
        label->setText(QApplication::translate("CreatUser", "\347\224\250\346\210\267\345\220\215:", Q_NULLPTR));
        le_user->setText(QString());
        label_3->setText(QApplication::translate("CreatUser", "\350\276\223\345\205\245\345\257\206\347\240\201:", Q_NULLPTR));
        pb_ok->setText(QApplication::translate("CreatUser", "\347\241\256\350\256\244\346\263\250\345\206\214", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CreatUser: public Ui_CreatUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATUSER_H
