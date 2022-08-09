/********************************************************************************
** Form generated from reading UI file 'pwsd.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PWSD_H
#define UI_PWSD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Pwsd
{
public:
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QPushButton *pb_ok;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QLineEdit *le_npswd2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label;
    QLineEdit *le_npswd;
    QLineEdit *le_user;
    QSpacerItem *verticalSpacer_3;
    QLabel *lb_text;

    void setupUi(QWidget *Pwsd)
    {
        if (Pwsd->objectName().isEmpty())
            Pwsd->setObjectName(QStringLiteral("Pwsd"));
        Pwsd->resize(839, 573);
        Pwsd->setStyleSheet(QLatin1String("QWidget#Pwsd{\n"
"	background-image: url(:/image/pswd.jpg);\n"
"}"));
        widget = new QWidget(Pwsd);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(150, 130, 471, 241));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pb_ok = new QPushButton(widget);
        pb_ok->setObjectName(QStringLiteral("pb_ok"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pb_ok->sizePolicy().hasHeightForWidth());
        pb_ok->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        pb_ok->setFont(font);
        pb_ok->setStyleSheet(QLatin1String("QPushButton{\n"
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

        gridLayout->addWidget(pb_ok, 6, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 3, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 1, 1, 1, 1);

        le_npswd2 = new QLineEdit(widget);
        le_npswd2->setObjectName(QStringLiteral("le_npswd2"));
        sizePolicy.setHeightForWidth(le_npswd2->sizePolicy().hasHeightForWidth());
        le_npswd2->setSizePolicy(sizePolicy);
        le_npswd2->setFont(font);
        le_npswd2->setStyleSheet(QLatin1String("QLineEdit{\n"
"    border-style: outset;\n"
"    border-width: 1px;\n"
"    border-radius: 5px;\n"
"\n"
"    min-width: 5em;\n"
"    padding: 6px;\n"
"}"));

        gridLayout->addWidget(le_npswd2, 4, 1, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        le_npswd = new QLineEdit(widget);
        le_npswd->setObjectName(QStringLiteral("le_npswd"));
        sizePolicy.setHeightForWidth(le_npswd->sizePolicy().hasHeightForWidth());
        le_npswd->setSizePolicy(sizePolicy);
        le_npswd->setFont(font);
        le_npswd->setStyleSheet(QLatin1String("QLineEdit{\n"
"    border-style: outset;\n"
"    border-width: 1px;\n"
"    border-radius: 5px;\n"
"\n"
"    min-width: 5em;\n"
"    padding: 6px;\n"
"}"));

        gridLayout->addWidget(le_npswd, 2, 1, 1, 1);

        le_user = new QLineEdit(widget);
        le_user->setObjectName(QStringLiteral("le_user"));
        sizePolicy.setHeightForWidth(le_user->sizePolicy().hasHeightForWidth());
        le_user->setSizePolicy(sizePolicy);
        le_user->setFont(font);
        le_user->setStyleSheet(QLatin1String("QLineEdit{\n"
"    border-style: outset;\n"
"    border-width: 1px;\n"
"    border-radius: 5px;\n"
"\n"
"    min-width: 5em;\n"
"    padding: 6px;\n"
"}"));

        gridLayout->addWidget(le_user, 0, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_3, 5, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        lb_text = new QLabel(Pwsd);
        lb_text->setObjectName(QStringLiteral("lb_text"));
        lb_text->setGeometry(QRect(240, 430, 381, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        font1.setPointSize(12);
        lb_text->setFont(font1);

        retranslateUi(Pwsd);

        QMetaObject::connectSlotsByName(Pwsd);
    } // setupUi

    void retranslateUi(QWidget *Pwsd)
    {
        Pwsd->setWindowTitle(QApplication::translate("Pwsd", "Form", Q_NULLPTR));
        pb_ok->setText(QApplication::translate("Pwsd", "\347\241\256\350\256\244\344\277\256\346\224\271", Q_NULLPTR));
        label_2->setText(QApplication::translate("Pwsd", "\346\226\260\345\257\206\347\240\201:", Q_NULLPTR));
        label_3->setText(QApplication::translate("Pwsd", "\347\241\256\350\256\244\345\257\206\347\240\201:", Q_NULLPTR));
        label->setText(QApplication::translate("Pwsd", "\347\224\250\346\210\267\345\220\215:", Q_NULLPTR));
        lb_text->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Pwsd: public Ui_Pwsd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PWSD_H
