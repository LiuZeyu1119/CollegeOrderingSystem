/********************************************************************************
** Form generated from reading UI file 'shopcartdata.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOPCARTDATA_H
#define UI_SHOPCARTDATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShopcartData
{
public:
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QListWidget *listWidget;

    void setupUi(QWidget *ShopcartData)
    {
        if (ShopcartData->objectName().isEmpty())
            ShopcartData->setObjectName(QStringLiteral("ShopcartData"));
        ShopcartData->resize(1051, 591);
        gridLayout_5 = new QGridLayout(ShopcartData);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        groupBox_2 = new QGroupBox(ShopcartData);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        groupBox_2->setFont(font);
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        listWidget = new QListWidget(groupBox_2);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        gridLayout_3->addWidget(listWidget, 0, 0, 1, 1);


        gridLayout_4->addWidget(groupBox_2, 0, 0, 1, 1);


        gridLayout_5->addLayout(gridLayout_4, 0, 0, 1, 1);


        retranslateUi(ShopcartData);

        QMetaObject::connectSlotsByName(ShopcartData);
    } // setupUi

    void retranslateUi(QWidget *ShopcartData)
    {
        ShopcartData->setWindowTitle(QApplication::translate("ShopcartData", "Form", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("ShopcartData", "\346\237\245\350\257\242\347\273\223\346\236\234", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ShopcartData: public Ui_ShopcartData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOPCARTDATA_H
