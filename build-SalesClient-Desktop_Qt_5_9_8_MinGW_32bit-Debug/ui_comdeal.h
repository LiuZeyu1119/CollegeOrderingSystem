/********************************************************************************
** Form generated from reading UI file 'comdeal.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMDEAL_H
#define UI_COMDEAL_H

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

class Ui_ComDeal
{
public:
    QLabel *lb_head;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *le_name;
    QLabel *label_2;
    QLineEdit *le_sprice;
    QLabel *label_3;
    QLineEdit *le_bar;
    QLabel *label_4;
    QLineEdit *le_color;
    QLabel *label_5;
    QLineEdit *le_num;

    void setupUi(QWidget *ComDeal)
    {
        if (ComDeal->objectName().isEmpty())
            ComDeal->setObjectName(QStringLiteral("ComDeal"));
        ComDeal->resize(528, 329);
        ComDeal->setStyleSheet(QLatin1String("QWidget#ComDeal{\n"
"	\n"
"	background-image: url(:/image/sback.jpg);\n"
"}"));
        lb_head = new QLabel(ComDeal);
        lb_head->setObjectName(QStringLiteral("lb_head"));
        lb_head->setGeometry(QRect(10, 10, 220, 220));
        lb_head->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 255);"));
        pushButton = new QPushButton(ComDeal);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 280, 501, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(14);
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
        layoutWidget = new QWidget(ComDeal);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(235, 11, 281, 260));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
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

        le_bar = new QLineEdit(layoutWidget);
        le_bar->setObjectName(QStringLiteral("le_bar"));
        sizePolicy.setHeightForWidth(le_bar->sizePolicy().hasHeightForWidth());
        le_bar->setSizePolicy(sizePolicy);
        le_bar->setFont(font);
        le_bar->setStyleSheet(QLatin1String("QLineEdit{\n"
"    border-style: outset;\n"
"    border-width: 1px;\n"
"    border-radius: 5px;\n"
"\n"
"    min-width: 5em;\n"
"    padding: 6px;\n"
"}"));

        gridLayout->addWidget(le_bar, 2, 1, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        le_color = new QLineEdit(layoutWidget);
        le_color->setObjectName(QStringLiteral("le_color"));
        sizePolicy.setHeightForWidth(le_color->sizePolicy().hasHeightForWidth());
        le_color->setSizePolicy(sizePolicy);
        le_color->setFont(font);
        le_color->setStyleSheet(QLatin1String("QLineEdit{\n"
"    border-style: outset;\n"
"    border-width: 1px;\n"
"    border-radius: 5px;\n"
"\n"
"    min-width: 5em;\n"
"    padding: 6px;\n"
"}"));

        gridLayout->addWidget(le_color, 3, 1, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        le_num = new QLineEdit(layoutWidget);
        le_num->setObjectName(QStringLiteral("le_num"));
        sizePolicy.setHeightForWidth(le_num->sizePolicy().hasHeightForWidth());
        le_num->setSizePolicy(sizePolicy);
        le_num->setFont(font);
        le_num->setStyleSheet(QLatin1String("QLineEdit{\n"
"    border-style: outset;\n"
"    border-width: 1px;\n"
"    border-radius: 5px;\n"
"\n"
"    min-width: 5em;\n"
"    padding: 6px;\n"
"}"));

        gridLayout->addWidget(le_num, 4, 1, 1, 1);


        retranslateUi(ComDeal);

        QMetaObject::connectSlotsByName(ComDeal);
    } // setupUi

    void retranslateUi(QWidget *ComDeal)
    {
        ComDeal->setWindowTitle(QApplication::translate("ComDeal", "Form", Q_NULLPTR));
        lb_head->setText(QString());
        pushButton->setText(QApplication::translate("ComDeal", "\347\241\256\350\256\244", Q_NULLPTR));
        label->setText(QApplication::translate("ComDeal", "\345\225\206\345\223\201\345\220\215\347\247\260:", Q_NULLPTR));
        label_2->setText(QApplication::translate("ComDeal", "\345\224\256\344\273\267:", Q_NULLPTR));
        label_3->setText(QApplication::translate("ComDeal", "\350\260\203\346\226\231:", Q_NULLPTR));
        label_4->setText(QApplication::translate("ComDeal", "\345\217\243\345\221\263:", Q_NULLPTR));
        label_5->setText(QApplication::translate("ComDeal", "\345\272\223\345\255\230:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ComDeal: public Ui_ComDeal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMDEAL_H
