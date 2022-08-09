/********************************************************************************
** Form generated from reading UI file 'insertuser.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSERTUSER_H
#define UI_INSERTUSER_H

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

class Ui_InsertUser
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QPushButton *pb_ok;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QLabel *label_3;
    QLineEdit *le_id;
    QLineEdit *le_pswd;
    QLabel *label_2;
    QLineEdit *le_type;
    QLabel *label;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *InsertUser)
    {
        if (InsertUser->objectName().isEmpty())
            InsertUser->setObjectName(QStringLiteral("InsertUser"));
        InsertUser->resize(1051, 591);
        layoutWidget = new QWidget(InsertUser);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(330, 110, 371, 291));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        pb_ok = new QPushButton(layoutWidget);
        pb_ok->setObjectName(QStringLiteral("pb_ok"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pb_ok->sizePolicy().hasHeightForWidth());
        pb_ok->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        pb_ok->setFont(font);
        pb_ok->setStyleSheet(QLatin1String("QPushButton#pb_ok{\n"
"	background-image: url(:/ico/pb1.jpg);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    min-width: 5em;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton#pb_ok:hover\n"
"{\n"
"	\n"
"	background-image: url(:/ico/pb.jpg);\n"
"    border-style: inset;\n"
"}\n"
"\n"
"QPushButton#pb_ok:clicked{\n"
"	\n"
"	background-image: url(:/ico/pb2.jpg);\n"
"    border-style: inset;\n"
"}\n"
"\n"
"\n"
""));

        gridLayout_2->addWidget(pb_ok, 2, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 1, 1, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        le_id = new QLineEdit(layoutWidget);
        le_id->setObjectName(QStringLiteral("le_id"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(le_id->sizePolicy().hasHeightForWidth());
        le_id->setSizePolicy(sizePolicy1);
        le_id->setFont(font);
        le_id->setStyleSheet(QLatin1String("QLineEdit{\n"
"    border-style: outset;\n"
"    border-width: 1px;\n"
"    border-radius: 5px;\n"
"\n"
"    min-width: 5em;\n"
"    padding: 6px;\n"
"}"));

        gridLayout->addWidget(le_id, 0, 1, 1, 1);

        le_pswd = new QLineEdit(layoutWidget);
        le_pswd->setObjectName(QStringLiteral("le_pswd"));
        sizePolicy1.setHeightForWidth(le_pswd->sizePolicy().hasHeightForWidth());
        le_pswd->setSizePolicy(sizePolicy1);
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

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 4, 0, 1, 1);

        le_type = new QLineEdit(layoutWidget);
        le_type->setObjectName(QStringLiteral("le_type"));
        sizePolicy1.setHeightForWidth(le_type->sizePolicy().hasHeightForWidth());
        le_type->setSizePolicy(sizePolicy1);
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

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 3, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(78, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_3, 1, 0, 1, 1);


        retranslateUi(InsertUser);

        QMetaObject::connectSlotsByName(InsertUser);
    } // setupUi

    void retranslateUi(QWidget *InsertUser)
    {
        InsertUser->setWindowTitle(QApplication::translate("InsertUser", "Form", Q_NULLPTR));
        pb_ok->setText(QApplication::translate("InsertUser", "\347\241\256\350\256\244", Q_NULLPTR));
        label_3->setText(QApplication::translate("InsertUser", "\350\276\223\345\205\245\345\257\206\347\240\201:", Q_NULLPTR));
        le_id->setText(QString());
        label_2->setText(QApplication::translate("InsertUser", "\347\224\250\346\210\267\350\272\253\344\273\275:", Q_NULLPTR));
        label->setText(QApplication::translate("InsertUser", "\347\224\250\346\210\267\345\220\215:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class InsertUser: public Ui_InsertUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSERTUSER_H
