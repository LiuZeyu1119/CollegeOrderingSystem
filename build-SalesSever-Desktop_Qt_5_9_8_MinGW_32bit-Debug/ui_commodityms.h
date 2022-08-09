/********************************************************************************
** Form generated from reading UI file 'commodityms.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMODITYMS_H
#define UI_COMMODITYMS_H

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

class Ui_CommodityMS
{
public:
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_5;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *label_2;
    QLineEdit *le_select;
    QPushButton *pb_select;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QTableWidget *tableWidget;
    QLabel *label_3;
    QPushButton *pb_update;
    QPushButton *pb_delete;
    QPushButton *pb_insert;
    QPushButton *pb_cancel;
    QPushButton *pb_save;

    void setupUi(QWidget *CommodityMS)
    {
        if (CommodityMS->objectName().isEmpty())
            CommodityMS->setObjectName(QStringLiteral("CommodityMS"));
        CommodityMS->resize(839, 573);
        gridLayout_6 = new QGridLayout(CommodityMS);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        groupBox = new QGroupBox(CommodityMS);
        groupBox->setObjectName(QStringLiteral("groupBox"));
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

        gridLayout->addWidget(label, 0, 0, 1, 1);

        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout->addWidget(comboBox, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 3, 1, 1);

        le_select = new QLineEdit(groupBox);
        le_select->setObjectName(QStringLiteral("le_select"));
        le_select->setStyleSheet(QLatin1String("QLineEdit{\n"
"    border-style: outset;\n"
"    border-width: 1px;\n"
"    border-radius: 5px;\n"
"\n"
"    min-width: 5em;\n"
"    padding: 6px;\n"
"}"));

        gridLayout->addWidget(le_select, 0, 4, 1, 1);

        pb_select = new QPushButton(groupBox);
        pb_select->setObjectName(QStringLiteral("pb_select"));
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

        gridLayout->addWidget(pb_select, 0, 5, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        gridLayout_5->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(CommodityMS);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setFont(font);
        gridLayout_4 = new QGridLayout(groupBox_2);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        tableWidget = new QTableWidget(groupBox_2);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(tableWidget, 0, 0, 6, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(label_3, 0, 1, 1, 1);

        pb_update = new QPushButton(groupBox_2);
        pb_update->setObjectName(QStringLiteral("pb_update"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pb_update->sizePolicy().hasHeightForWidth());
        pb_update->setSizePolicy(sizePolicy2);
        pb_update->setStyleSheet(QLatin1String("QPushButton{\n"
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

        gridLayout_3->addWidget(pb_update, 1, 1, 1, 1);

        pb_delete = new QPushButton(groupBox_2);
        pb_delete->setObjectName(QStringLiteral("pb_delete"));
        sizePolicy2.setHeightForWidth(pb_delete->sizePolicy().hasHeightForWidth());
        pb_delete->setSizePolicy(sizePolicy2);
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

        gridLayout_3->addWidget(pb_delete, 2, 1, 1, 1);

        pb_insert = new QPushButton(groupBox_2);
        pb_insert->setObjectName(QStringLiteral("pb_insert"));
        sizePolicy2.setHeightForWidth(pb_insert->sizePolicy().hasHeightForWidth());
        pb_insert->setSizePolicy(sizePolicy2);
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

        gridLayout_3->addWidget(pb_insert, 3, 1, 1, 1);

        pb_cancel = new QPushButton(groupBox_2);
        pb_cancel->setObjectName(QStringLiteral("pb_cancel"));
        sizePolicy2.setHeightForWidth(pb_cancel->sizePolicy().hasHeightForWidth());
        pb_cancel->setSizePolicy(sizePolicy2);
        pb_cancel->setStyleSheet(QLatin1String("QPushButton{\n"
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

        gridLayout_3->addWidget(pb_cancel, 4, 1, 1, 1);

        pb_save = new QPushButton(groupBox_2);
        pb_save->setObjectName(QStringLiteral("pb_save"));
        sizePolicy2.setHeightForWidth(pb_save->sizePolicy().hasHeightForWidth());
        pb_save->setSizePolicy(sizePolicy2);
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

        gridLayout_3->addWidget(pb_save, 5, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 0, 1, 1);


        gridLayout_5->addWidget(groupBox_2, 1, 0, 1, 1);


        gridLayout_6->addLayout(gridLayout_5, 0, 0, 1, 1);


        retranslateUi(CommodityMS);

        QMetaObject::connectSlotsByName(CommodityMS);
    } // setupUi

    void retranslateUi(QWidget *CommodityMS)
    {
        CommodityMS->setWindowTitle(QApplication::translate("CommodityMS", "Form", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("CommodityMS", "\345\225\206\345\223\201\347\256\241\347\220\206", Q_NULLPTR));
        label->setText(QApplication::translate("CommodityMS", "\346\237\245\350\257\242\345\261\236\346\200\247\357\274\232", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("CommodityMS", "\345\205\250\351\203\250\345\225\206\345\223\201", Q_NULLPTR)
         << QApplication::translate("CommodityMS", "\345\225\206\345\223\201\347\274\226\345\217\267", Q_NULLPTR)
         << QApplication::translate("CommodityMS", "\345\225\206\345\272\227\347\274\226\345\217\267", Q_NULLPTR)
         << QApplication::translate("CommodityMS", "\345\225\206\345\223\201\345\220\215\347\247\260", Q_NULLPTR)
         << QApplication::translate("CommodityMS", "\345\224\256\344\273\267", Q_NULLPTR)
         << QApplication::translate("CommodityMS", "\347\261\273\345\210\253", Q_NULLPTR)
        );
        label_2->setText(QApplication::translate("CommodityMS", "\346\237\245\350\257\242\346\235\241\344\273\266\357\274\232", Q_NULLPTR));
        pb_select->setText(QApplication::translate("CommodityMS", "\346\237\245\350\257\242", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("CommodityMS", "\346\237\245\350\257\242\347\273\223\346\236\234", Q_NULLPTR));
        label_3->setText(QApplication::translate("CommodityMS", "\346\233\264\345\244\232\346\223\215\344\275\234", Q_NULLPTR));
        pb_update->setText(QApplication::translate("CommodityMS", "\344\277\256\346\224\271", Q_NULLPTR));
        pb_delete->setText(QApplication::translate("CommodityMS", "\345\210\240\351\231\244", Q_NULLPTR));
        pb_insert->setText(QApplication::translate("CommodityMS", "\346\226\260\345\242\236", Q_NULLPTR));
        pb_cancel->setText(QApplication::translate("CommodityMS", "\345\217\226\346\266\210", Q_NULLPTR));
        pb_save->setText(QApplication::translate("CommodityMS", "\344\277\235\345\255\230", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CommodityMS: public Ui_CommodityMS {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMODITYMS_H
