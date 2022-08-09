/********************************************************************************
** Form generated from reading UI file 'shopdata.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOPDATA_H
#define UI_SHOPDATA_H

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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShopData
{
public:
    QLabel *lb_head;
    QLabel *lb_name;
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
    QLabel *lb_name_2;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_6;
    QSpacerItem *verticalSpacer;
    QLineEdit *le_name;
    QLineEdit *le_type;
    QLabel *label_2;
    QLineEdit *le_id;
    QLabel *label_3;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_2;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_5;
    QPushButton *pb_save;
    QPushButton *pb_insert;
    QPushButton *pb_delete;

    void setupUi(QWidget *ShopData)
    {
        if (ShopData->objectName().isEmpty())
            ShopData->setObjectName(QStringLiteral("ShopData"));
        ShopData->resize(1051, 591);
        lb_head = new QLabel(ShopData);
        lb_head->setObjectName(QStringLiteral("lb_head"));
        lb_head->setGeometry(QRect(730, 10, 306, 108));
        lb_head->setLayoutDirection(Qt::LeftToRight);
        lb_head->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 255);"));
        lb_name = new QLabel(ShopData);
        lb_name->setObjectName(QStringLiteral("lb_name"));
        lb_name->setGeometry(QRect(730, 130, 306, 108));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(22);
        font.setBold(true);
        font.setWeight(75);
        lb_name->setFont(font);
        lb_name->setLayoutDirection(Qt::LeftToRight);
        lb_name->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        lb_name->setAlignment(Qt::AlignCenter);
        layoutWidget = new QWidget(ShopData);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 701, 571));
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
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(12);
        groupBox->setFont(font1);
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        comboBox->setFont(font2);
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
        pb_select->setFont(font2);
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
        groupBox_2->setFont(font1);
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        tableWidget = new QTableWidget(groupBox_2);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        gridLayout_3->addWidget(tableWidget, 0, 0, 1, 1);


        gridLayout_4->addWidget(groupBox_2, 1, 0, 1, 1);

        lb_name_2 = new QLabel(ShopData);
        lb_name_2->setObjectName(QStringLiteral("lb_name_2"));
        lb_name_2->setGeometry(QRect(1000, 540, 306, 108));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font3.setPointSize(22);
        lb_name_2->setFont(font3);
        lb_name_2->setLayoutDirection(Qt::LeftToRight);
        lb_name_2->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        lb_name_2->setAlignment(Qt::AlignCenter);
        layoutWidget1 = new QWidget(ShopData);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(740, 290, 281, 199));
        gridLayout_6 = new QGridLayout(layoutWidget1);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_6->addItem(verticalSpacer, 1, 1, 1, 1);

        le_name = new QLineEdit(layoutWidget1);
        le_name->setObjectName(QStringLiteral("le_name"));
        le_name->setEnabled(false);
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(le_name->sizePolicy().hasHeightForWidth());
        le_name->setSizePolicy(sizePolicy4);
        le_name->setFont(font1);
        le_name->setStyleSheet(QLatin1String("QLineEdit{\n"
"    border-style: outset;\n"
"    border-width: 1px;\n"
"    border-radius: 5px;\n"
"\n"
"    min-width: 5em;\n"
"    padding: 6px;\n"
"}"));

        gridLayout_6->addWidget(le_name, 2, 1, 1, 1);

        le_type = new QLineEdit(layoutWidget1);
        le_type->setObjectName(QStringLiteral("le_type"));
        le_type->setEnabled(false);
        sizePolicy4.setHeightForWidth(le_type->sizePolicy().hasHeightForWidth());
        le_type->setSizePolicy(sizePolicy4);
        le_type->setFont(font1);
        le_type->setStyleSheet(QLatin1String("QLineEdit{\n"
"    border-style: outset;\n"
"    border-width: 1px;\n"
"    border-radius: 5px;\n"
"\n"
"    min-width: 5em;\n"
"    padding: 6px;\n"
"}"));

        gridLayout_6->addWidget(le_type, 4, 1, 1, 1);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font1);

        gridLayout_6->addWidget(label_2, 0, 0, 1, 1);

        le_id = new QLineEdit(layoutWidget1);
        le_id->setObjectName(QStringLiteral("le_id"));
        le_id->setEnabled(false);
        sizePolicy4.setHeightForWidth(le_id->sizePolicy().hasHeightForWidth());
        le_id->setSizePolicy(sizePolicy4);
        le_id->setFont(font1);
        le_id->setStyleSheet(QLatin1String("QLineEdit{\n"
"    border-style: outset;\n"
"    border-width: 1px;\n"
"    border-radius: 5px;\n"
"\n"
"    min-width: 5em;\n"
"    padding: 6px;\n"
"}"));

        gridLayout_6->addWidget(le_id, 0, 1, 1, 1);

        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font1);

        gridLayout_6->addWidget(label_3, 2, 0, 1, 1);

        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font1);

        gridLayout_6->addWidget(label_4, 4, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_6->addItem(verticalSpacer_2, 3, 1, 1, 1);

        layoutWidget2 = new QWidget(ShopData);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(740, 490, 281, 95));
        gridLayout_5 = new QGridLayout(layoutWidget2);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        pb_save = new QPushButton(layoutWidget2);
        pb_save->setObjectName(QStringLiteral("pb_save"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(pb_save->sizePolicy().hasHeightForWidth());
        pb_save->setSizePolicy(sizePolicy5);
        pb_save->setFont(font1);
        pb_save->setStyleSheet(QLatin1String("QPushButton{\n"
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

        gridLayout_5->addWidget(pb_save, 1, 0, 1, 1);

        pb_insert = new QPushButton(layoutWidget2);
        pb_insert->setObjectName(QStringLiteral("pb_insert"));
        sizePolicy5.setHeightForWidth(pb_insert->sizePolicy().hasHeightForWidth());
        pb_insert->setSizePolicy(sizePolicy5);
        pb_insert->setFont(font1);
        pb_insert->setStyleSheet(QLatin1String("QPushButton{\n"
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

        gridLayout_5->addWidget(pb_insert, 1, 1, 1, 1);

        pb_delete = new QPushButton(layoutWidget2);
        pb_delete->setObjectName(QStringLiteral("pb_delete"));
        sizePolicy5.setHeightForWidth(pb_delete->sizePolicy().hasHeightForWidth());
        pb_delete->setSizePolicy(sizePolicy5);
        pb_delete->setFont(font1);
        pb_delete->setStyleSheet(QLatin1String("QPushButton{\n"
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

        gridLayout_5->addWidget(pb_delete, 0, 0, 1, 2);


        retranslateUi(ShopData);

        QMetaObject::connectSlotsByName(ShopData);
    } // setupUi

    void retranslateUi(QWidget *ShopData)
    {
        ShopData->setWindowTitle(QApplication::translate("ShopData", "Form", Q_NULLPTR));
        lb_head->setText(QString());
        lb_name->setText(QString());
        groupBox->setTitle(QApplication::translate("ShopData", "\346\237\245\350\257\242\346\235\241\344\273\266", Q_NULLPTR));
        label->setText(QApplication::translate("ShopData", "\346\237\245\350\257\242\346\235\241\344\273\266:", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("ShopData", "\345\205\250\351\203\250\345\272\227\351\223\272", Q_NULLPTR)
         << QApplication::translate("ShopData", "\345\272\227\351\223\272\345\220\215\347\247\260", Q_NULLPTR)
         << QApplication::translate("ShopData", "\345\215\226\350\264\247\347\261\273\345\210\253", Q_NULLPTR)
        );
        pb_select->setText(QApplication::translate("ShopData", "\346\220\234\347\264\242", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("ShopData", "\346\237\245\350\257\242\347\273\223\346\236\234", Q_NULLPTR));
        lb_name_2->setText(QString());
        label_2->setText(QApplication::translate("ShopData", "\345\272\227\351\223\272\347\274\226\345\217\267:", Q_NULLPTR));
        label_3->setText(QApplication::translate("ShopData", "\345\272\227\351\223\272\345\220\215\347\247\260:", Q_NULLPTR));
        label_4->setText(QApplication::translate("ShopData", "\345\215\226\350\264\247\347\261\273\345\210\253:", Q_NULLPTR));
        pb_save->setText(QApplication::translate("ShopData", "\344\277\235\345\255\230", Q_NULLPTR));
        pb_insert->setText(QApplication::translate("ShopData", "\345\274\200\350\256\276\345\272\227\351\223\272", Q_NULLPTR));
        pb_delete->setText(QApplication::translate("ShopData", "\346\263\250\351\224\200\345\272\227\351\223\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ShopData: public Ui_ShopData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOPDATA_H
