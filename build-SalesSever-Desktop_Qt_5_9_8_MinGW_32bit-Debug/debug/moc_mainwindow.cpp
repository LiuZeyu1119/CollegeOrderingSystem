/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../SalesSever/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[45];
    char stringdata0[806];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 11), // "GetDateTime"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 13), // "slotUserLogin"
QT_MOC_LITERAL(4, 38, 2), // "id"
QT_MOC_LITERAL(5, 41, 4), // "pswd"
QT_MOC_LITERAL(6, 46, 11), // "slotUserNum"
QT_MOC_LITERAL(7, 58, 12), // "slotUserNumX"
QT_MOC_LITERAL(8, 71, 14), // "slotInsertUser"
QT_MOC_LITERAL(9, 86, 3), // "res"
QT_MOC_LITERAL(10, 90, 14), // "slotUpdateSqla"
QT_MOC_LITERAL(11, 105, 14), // "slotInsertShop"
QT_MOC_LITERAL(12, 120, 14), // "slotDeleteShop"
QT_MOC_LITERAL(13, 135, 14), // "slotDeleteForm"
QT_MOC_LITERAL(14, 150, 18), // "slotDeleteShopcart"
QT_MOC_LITERAL(15, 169, 14), // "slotInsertForm"
QT_MOC_LITERAL(16, 184, 18), // "slotInsertShopcart"
QT_MOC_LITERAL(17, 203, 18), // "slotUpdateMerchant"
QT_MOC_LITERAL(18, 222, 16), // "slotUpdateClient"
QT_MOC_LITERAL(19, 239, 19), // "slotUpdateCommodity"
QT_MOC_LITERAL(20, 259, 19), // "slotUpdateUserImage"
QT_MOC_LITERAL(21, 279, 17), // "on_user_triggered"
QT_MOC_LITERAL(22, 297, 18), // "on_first_triggered"
QT_MOC_LITERAL(23, 316, 19), // "on_client_triggered"
QT_MOC_LITERAL(24, 336, 21), // "on_merchant_triggered"
QT_MOC_LITERAL(25, 358, 17), // "on_shop_triggered"
QT_MOC_LITERAL(26, 376, 22), // "on_commodity_triggered"
QT_MOC_LITERAL(27, 399, 25), // "on_actionPswdMS_triggered"
QT_MOC_LITERAL(28, 425, 25), // "on_actionSortMS_triggered"
QT_MOC_LITERAL(29, 451, 26), // "on_actionPhotoMS_triggered"
QT_MOC_LITERAL(30, 478, 25), // "on_actionFormMS_triggered"
QT_MOC_LITERAL(31, 504, 29), // "on_actionShopcartMS_triggered"
QT_MOC_LITERAL(32, 534, 27), // "on_actionDialogMS_triggered"
QT_MOC_LITERAL(33, 562, 20), // "on_pb_remove_clicked"
QT_MOC_LITERAL(34, 583, 18), // "on_pb_quit_clicked"
QT_MOC_LITERAL(35, 602, 20), // "on_pb_user_3_clicked"
QT_MOC_LITERAL(36, 623, 19), // "on_pb_cli_3_clicked"
QT_MOC_LITERAL(37, 643, 19), // "on_pb_mer_3_clicked"
QT_MOC_LITERAL(38, 663, 20), // "on_pb_shop_3_clicked"
QT_MOC_LITERAL(39, 684, 19), // "on_pb_com_3_clicked"
QT_MOC_LITERAL(40, 704, 20), // "on_pb_pswd_3_clicked"
QT_MOC_LITERAL(41, 725, 20), // "on_pb_form_3_clicked"
QT_MOC_LITERAL(42, 746, 20), // "on_pb_cart_3_clicked"
QT_MOC_LITERAL(43, 767, 19), // "on_pb_dia_3_clicked"
QT_MOC_LITERAL(44, 787, 18) // "on_pb_back_clicked"

    },
    "MainWindow\0GetDateTime\0\0slotUserLogin\0"
    "id\0pswd\0slotUserNum\0slotUserNumX\0"
    "slotInsertUser\0res\0slotUpdateSqla\0"
    "slotInsertShop\0slotDeleteShop\0"
    "slotDeleteForm\0slotDeleteShopcart\0"
    "slotInsertForm\0slotInsertShopcart\0"
    "slotUpdateMerchant\0slotUpdateClient\0"
    "slotUpdateCommodity\0slotUpdateUserImage\0"
    "on_user_triggered\0on_first_triggered\0"
    "on_client_triggered\0on_merchant_triggered\0"
    "on_shop_triggered\0on_commodity_triggered\0"
    "on_actionPswdMS_triggered\0"
    "on_actionSortMS_triggered\0"
    "on_actionPhotoMS_triggered\0"
    "on_actionFormMS_triggered\0"
    "on_actionShopcartMS_triggered\0"
    "on_actionDialogMS_triggered\0"
    "on_pb_remove_clicked\0on_pb_quit_clicked\0"
    "on_pb_user_3_clicked\0on_pb_cli_3_clicked\0"
    "on_pb_mer_3_clicked\0on_pb_shop_3_clicked\0"
    "on_pb_com_3_clicked\0on_pb_pswd_3_clicked\0"
    "on_pb_form_3_clicked\0on_pb_cart_3_clicked\0"
    "on_pb_dia_3_clicked\0on_pb_back_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      40,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  214,    2, 0x0a /* Public */,
       3,    2,  215,    2, 0x0a /* Public */,
       6,    1,  220,    2, 0x0a /* Public */,
       7,    1,  223,    2, 0x0a /* Public */,
       8,    1,  226,    2, 0x0a /* Public */,
      10,    1,  229,    2, 0x0a /* Public */,
      11,    1,  232,    2, 0x0a /* Public */,
      12,    1,  235,    2, 0x0a /* Public */,
      13,    1,  238,    2, 0x0a /* Public */,
      14,    1,  241,    2, 0x0a /* Public */,
      15,    1,  244,    2, 0x0a /* Public */,
      16,    1,  247,    2, 0x0a /* Public */,
      17,    1,  250,    2, 0x0a /* Public */,
      18,    1,  253,    2, 0x0a /* Public */,
      19,    1,  256,    2, 0x0a /* Public */,
      20,    2,  259,    2, 0x0a /* Public */,
      21,    0,  264,    2, 0x08 /* Private */,
      22,    0,  265,    2, 0x08 /* Private */,
      23,    0,  266,    2, 0x08 /* Private */,
      24,    0,  267,    2, 0x08 /* Private */,
      25,    0,  268,    2, 0x08 /* Private */,
      26,    0,  269,    2, 0x08 /* Private */,
      27,    0,  270,    2, 0x08 /* Private */,
      28,    0,  271,    2, 0x08 /* Private */,
      29,    0,  272,    2, 0x08 /* Private */,
      30,    0,  273,    2, 0x08 /* Private */,
      31,    0,  274,    2, 0x08 /* Private */,
      32,    0,  275,    2, 0x08 /* Private */,
      33,    0,  276,    2, 0x08 /* Private */,
      34,    0,  277,    2, 0x08 /* Private */,
      35,    0,  278,    2, 0x08 /* Private */,
      36,    0,  279,    2, 0x08 /* Private */,
      37,    0,  280,    2, 0x08 /* Private */,
      38,    0,  281,    2, 0x08 /* Private */,
      39,    0,  282,    2, 0x08 /* Private */,
      40,    0,  283,    2, 0x08 /* Private */,
      41,    0,  284,    2, 0x08 /* Private */,
      42,    0,  285,    2, 0x08 /* Private */,
      43,    0,  286,    2, 0x08 /* Private */,
      44,    0,  287,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    4,    5,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    4,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->GetDateTime(); break;
        case 1: _t->slotUserLogin((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->slotUserNum((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->slotUserNumX((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->slotInsertUser((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->slotUpdateSqla((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->slotInsertShop((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->slotDeleteShop((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->slotDeleteForm((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->slotDeleteShopcart((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->slotInsertForm((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->slotInsertShopcart((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->slotUpdateMerchant((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->slotUpdateClient((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->slotUpdateCommodity((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->slotUpdateUserImage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 16: _t->on_user_triggered(); break;
        case 17: _t->on_first_triggered(); break;
        case 18: _t->on_client_triggered(); break;
        case 19: _t->on_merchant_triggered(); break;
        case 20: _t->on_shop_triggered(); break;
        case 21: _t->on_commodity_triggered(); break;
        case 22: _t->on_actionPswdMS_triggered(); break;
        case 23: _t->on_actionSortMS_triggered(); break;
        case 24: _t->on_actionPhotoMS_triggered(); break;
        case 25: _t->on_actionFormMS_triggered(); break;
        case 26: _t->on_actionShopcartMS_triggered(); break;
        case 27: _t->on_actionDialogMS_triggered(); break;
        case 28: _t->on_pb_remove_clicked(); break;
        case 29: _t->on_pb_quit_clicked(); break;
        case 30: _t->on_pb_user_3_clicked(); break;
        case 31: _t->on_pb_cli_3_clicked(); break;
        case 32: _t->on_pb_mer_3_clicked(); break;
        case 33: _t->on_pb_shop_3_clicked(); break;
        case 34: _t->on_pb_com_3_clicked(); break;
        case 35: _t->on_pb_pswd_3_clicked(); break;
        case 36: _t->on_pb_form_3_clicked(); break;
        case 37: _t->on_pb_cart_3_clicked(); break;
        case 38: _t->on_pb_dia_3_clicked(); break;
        case 39: _t->on_pb_back_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 40)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 40;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 40)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 40;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
