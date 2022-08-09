/********************************************************************************
** Form generated from reading UI file 'clishopdata.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLISHOPDATA_H
#define UI_CLISHOPDATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CliShopData
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *comboBox;
    QLineEdit *le_select;
    QPushButton *pb_select;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QTableWidget *tableWidget;
    QLabel *lb_head;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_5;
    QLabel *label_3;
    QLabel *lb_name;
    QLabel *label_5;
    QLabel *lb_time;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *lb_phone;
    QLabel *lb_site;

    void setupUi(QWidget *CliShopData)
    {
        if (CliShopData->objectName().isEmpty())
            CliShopData->setObjectName(QStringLiteral("CliShopData"));
        CliShopData->resize(907, 470);
        CliShopData->setStyleSheet(QLatin1String("QWidget#CliShopData{\n"
"	\n"
"	background-image: url(:/image/sback.jpg);\n"
"}"));
        layoutWidget = new QWidget(CliShopData);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 10, 581, 451));
        gridLayout_4 = new QGridLayout(layoutWidget);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        groupBox->setFont(font);
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        label->setFont(font1);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy1);
        comboBox->setFont(font1);
        comboBox->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(comboBox, 0, 1, 1, 1);

        le_select = new QLineEdit(groupBox);
        le_select->setObjectName(QStringLiteral("le_select"));
        le_select->setEnabled(false);
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(le_select->sizePolicy().hasHeightForWidth());
        le_select->setSizePolicy(sizePolicy2);
        le_select->setStyleSheet(QLatin1String("QLineEdit{\n"
"    border-style: outset;\n"
"    border-width: 1px;\n"
"    border-radius: 5px;\n"
"\n"
"    min-width: 5em;\n"
"    padding: 6px;\n"
"}"));

        gridLayout->addWidget(le_select, 0, 2, 1, 1);

        pb_select = new QPushButton(groupBox);
        pb_select->setObjectName(QStringLiteral("pb_select"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pb_select->sizePolicy().hasHeightForWidth());
        pb_select->setSizePolicy(sizePolicy3);
        pb_select->setFont(font1);
        pb_select->setStyleSheet(QLatin1String("QPushButton{\n"
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

        gridLayout->addWidget(pb_select, 0, 3, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        gridLayout_4->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(layoutWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setFont(font);
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        tableWidget = new QTableWidget(groupBox_2);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        gridLayout_3->addWidget(tableWidget, 0, 0, 1, 1);


        gridLayout_4->addWidget(groupBox_2, 1, 0, 1, 1);

        lb_head = new QLabel(CliShopData);
        lb_head->setObjectName(QStringLiteral("lb_head"));
        lb_head->setGeometry(QRect(600, 40, 204, 72));
        lb_head->setLayoutDirection(Qt::LeftToRight);
        lb_head->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 255);"));
        layoutWidget1 = new QWidget(CliShopData);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(590, 130, 301, 251));
        gridLayout_5 = new QGridLayout(layoutWidget1);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        gridLayout_5->addWidget(label_3, 2, 0, 1, 1);

        lb_name = new QLabel(layoutWidget1);
        lb_name->setObjectName(QStringLiteral("lb_name"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(lb_name->sizePolicy().hasHeightForWidth());
        lb_name->setSizePolicy(sizePolicy4);
        lb_name->setFont(font);

        gridLayout_5->addWidget(lb_name, 0, 1, 1, 1);

        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);

        gridLayout_5->addWidget(label_5, 3, 0, 1, 1);

        lb_time = new QLabel(layoutWidget1);
        lb_time->setObjectName(QStringLiteral("lb_time"));
        lb_time->setFont(font);

        gridLayout_5->addWidget(lb_time, 2, 1, 1, 1);

        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        gridLayout_5->addWidget(label_4, 1, 0, 1, 1);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        gridLayout_5->addWidget(label_2, 0, 0, 1, 1);

        lb_phone = new QLabel(layoutWidget1);
        lb_phone->setObjectName(QStringLiteral("lb_phone"));
        lb_phone->setFont(font);

        gridLayout_5->addWidget(lb_phone, 1, 1, 1, 1);

        lb_site = new QLabel(layoutWidget1);
        lb_site->setObjectName(QStringLiteral("lb_site"));
        lb_site->setFont(font);

        gridLayout_5->addWidget(lb_site, 3, 1, 1, 1);


        retranslateUi(CliShopData);

        QMetaObject::connectSlotsByName(CliShopData);
    } // setupUi

    void retranslateUi(QWidget *CliShopData)
    {
        CliShopData->setWindowTitle(QApplication::translate("CliShopData", "Form", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("CliShopData", "\346\237\245\350\257\242\346\235\241\344\273\266", Q_NULLPTR));
        label->setText(QApplication::translate("CliShopData", "\346\237\245\350\257\242\346\235\241\344\273\266:", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("CliShopData", "\345\205\250\351\203\250\345\272\227\351\223\272", Q_NULLPTR)
         << QApplication::translate("CliShopData", "\345\272\227\351\223\272\345\220\215\347\247\260", Q_NULLPTR)
         << QApplication::translate("CliShopData", "\345\215\226\350\264\247\347\261\273\345\210\253", Q_NULLPTR)
        );
        pb_select->setText(QApplication::translate("CliShopData", "\346\220\234\347\264\242", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("CliShopData", "\346\237\245\350\257\242\347\273\223\346\236\234", Q_NULLPTR));
        lb_head->setText(QString());
        label_3->setText(QApplication::translate("CliShopData", "\346\263\250\345\206\214\346\227\266\351\227\264:", Q_NULLPTR));
        lb_name->setText(QString());
        label_5->setText(QApplication::translate("CliShopData", "\346\211\200\345\234\250\345\234\260:", Q_NULLPTR));
        lb_time->setText(QString());
        label_4->setText(QApplication::translate("CliShopData", "\350\201\224\347\263\273\347\224\265\350\257\235:", Q_NULLPTR));
        label_2->setText(QApplication::translate("CliShopData", "\345\225\206\345\256\266\345\220\215\347\247\260:", Q_NULLPTR));
        lb_phone->setText(QString());
        lb_site->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CliShopData: public Ui_CliShopData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLISHOPDATA_H
