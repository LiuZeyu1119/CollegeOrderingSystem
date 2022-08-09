/********************************************************************************
** Form generated from reading UI file 'listitem.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTITEM_H
#define UI_LISTITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ListItem
{
public:
    QLabel *lb_comhead;
    QFrame *line;
    QLabel *lb_merhead;
    QLabel *lb_mername;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *le_name;
    QLabel *label_3;
    QLineEdit *le_sprice;
    QLabel *label_6;
    QLineEdit *le_num;
    QLabel *label_4;
    QLineEdit *le_color;
    QLabel *label_5;
    QLineEdit *le_bar;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QPushButton *pb_insert;
    QPushButton *pb_delete;
    QFrame *line_2;
    QFrame *line_3;

    void setupUi(QWidget *ListItem)
    {
        if (ListItem->objectName().isEmpty())
            ListItem->setObjectName(QStringLiteral("ListItem"));
        ListItem->resize(1000, 275);
        lb_comhead = new QLabel(ListItem);
        lb_comhead->setObjectName(QStringLiteral("lb_comhead"));
        lb_comhead->setGeometry(QRect(257, 10, 220, 220));
        lb_comhead->setStyleSheet(QStringLiteral("background-color: rgb(85, 170, 255);"));
        line = new QFrame(ListItem);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(500, 0, 20, 271));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        lb_merhead = new QLabel(ListItem);
        lb_merhead->setObjectName(QStringLiteral("lb_merhead"));
        lb_merhead->setGeometry(QRect(60, 60, 102, 36));
        lb_merhead->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 255);"));
        lb_mername = new QLabel(ListItem);
        lb_mername->setObjectName(QStringLiteral("lb_mername"));
        lb_mername->setGeometry(QRect(60, 100, 101, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        lb_mername->setFont(font);
        lb_mername->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        layoutWidget = new QWidget(ListItem);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(537, 10, 291, 245));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(12);
        layoutWidget->setFont(font1);
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(12);
        label_2->setFont(font2);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        le_name = new QLineEdit(layoutWidget);
        le_name->setObjectName(QStringLiteral("le_name"));
        le_name->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(le_name->sizePolicy().hasHeightForWidth());
        le_name->setSizePolicy(sizePolicy);
        le_name->setFont(font2);
        le_name->setStyleSheet(QLatin1String("QLineEdit{\n"
"    border-style: outset;\n"
"    border-width: 1px;\n"
"    border-radius: 5px;\n"
"\n"
"    min-width: 5em;\n"
"    padding: 6px;\n"
"}"));

        gridLayout->addWidget(le_name, 0, 1, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font2);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        le_sprice = new QLineEdit(layoutWidget);
        le_sprice->setObjectName(QStringLiteral("le_sprice"));
        le_sprice->setEnabled(false);
        sizePolicy.setHeightForWidth(le_sprice->sizePolicy().hasHeightForWidth());
        le_sprice->setSizePolicy(sizePolicy);
        le_sprice->setFont(font2);
        le_sprice->setStyleSheet(QLatin1String("QLineEdit{\n"
"    border-style: outset;\n"
"    border-width: 1px;\n"
"    border-radius: 5px;\n"
"\n"
"    min-width: 5em;\n"
"    padding: 6px;\n"
"}"));

        gridLayout->addWidget(le_sprice, 1, 1, 1, 1);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font2);

        gridLayout->addWidget(label_6, 2, 0, 1, 1);

        le_num = new QLineEdit(layoutWidget);
        le_num->setObjectName(QStringLiteral("le_num"));
        sizePolicy.setHeightForWidth(le_num->sizePolicy().hasHeightForWidth());
        le_num->setSizePolicy(sizePolicy);
        le_num->setFont(font2);
        le_num->setStyleSheet(QLatin1String("QLineEdit{\n"
"    border-style: outset;\n"
"    border-width: 1px;\n"
"    border-radius: 5px;\n"
"\n"
"    min-width: 5em;\n"
"    padding: 6px;\n"
"}"));

        gridLayout->addWidget(le_num, 2, 1, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font2);

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        le_color = new QLineEdit(layoutWidget);
        le_color->setObjectName(QStringLiteral("le_color"));
        le_color->setEnabled(false);
        sizePolicy.setHeightForWidth(le_color->sizePolicy().hasHeightForWidth());
        le_color->setSizePolicy(sizePolicy);
        le_color->setFont(font2);
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
        label_5->setFont(font2);

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        le_bar = new QLineEdit(layoutWidget);
        le_bar->setObjectName(QStringLiteral("le_bar"));
        le_bar->setEnabled(false);
        sizePolicy.setHeightForWidth(le_bar->sizePolicy().hasHeightForWidth());
        le_bar->setSizePolicy(sizePolicy);
        le_bar->setFont(font2);
        le_bar->setStyleSheet(QLatin1String("QLineEdit{\n"
"    border-style: outset;\n"
"    border-width: 1px;\n"
"    border-radius: 5px;\n"
"\n"
"    min-width: 5em;\n"
"    padding: 6px;\n"
"}"));

        gridLayout->addWidget(le_bar, 4, 1, 1, 1);

        layoutWidget1 = new QWidget(ListItem);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(850, 80, 141, 95));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        pb_insert = new QPushButton(layoutWidget1);
        pb_insert->setObjectName(QStringLiteral("pb_insert"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pb_insert->sizePolicy().hasHeightForWidth());
        pb_insert->setSizePolicy(sizePolicy1);
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

        gridLayout_2->addWidget(pb_insert, 0, 0, 1, 1);

        pb_delete = new QPushButton(layoutWidget1);
        pb_delete->setObjectName(QStringLiteral("pb_delete"));
        sizePolicy1.setHeightForWidth(pb_delete->sizePolicy().hasHeightForWidth());
        pb_delete->setSizePolicy(sizePolicy1);
        pb_delete->setFont(font2);
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

        gridLayout_2->addWidget(pb_delete, 1, 0, 1, 1);

        line_2 = new QFrame(ListItem);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(-10, 260, 1011, 21));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(ListItem);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(220, 0, 20, 271));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        retranslateUi(ListItem);

        QMetaObject::connectSlotsByName(ListItem);
    } // setupUi

    void retranslateUi(QWidget *ListItem)
    {
        ListItem->setWindowTitle(QApplication::translate("ListItem", "Form", Q_NULLPTR));
        lb_comhead->setText(QString());
        lb_merhead->setText(QString());
        lb_mername->setText(QString());
        label_2->setText(QApplication::translate("ListItem", "\345\225\206\345\223\201\345\220\215\347\247\260:", Q_NULLPTR));
        label_3->setText(QApplication::translate("ListItem", "\345\224\256\344\273\267:", Q_NULLPTR));
        label_6->setText(QApplication::translate("ListItem", "\346\225\260\351\207\217:", Q_NULLPTR));
        label_4->setText(QApplication::translate("ListItem", "\345\217\243\345\221\263:", Q_NULLPTR));
        label_5->setText(QApplication::translate("ListItem", "\350\260\203\346\226\231;", Q_NULLPTR));
        pb_insert->setText(QApplication::translate("ListItem", "\344\270\213\345\215\225", Q_NULLPTR));
        pb_delete->setText(QApplication::translate("ListItem", "\345\210\240\351\231\244", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ListItem: public Ui_ListItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTITEM_H
