/********************************************************************************
** Form generated from reading UI file 'changepswd.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEPSWD_H
#define UI_CHANGEPSWD_H

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

class Ui_ChangePswd
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_3;
    QLabel *label;
    QLineEdit *le_opswd;
    QLineEdit *le_npswd;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_2;
    QLineEdit *le_id;
    QLineEdit *le_kpswd;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton;
    QLabel *lb_data;

    void setupUi(QWidget *ChangePswd)
    {
        if (ChangePswd->objectName().isEmpty())
            ChangePswd->setObjectName(QStringLiteral("ChangePswd"));
        ChangePswd->resize(1051, 591);
        layoutWidget = new QWidget(ChangePswd);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(330, 100, 401, 382));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 1, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_3, 3, 1, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(14);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        le_opswd = new QLineEdit(layoutWidget);
        le_opswd->setObjectName(QStringLiteral("le_opswd"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(le_opswd->sizePolicy().hasHeightForWidth());
        le_opswd->setSizePolicy(sizePolicy);
        le_opswd->setFont(font);
        le_opswd->setStyleSheet(QLatin1String("QLineEdit{\n"
"    border-style: outset;\n"
"    border-width: 1px;\n"
"    border-radius: 5px;\n"
"\n"
"    min-width: 5em;\n"
"    padding: 6px;\n"
"}"));

        gridLayout->addWidget(le_opswd, 2, 1, 1, 1);

        le_npswd = new QLineEdit(layoutWidget);
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

        gridLayout->addWidget(le_npswd, 4, 1, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 6, 0, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        le_id = new QLineEdit(layoutWidget);
        le_id->setObjectName(QStringLiteral("le_id"));
        le_id->setEnabled(false);
        sizePolicy.setHeightForWidth(le_id->sizePolicy().hasHeightForWidth());
        le_id->setSizePolicy(sizePolicy);
        le_id->setFont(font);
        le_id->setStyleSheet(QLatin1String("QLineEdit{\n"
"    border-style: outset;\n"
"    border-width: 1px;\n"
"    border-radius: 5px;\n"
"\n"
"    min-width: 5em;\n"
"    padding: 6px;\n"
"}"));

        gridLayout->addWidget(le_id, 0, 1, 1, 1);

        le_kpswd = new QLineEdit(layoutWidget);
        le_kpswd->setObjectName(QStringLiteral("le_kpswd"));
        sizePolicy.setHeightForWidth(le_kpswd->sizePolicy().hasHeightForWidth());
        le_kpswd->setSizePolicy(sizePolicy);
        le_kpswd->setFont(font);
        le_kpswd->setStyleSheet(QLatin1String("QLineEdit{\n"
"    border-style: outset;\n"
"    border-width: 1px;\n"
"    border-radius: 5px;\n"
"\n"
"    min-width: 5em;\n"
"    padding: 6px;\n"
"}"));

        gridLayout->addWidget(le_kpswd, 6, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 5, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(18);
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

        gridLayout_2->addWidget(pushButton, 1, 0, 1, 1);

        lb_data = new QLabel(ChangePswd);
        lb_data->setObjectName(QStringLiteral("lb_data"));
        lb_data->setGeometry(QRect(330, 480, 401, 51));
        lb_data->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        lb_data->setAlignment(Qt::AlignCenter);

        retranslateUi(ChangePswd);

        QMetaObject::connectSlotsByName(ChangePswd);
    } // setupUi

    void retranslateUi(QWidget *ChangePswd)
    {
        ChangePswd->setWindowTitle(QApplication::translate("ChangePswd", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("ChangePswd", "\347\224\250\346\210\267\345\220\215:", Q_NULLPTR));
        label_3->setText(QApplication::translate("ChangePswd", "\346\226\260\345\257\206\347\240\201:", Q_NULLPTR));
        label_4->setText(QApplication::translate("ChangePswd", "\347\241\256\350\256\244\345\257\206\347\240\201:", Q_NULLPTR));
        label_2->setText(QApplication::translate("ChangePswd", "\346\227\247\345\257\206\347\240\201:", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ChangePswd", "\347\241\256\350\256\244\344\277\256\346\224\271", Q_NULLPTR));
        lb_data->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ChangePswd: public Ui_ChangePswd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEPSWD_H
