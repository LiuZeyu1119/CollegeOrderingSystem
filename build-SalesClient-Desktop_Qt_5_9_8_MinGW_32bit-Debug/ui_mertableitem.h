/********************************************************************************
** Form generated from reading UI file 'mertableitem.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MERTABLEITEM_H
#define UI_MERTABLEITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MerTableItem
{
public:
    QLabel *lb_head;
    QLabel *lb_name;
    QPushButton *pushButton;

    void setupUi(QWidget *MerTableItem)
    {
        if (MerTableItem->objectName().isEmpty())
            MerTableItem->setObjectName(QStringLiteral("MerTableItem"));
        MerTableItem->resize(222, 198);
        lb_head = new QLabel(MerTableItem);
        lb_head->setObjectName(QStringLiteral("lb_head"));
        lb_head->setGeometry(QRect(10, 10, 204, 72));
        lb_head->setStyleSheet(QStringLiteral(""));
        lb_name = new QLabel(MerTableItem);
        lb_name->setObjectName(QStringLiteral("lb_name"));
        lb_name->setGeometry(QRect(10, 90, 201, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(14);
        lb_name->setFont(font);
        lb_name->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        lb_name->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(MerTableItem);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 150, 201, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        pushButton->setFont(font1);
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

        retranslateUi(MerTableItem);

        QMetaObject::connectSlotsByName(MerTableItem);
    } // setupUi

    void retranslateUi(QWidget *MerTableItem)
    {
        MerTableItem->setWindowTitle(QApplication::translate("MerTableItem", "Form", Q_NULLPTR));
        lb_head->setText(QString());
        lb_name->setText(QString());
        pushButton->setText(QApplication::translate("MerTableItem", "\346\211\200\345\274\200\345\272\227\351\223\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MerTableItem: public Ui_MerTableItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MERTABLEITEM_H
