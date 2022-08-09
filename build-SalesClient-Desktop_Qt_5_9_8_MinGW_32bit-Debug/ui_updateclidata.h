/********************************************************************************
** Form generated from reading UI file 'updateclidata.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATECLIDATA_H
#define UI_UPDATECLIDATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UpdateCliData
{
public:
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_4;
    QLabel *label;
    QLineEdit *le_time;
    QLineEdit *le_phone;
    QLineEdit *le_id;
    QLabel *label_2;
    QLineEdit *le_name;
    QLabel *label_5;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_3;
    QLineEdit *le_site;
    QSpacerItem *verticalSpacer_4;
    QPushButton *pushButton;
    QLabel *lb_head;
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QPushButton *pb_insert;
    QPushButton *pb_save;

    void setupUi(QWidget *UpdateCliData)
    {
        if (UpdateCliData->objectName().isEmpty())
            UpdateCliData->setObjectName(QStringLiteral("UpdateCliData"));
        UpdateCliData->resize(800, 496);
        UpdateCliData->setStyleSheet(QLatin1String("QWidget#UpdateCliData{\n"
"	\n"
"	background-image: url(:/image/sback.jpg);\n"
"}"));
        groupBox = new QGroupBox(UpdateCliData);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(250, 40, 461, 381));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(14);
        groupBox->setFont(font);
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 1, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 5, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(12);
        label_4->setFont(font1);

        gridLayout->addWidget(label_4, 6, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font1);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        le_time = new QLineEdit(groupBox);
        le_time->setObjectName(QStringLiteral("le_time"));
        le_time->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(le_time->sizePolicy().hasHeightForWidth());
        le_time->setSizePolicy(sizePolicy);
        le_time->setFont(font1);
        le_time->setStyleSheet(QLatin1String("QLineEdit{\n"
"    border-style: outset;\n"
"    border-width: 1px;\n"
"    border-radius: 5px;\n"
"\n"
"    min-width: 5em;\n"
"    padding: 6px;\n"
"}"));

        gridLayout->addWidget(le_time, 6, 1, 1, 1);

        le_phone = new QLineEdit(groupBox);
        le_phone->setObjectName(QStringLiteral("le_phone"));
        le_phone->setEnabled(true);
        sizePolicy.setHeightForWidth(le_phone->sizePolicy().hasHeightForWidth());
        le_phone->setSizePolicy(sizePolicy);
        le_phone->setFont(font1);
        le_phone->setStyleSheet(QLatin1String("QLineEdit{\n"
"    border-style: outset;\n"
"    border-width: 1px;\n"
"    border-radius: 5px;\n"
"\n"
"    min-width: 5em;\n"
"    padding: 6px;\n"
"}"));

        gridLayout->addWidget(le_phone, 4, 1, 1, 1);

        le_id = new QLineEdit(groupBox);
        le_id->setObjectName(QStringLiteral("le_id"));
        le_id->setEnabled(false);
        sizePolicy.setHeightForWidth(le_id->sizePolicy().hasHeightForWidth());
        le_id->setSizePolicy(sizePolicy);
        le_id->setFont(font1);
        le_id->setStyleSheet(QLatin1String("QLineEdit{\n"
"    border-style: outset;\n"
"    border-width: 1px;\n"
"    border-radius: 5px;\n"
"\n"
"    min-width: 5em;\n"
"    padding: 6px;\n"
"}"));

        gridLayout->addWidget(le_id, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font1);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        le_name = new QLineEdit(groupBox);
        le_name->setObjectName(QStringLiteral("le_name"));
        le_name->setEnabled(true);
        sizePolicy.setHeightForWidth(le_name->sizePolicy().hasHeightForWidth());
        le_name->setSizePolicy(sizePolicy);
        le_name->setFont(font1);
        le_name->setStyleSheet(QLatin1String("QLineEdit{\n"
"    border-style: outset;\n"
"    border-width: 1px;\n"
"    border-radius: 5px;\n"
"\n"
"    min-width: 5em;\n"
"    padding: 6px;\n"
"}"));

        gridLayout->addWidget(le_name, 2, 1, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font1);

        gridLayout->addWidget(label_5, 8, 0, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font1);

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_3, 3, 1, 1, 1);

        le_site = new QLineEdit(groupBox);
        le_site->setObjectName(QStringLiteral("le_site"));
        le_site->setEnabled(true);
        sizePolicy.setHeightForWidth(le_site->sizePolicy().hasHeightForWidth());
        le_site->setSizePolicy(sizePolicy);
        le_site->setFont(font1);
        le_site->setStyleSheet(QLatin1String("QLineEdit{\n"
"    border-style: outset;\n"
"    border-width: 1px;\n"
"    border-radius: 5px;\n"
"\n"
"    min-width: 5em;\n"
"    padding: 6px;\n"
"}"));

        gridLayout->addWidget(le_site, 8, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_4, 7, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        pushButton = new QPushButton(UpdateCliData);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(250, 420, 461, 61));
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
        lb_head = new QLabel(UpdateCliData);
        lb_head->setObjectName(QStringLiteral("lb_head"));
        lb_head->setGeometry(QRect(40, 170, 150, 150));
        lb_head->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 255);"));
        widget = new QWidget(UpdateCliData);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(40, 330, 151, 81));
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        pb_insert = new QPushButton(widget);
        pb_insert->setObjectName(QStringLiteral("pb_insert"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        pb_insert->setFont(font2);
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

        gridLayout_3->addWidget(pb_insert, 0, 0, 1, 1);

        pb_save = new QPushButton(widget);
        pb_save->setObjectName(QStringLiteral("pb_save"));
        pb_save->setFont(font2);
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

        gridLayout_3->addWidget(pb_save, 1, 0, 1, 1);


        retranslateUi(UpdateCliData);

        QMetaObject::connectSlotsByName(UpdateCliData);
    } // setupUi

    void retranslateUi(QWidget *UpdateCliData)
    {
        UpdateCliData->setWindowTitle(QApplication::translate("UpdateCliData", "Form", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("UpdateCliData", "\344\270\252\344\272\272\344\277\241\346\201\257", Q_NULLPTR));
        label_4->setText(QApplication::translate("UpdateCliData", "\346\263\250\345\206\214\346\227\266\351\227\264:", Q_NULLPTR));
        label->setText(QApplication::translate("UpdateCliData", "\347\224\250\346\210\267\345\220\215:", Q_NULLPTR));
        label_2->setText(QApplication::translate("UpdateCliData", "\345\247\223\345\220\215:", Q_NULLPTR));
        label_5->setText(QApplication::translate("UpdateCliData", "\346\211\200\345\234\250\345\234\260:", Q_NULLPTR));
        label_3->setText(QApplication::translate("UpdateCliData", "\350\201\224\347\263\273\347\224\265\350\257\235:", Q_NULLPTR));
        pushButton->setText(QApplication::translate("UpdateCliData", "\347\241\256\350\256\244", Q_NULLPTR));
        lb_head->setText(QString());
        pb_insert->setText(QApplication::translate("UpdateCliData", "\344\270\212\344\274\240\345\244\264\345\203\217", Q_NULLPTR));
        pb_save->setText(QApplication::translate("UpdateCliData", "\344\277\235\345\255\230", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UpdateCliData: public Ui_UpdateCliData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATECLIDATA_H
