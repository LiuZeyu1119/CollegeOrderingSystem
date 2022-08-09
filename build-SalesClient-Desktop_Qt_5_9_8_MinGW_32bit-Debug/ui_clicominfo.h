/********************************************************************************
** Form generated from reading UI file 'clicominfo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLICOMINFO_H
#define UI_CLICOMINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CliComInfo
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *le_name;
    QLabel *label_2;
    QLineEdit *le_sprice;
    QLabel *label_3;
    QLineEdit *le_sex;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QLabel *lb_bar1;
    QLabel *lb_bar2;
    QLabel *lb_bar3;
    QLabel *lb_bar4;
    QLabel *lb_bar5;
    QGridLayout *gridLayout_4;
    QLabel *label_5;
    QLabel *lb_color1;
    QLabel *lb_color2;
    QLabel *lb_color3;
    QLabel *lb_color4;
    QLabel *lb_color5;
    QGridLayout *gridLayout_5;
    QLabel *label_6;
    QLabel *lb_num1;
    QLabel *lb_num2;
    QLabel *lb_num3;
    QLabel *lb_num4;
    QLabel *lb_num5;
    QLabel *lb_head;
    QWidget *layoutWidget_3;
    QGridLayout *gridLayout_3;
    QPushButton *pb_shopcart;
    QPushButton *pb_form;

    void setupUi(QWidget *CliComInfo)
    {
        if (CliComInfo->objectName().isEmpty())
            CliComInfo->setObjectName(QStringLiteral("CliComInfo"));
        CliComInfo->resize(593, 418);
        CliComInfo->setStyleSheet(QLatin1String("QWidget#CliComInfo{\n"
"	\n"
"	background-image: url(:/image/sback.jpg);\n"
"}"));
        layoutWidget = new QWidget(CliComInfo);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(240, 10, 341, 171));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(14);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        le_name = new QLineEdit(layoutWidget);
        le_name->setObjectName(QStringLiteral("le_name"));
        le_name->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(le_name->sizePolicy().hasHeightForWidth());
        le_name->setSizePolicy(sizePolicy);
        le_name->setFont(font);
        le_name->setStyleSheet(QLatin1String("QLineEdit{\n"
"    border-style: outset;\n"
"    border-width: 1px;\n"
"    border-radius: 5px;\n"
"\n"
"    min-width: 5em;\n"
"    padding: 6px;\n"
"}"));

        gridLayout->addWidget(le_name, 0, 1, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        le_sprice = new QLineEdit(layoutWidget);
        le_sprice->setObjectName(QStringLiteral("le_sprice"));
        le_sprice->setEnabled(false);
        sizePolicy.setHeightForWidth(le_sprice->sizePolicy().hasHeightForWidth());
        le_sprice->setSizePolicy(sizePolicy);
        le_sprice->setFont(font);
        le_sprice->setStyleSheet(QLatin1String("QLineEdit{\n"
"    border-style: outset;\n"
"    border-width: 1px;\n"
"    border-radius: 5px;\n"
"\n"
"    min-width: 5em;\n"
"    padding: 6px;\n"
"}"));

        gridLayout->addWidget(le_sprice, 1, 1, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        le_sex = new QLineEdit(layoutWidget);
        le_sex->setObjectName(QStringLiteral("le_sex"));
        le_sex->setEnabled(false);
        sizePolicy.setHeightForWidth(le_sex->sizePolicy().hasHeightForWidth());
        le_sex->setSizePolicy(sizePolicy);
        le_sex->setFont(font);
        le_sex->setStyleSheet(QLatin1String("QLineEdit{\n"
"    border-style: outset;\n"
"    border-width: 1px;\n"
"    border-radius: 5px;\n"
"\n"
"    min-width: 5em;\n"
"    padding: 6px;\n"
"}"));

        gridLayout->addWidget(le_sex, 2, 1, 1, 1);

        layoutWidget_2 = new QWidget(CliComInfo);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 240, 571, 171));
        gridLayout_6 = new QGridLayout(layoutWidget_2);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_4 = new QLabel(layoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(12);
        label_4->setFont(font1);

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        lb_bar1 = new QLabel(layoutWidget_2);
        lb_bar1->setObjectName(QStringLiteral("lb_bar1"));
        lb_bar1->setFont(font1);

        gridLayout_2->addWidget(lb_bar1, 0, 1, 1, 1);

        lb_bar2 = new QLabel(layoutWidget_2);
        lb_bar2->setObjectName(QStringLiteral("lb_bar2"));
        lb_bar2->setFont(font1);

        gridLayout_2->addWidget(lb_bar2, 0, 2, 1, 1);

        lb_bar3 = new QLabel(layoutWidget_2);
        lb_bar3->setObjectName(QStringLiteral("lb_bar3"));
        lb_bar3->setFont(font1);

        gridLayout_2->addWidget(lb_bar3, 0, 3, 1, 1);

        lb_bar4 = new QLabel(layoutWidget_2);
        lb_bar4->setObjectName(QStringLiteral("lb_bar4"));
        lb_bar4->setFont(font1);

        gridLayout_2->addWidget(lb_bar4, 0, 4, 1, 1);

        lb_bar5 = new QLabel(layoutWidget_2);
        lb_bar5->setObjectName(QStringLiteral("lb_bar5"));
        lb_bar5->setFont(font1);

        gridLayout_2->addWidget(lb_bar5, 0, 5, 1, 1);


        gridLayout_6->addLayout(gridLayout_2, 0, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label_5 = new QLabel(layoutWidget_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font1);

        gridLayout_4->addWidget(label_5, 0, 0, 1, 1);

        lb_color1 = new QLabel(layoutWidget_2);
        lb_color1->setObjectName(QStringLiteral("lb_color1"));
        lb_color1->setFont(font1);

        gridLayout_4->addWidget(lb_color1, 0, 1, 1, 1);

        lb_color2 = new QLabel(layoutWidget_2);
        lb_color2->setObjectName(QStringLiteral("lb_color2"));
        lb_color2->setFont(font1);

        gridLayout_4->addWidget(lb_color2, 0, 2, 1, 1);

        lb_color3 = new QLabel(layoutWidget_2);
        lb_color3->setObjectName(QStringLiteral("lb_color3"));
        lb_color3->setFont(font1);

        gridLayout_4->addWidget(lb_color3, 0, 3, 1, 1);

        lb_color4 = new QLabel(layoutWidget_2);
        lb_color4->setObjectName(QStringLiteral("lb_color4"));
        lb_color4->setFont(font1);

        gridLayout_4->addWidget(lb_color4, 0, 4, 1, 1);

        lb_color5 = new QLabel(layoutWidget_2);
        lb_color5->setObjectName(QStringLiteral("lb_color5"));
        lb_color5->setFont(font1);

        gridLayout_4->addWidget(lb_color5, 0, 5, 1, 1);


        gridLayout_6->addLayout(gridLayout_4, 1, 0, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        label_6 = new QLabel(layoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font1);

        gridLayout_5->addWidget(label_6, 0, 0, 1, 1);

        lb_num1 = new QLabel(layoutWidget_2);
        lb_num1->setObjectName(QStringLiteral("lb_num1"));
        lb_num1->setFont(font1);

        gridLayout_5->addWidget(lb_num1, 0, 1, 1, 1);

        lb_num2 = new QLabel(layoutWidget_2);
        lb_num2->setObjectName(QStringLiteral("lb_num2"));
        lb_num2->setFont(font1);

        gridLayout_5->addWidget(lb_num2, 0, 2, 1, 1);

        lb_num3 = new QLabel(layoutWidget_2);
        lb_num3->setObjectName(QStringLiteral("lb_num3"));
        lb_num3->setFont(font1);

        gridLayout_5->addWidget(lb_num3, 0, 3, 1, 1);

        lb_num4 = new QLabel(layoutWidget_2);
        lb_num4->setObjectName(QStringLiteral("lb_num4"));
        lb_num4->setFont(font1);

        gridLayout_5->addWidget(lb_num4, 0, 4, 1, 1);

        lb_num5 = new QLabel(layoutWidget_2);
        lb_num5->setObjectName(QStringLiteral("lb_num5"));
        lb_num5->setFont(font1);

        gridLayout_5->addWidget(lb_num5, 0, 5, 1, 1);


        gridLayout_6->addLayout(gridLayout_5, 2, 0, 1, 1);

        lb_head = new QLabel(CliComInfo);
        lb_head->setObjectName(QStringLiteral("lb_head"));
        lb_head->setGeometry(QRect(10, 10, 220, 220));
        lb_head->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 255);"));
        layoutWidget_3 = new QWidget(CliComInfo);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(240, 190, 341, 41));
        gridLayout_3 = new QGridLayout(layoutWidget_3);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        pb_shopcart = new QPushButton(layoutWidget_3);
        pb_shopcart->setObjectName(QStringLiteral("pb_shopcart"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pb_shopcart->sizePolicy().hasHeightForWidth());
        pb_shopcart->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        pb_shopcart->setFont(font2);
        pb_shopcart->setStyleSheet(QLatin1String("QPushButton{\n"
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

        gridLayout_3->addWidget(pb_shopcart, 0, 0, 1, 1);

        pb_form = new QPushButton(layoutWidget_3);
        pb_form->setObjectName(QStringLiteral("pb_form"));
        sizePolicy1.setHeightForWidth(pb_form->sizePolicy().hasHeightForWidth());
        pb_form->setSizePolicy(sizePolicy1);
        pb_form->setFont(font2);
        pb_form->setStyleSheet(QLatin1String("QPushButton{\n"
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

        gridLayout_3->addWidget(pb_form, 0, 1, 1, 1);


        retranslateUi(CliComInfo);

        QMetaObject::connectSlotsByName(CliComInfo);
    } // setupUi

    void retranslateUi(QWidget *CliComInfo)
    {
        CliComInfo->setWindowTitle(QApplication::translate("CliComInfo", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("CliComInfo", "\345\225\206\345\223\201\345\220\215\347\247\260:", Q_NULLPTR));
        label_2->setText(QApplication::translate("CliComInfo", "\345\224\256\344\273\267:", Q_NULLPTR));
        label_3->setText(QApplication::translate("CliComInfo", "\347\261\273\345\210\253:", Q_NULLPTR));
        label_4->setText(QApplication::translate("CliComInfo", "\350\260\203\346\226\231:", Q_NULLPTR));
        lb_bar1->setText(QString());
        lb_bar2->setText(QString());
        lb_bar3->setText(QString());
        lb_bar4->setText(QString());
        lb_bar5->setText(QString());
        label_5->setText(QApplication::translate("CliComInfo", "\345\217\243\345\221\263:", Q_NULLPTR));
        lb_color1->setText(QString());
        lb_color2->setText(QString());
        lb_color3->setText(QString());
        lb_color4->setText(QString());
        lb_color5->setText(QString());
        label_6->setText(QApplication::translate("CliComInfo", "\345\272\223\345\255\230:", Q_NULLPTR));
        lb_num1->setText(QString());
        lb_num2->setText(QString());
        lb_num3->setText(QString());
        lb_num4->setText(QString());
        lb_num5->setText(QString());
        lb_head->setText(QString());
        pb_shopcart->setText(QApplication::translate("CliComInfo", "\345\212\240\345\205\245\350\264\255\347\211\251\350\275\246", Q_NULLPTR));
        pb_form->setText(QApplication::translate("CliComInfo", "\344\270\213\345\215\225", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CliComInfo: public Ui_CliComInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLICOMINFO_H
