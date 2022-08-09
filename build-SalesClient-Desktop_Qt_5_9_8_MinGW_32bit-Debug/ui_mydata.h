/********************************************************************************
** Form generated from reading UI file 'mydata.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYDATA_H
#define UI_MYDATA_H

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

class Ui_MyData
{
public:
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_4;
    QLabel *label;
    QLineEdit *le_time;
    QLineEdit *le_phone;
    QLineEdit *le_id;
    QLabel *label_2;
    QLineEdit *le_name;
    QLabel *label_5;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_3;
    QLineEdit *le_site;
    QSpacerItem *verticalSpacer_4;
    QLabel *lb_head;
    QPushButton *pushButton;

    void setupUi(QWidget *MyData)
    {
        if (MyData->objectName().isEmpty())
            MyData->setObjectName(QStringLiteral("MyData"));
        MyData->resize(1051, 591);
        groupBox = new QGroupBox(MyData);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(450, 80, 461, 381));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(14);
        groupBox->setFont(font);
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 1, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 5, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 6, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        le_time = new QLineEdit(groupBox);
        le_time->setObjectName(QStringLiteral("le_time"));
        le_time->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(le_time->sizePolicy().hasHeightForWidth());
        le_time->setSizePolicy(sizePolicy);
        le_time->setStyleSheet(QLatin1String("QLineEdit{\n"
"    border-style: outset;\n"
"    border-width: 1px;\n"
"    border-radius: 5px;\n"
"\n"
"    min-width: 5em;\n"
"    padding: 6px;\n"
"}"));

        gridLayout->addWidget(le_time, 6, 1, 1, 1);

        le_phone = new QLineEdit(groupBox);
        le_phone->setObjectName(QStringLiteral("le_phone"));
        le_phone->setEnabled(false);
        sizePolicy.setHeightForWidth(le_phone->sizePolicy().hasHeightForWidth());
        le_phone->setSizePolicy(sizePolicy);
        le_phone->setStyleSheet(QLatin1String("QLineEdit{\n"
"    border-style: outset;\n"
"    border-width: 1px;\n"
"    border-radius: 5px;\n"
"\n"
"    min-width: 5em;\n"
"    padding: 6px;\n"
"}"));

        gridLayout->addWidget(le_phone, 4, 1, 1, 1);

        le_id = new QLineEdit(groupBox);
        le_id->setObjectName(QStringLiteral("le_id"));
        le_id->setEnabled(false);
        sizePolicy.setHeightForWidth(le_id->sizePolicy().hasHeightForWidth());
        le_id->setSizePolicy(sizePolicy);
        le_id->setStyleSheet(QLatin1String("QLineEdit{\n"
"    border-style: outset;\n"
"    border-width: 1px;\n"
"    border-radius: 5px;\n"
"\n"
"    min-width: 5em;\n"
"    padding: 6px;\n"
"}"));

        gridLayout->addWidget(le_id, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        le_name = new QLineEdit(groupBox);
        le_name->setObjectName(QStringLiteral("le_name"));
        le_name->setEnabled(false);
        sizePolicy.setHeightForWidth(le_name->sizePolicy().hasHeightForWidth());
        le_name->setSizePolicy(sizePolicy);
        le_name->setStyleSheet(QLatin1String("QLineEdit{\n"
"    border-style: outset;\n"
"    border-width: 1px;\n"
"    border-radius: 5px;\n"
"\n"
"    min-width: 5em;\n"
"    padding: 6px;\n"
"}"));

        gridLayout->addWidget(le_name, 2, 1, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 8, 0, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_3, 3, 1, 1, 1);

        le_site = new QLineEdit(groupBox);
        le_site->setObjectName(QStringLiteral("le_site"));
        le_site->setEnabled(false);
        sizePolicy.setHeightForWidth(le_site->sizePolicy().hasHeightForWidth());
        le_site->setSizePolicy(sizePolicy);
        le_site->setStyleSheet(QLatin1String("QLineEdit{\n"
"    border-style: outset;\n"
"    border-width: 1px;\n"
"    border-radius: 5px;\n"
"\n"
"    min-width: 5em;\n"
"    padding: 6px;\n"
"}"));

        gridLayout->addWidget(le_site, 8, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_4, 7, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        lb_head = new QLabel(MyData);
        lb_head->setObjectName(QStringLiteral("lb_head"));
        lb_head->setGeometry(QRect(110, 220, 308, 108));
        lb_head->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 255);"));
        pushButton = new QPushButton(MyData);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(460, 460, 441, 61));
        pushButton->setFont(font);
        pushButton->setStyleSheet(QLatin1String("QPushButton{\n"
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

        retranslateUi(MyData);

        QMetaObject::connectSlotsByName(MyData);
    } // setupUi

    void retranslateUi(QWidget *MyData)
    {
        MyData->setWindowTitle(QApplication::translate("MyData", "Form", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MyData", "\344\270\252\344\272\272\344\277\241\346\201\257", Q_NULLPTR));
        label_4->setText(QApplication::translate("MyData", "\346\263\250\345\206\214\346\227\266\351\227\264:", Q_NULLPTR));
        label->setText(QApplication::translate("MyData", "\347\224\250\346\210\267\345\220\215:", Q_NULLPTR));
        label_2->setText(QApplication::translate("MyData", "\345\220\215\347\247\260:", Q_NULLPTR));
        label_5->setText(QApplication::translate("MyData", "\346\211\200\345\234\250\345\234\260:", Q_NULLPTR));
        label_3->setText(QApplication::translate("MyData", "\350\201\224\347\263\273\347\224\265\350\257\235:", Q_NULLPTR));
        lb_head->setText(QString());
        pushButton->setText(QApplication::translate("MyData", "\347\274\226\350\276\221\350\265\204\346\226\231", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MyData: public Ui_MyData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYDATA_H
