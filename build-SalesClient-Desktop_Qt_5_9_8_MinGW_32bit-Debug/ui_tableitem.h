/********************************************************************************
** Form generated from reading UI file 'tableitem.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLEITEM_H
#define UI_TABLEITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TableItem
{
public:
    QLabel *lb_head;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *lb_name;
    QPushButton *pb_info;

    void setupUi(QWidget *TableItem)
    {
        if (TableItem->objectName().isEmpty())
            TableItem->setObjectName(QStringLiteral("TableItem"));
        TableItem->resize(244, 313);
        lb_head = new QLabel(TableItem);
        lb_head->setObjectName(QStringLiteral("lb_head"));
        lb_head->setGeometry(QRect(12, 12, 220, 220));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lb_head->sizePolicy().hasHeightForWidth());
        lb_head->setSizePolicy(sizePolicy);
        lb_head->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 255);"));
        layoutWidget = new QWidget(TableItem);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 231, 221, 75));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lb_name = new QLabel(layoutWidget);
        lb_name->setObjectName(QStringLiteral("lb_name"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lb_name->sizePolicy().hasHeightForWidth());
        lb_name->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        lb_name->setFont(font);

        gridLayout->addWidget(lb_name, 0, 0, 1, 1);

        pb_info = new QPushButton(layoutWidget);
        pb_info->setObjectName(QStringLiteral("pb_info"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(9);
        pb_info->setFont(font1);
        pb_info->setStyleSheet(QLatin1String("QPushButton{\n"
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

        gridLayout->addWidget(pb_info, 1, 0, 1, 1);


        retranslateUi(TableItem);

        QMetaObject::connectSlotsByName(TableItem);
    } // setupUi

    void retranslateUi(QWidget *TableItem)
    {
        TableItem->setWindowTitle(QApplication::translate("TableItem", "Form", Q_NULLPTR));
        lb_head->setText(QString());
        lb_name->setText(QString());
        pb_info->setText(QApplication::translate("TableItem", "\350\257\246\346\203\205", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TableItem: public Ui_TableItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLEITEM_H
