/********************************************************************************
** Form generated from reading UI file 'cliformdata.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIFORMDATA_H
#define UI_CLIFORMDATA_H

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

class Ui_CliFormData
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
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_5;
    QLineEdit *le_id;
    QPushButton *pb_delete;
    QLabel *lb_name_2;
    QLabel *label_2;

    void setupUi(QWidget *CliFormData)
    {
        if (CliFormData->objectName().isEmpty())
            CliFormData->setObjectName(QStringLiteral("CliFormData"));
        CliFormData->resize(1051, 591);
        layoutWidget = new QWidget(CliFormData);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 821, 571));
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

        gridLayout->addWidget(label, 0, 0, 1, 1);

        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy1);
        comboBox->setFont(font);
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
        pb_select->setFont(font);
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

        layoutWidget_2 = new QWidget(CliFormData);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(840, 240, 201, 88));
        gridLayout_5 = new QGridLayout(layoutWidget_2);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        le_id = new QLineEdit(layoutWidget_2);
        le_id->setObjectName(QStringLiteral("le_id"));
        le_id->setEnabled(true);
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(le_id->sizePolicy().hasHeightForWidth());
        le_id->setSizePolicy(sizePolicy4);
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        le_id->setFont(font1);
        le_id->setStyleSheet(QLatin1String("QLineEdit{\n"
"    border-style: outset;\n"
"    border-width: 1px;\n"
"    border-radius: 5px;\n"
"\n"
"    min-width: 5em;\n"
"    padding: 6px;\n"
"}"));

        gridLayout_5->addWidget(le_id, 0, 0, 1, 1);

        pb_delete = new QPushButton(layoutWidget_2);
        pb_delete->setObjectName(QStringLiteral("pb_delete"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(pb_delete->sizePolicy().hasHeightForWidth());
        pb_delete->setSizePolicy(sizePolicy5);
        pb_delete->setFont(font);
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

        gridLayout_5->addWidget(pb_delete, 1, 0, 1, 1);

        lb_name_2 = new QLabel(CliFormData);
        lb_name_2->setObjectName(QStringLiteral("lb_name_2"));
        lb_name_2->setGeometry(QRect(1000, 540, 306, 108));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font2.setPointSize(22);
        lb_name_2->setFont(font2);
        lb_name_2->setLayoutDirection(Qt::LeftToRight);
        lb_name_2->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        lb_name_2->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(CliFormData);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(880, 190, 111, 41));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(14);
        label_2->setFont(font3);
        layoutWidget->raise();
        layoutWidget_2->raise();
        lb_name_2->raise();
        label_2->raise();
        pb_delete->raise();

        retranslateUi(CliFormData);

        QMetaObject::connectSlotsByName(CliFormData);
    } // setupUi

    void retranslateUi(QWidget *CliFormData)
    {
        CliFormData->setWindowTitle(QApplication::translate("CliFormData", "Form", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("CliFormData", "\346\237\245\350\257\242\346\235\241\344\273\266", Q_NULLPTR));
        label->setText(QApplication::translate("CliFormData", "\346\237\245\350\257\242\346\235\241\344\273\266:", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("CliFormData", "\345\205\250\351\203\250\350\256\242\345\215\225", Q_NULLPTR)
         << QApplication::translate("CliFormData", "\350\256\242\345\215\225\347\274\226\345\217\267", Q_NULLPTR)
        );
        pb_select->setText(QApplication::translate("CliFormData", "\346\220\234\347\264\242", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("CliFormData", "\346\237\245\350\257\242\347\273\223\346\236\234", Q_NULLPTR));
        pb_delete->setText(QApplication::translate("CliFormData", "\345\210\240\351\231\244\350\256\242\345\215\225", Q_NULLPTR));
        lb_name_2->setText(QString());
        label_2->setText(QApplication::translate("CliFormData", "\350\256\242\345\215\225\347\274\226\345\217\267:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CliFormData: public Ui_CliFormData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIFORMDATA_H
