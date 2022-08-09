/****************************************************************************
** Meta object code from reading C++ file 'tcpsever.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../SalesSever/network/tcpsever.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tcpsever.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TcpSever_t {
    QByteArrayData data[41];
    char stringdata0[627];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TcpSever_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TcpSever_t qt_meta_stringdata_TcpSever = {
    {
QT_MOC_LITERAL(0, 0, 8), // "TcpSever"
QT_MOC_LITERAL(1, 9, 16), // "signalInsertUser"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 3), // "res"
QT_MOC_LITERAL(4, 31, 16), // "signalUpdateSqla"
QT_MOC_LITERAL(5, 48, 16), // "signalInsertShop"
QT_MOC_LITERAL(6, 65, 16), // "signalDeleteShop"
QT_MOC_LITERAL(7, 82, 16), // "signalDeleteForm"
QT_MOC_LITERAL(8, 99, 20), // "signalDeleteShopcart"
QT_MOC_LITERAL(9, 120, 16), // "signalInsertForm"
QT_MOC_LITERAL(10, 137, 20), // "signalInsertShopcart"
QT_MOC_LITERAL(11, 158, 20), // "signalUpdateMerchant"
QT_MOC_LITERAL(12, 179, 18), // "signalUpdateClient"
QT_MOC_LITERAL(13, 198, 21), // "signalUpdateCommodity"
QT_MOC_LITERAL(14, 220, 21), // "signalUpdateUserImage"
QT_MOC_LITERAL(15, 242, 2), // "id"
QT_MOC_LITERAL(16, 245, 13), // "signalUserNum"
QT_MOC_LITERAL(17, 259, 14), // "signalUserNumX"
QT_MOC_LITERAL(18, 274, 17), // "slotNewConnection"
QT_MOC_LITERAL(19, 292, 18), // "slotRegisterSocket"
QT_MOC_LITERAL(20, 311, 10), // "TcpSocket*"
QT_MOC_LITERAL(21, 322, 6), // "socket"
QT_MOC_LITERAL(22, 329, 16), // "slotLogoutSocket"
QT_MOC_LITERAL(23, 346, 19), // "slotSendMsgToClient"
QT_MOC_LITERAL(24, 366, 3), // "msg"
QT_MOC_LITERAL(25, 370, 21), // "slotSendImageToClient"
QT_MOC_LITERAL(26, 392, 4), // "imid"
QT_MOC_LITERAL(27, 397, 22), // "slotSendImagepToClient"
QT_MOC_LITERAL(28, 420, 3), // "mid"
QT_MOC_LITERAL(29, 424, 14), // "slotInsertUser"
QT_MOC_LITERAL(30, 439, 13), // "slotUpdateSql"
QT_MOC_LITERAL(31, 453, 14), // "slotInsertShop"
QT_MOC_LITERAL(32, 468, 14), // "slotDeleteShop"
QT_MOC_LITERAL(33, 483, 14), // "slotDeleteForm"
QT_MOC_LITERAL(34, 498, 18), // "slotDeleteShopcart"
QT_MOC_LITERAL(35, 517, 14), // "slotInsertForm"
QT_MOC_LITERAL(36, 532, 18), // "slotInsertShopcart"
QT_MOC_LITERAL(37, 551, 18), // "slotUpdateMerchant"
QT_MOC_LITERAL(38, 570, 16), // "slotUpdateClient"
QT_MOC_LITERAL(39, 587, 19), // "slotUpdateCommodity"
QT_MOC_LITERAL(40, 607, 19) // "slotUpdateUserImage"

    },
    "TcpSever\0signalInsertUser\0\0res\0"
    "signalUpdateSqla\0signalInsertShop\0"
    "signalDeleteShop\0signalDeleteForm\0"
    "signalDeleteShopcart\0signalInsertForm\0"
    "signalInsertShopcart\0signalUpdateMerchant\0"
    "signalUpdateClient\0signalUpdateCommodity\0"
    "signalUpdateUserImage\0id\0signalUserNum\0"
    "signalUserNumX\0slotNewConnection\0"
    "slotRegisterSocket\0TcpSocket*\0socket\0"
    "slotLogoutSocket\0slotSendMsgToClient\0"
    "msg\0slotSendImageToClient\0imid\0"
    "slotSendImagepToClient\0mid\0slotInsertUser\0"
    "slotUpdateSql\0slotInsertShop\0"
    "slotDeleteShop\0slotDeleteForm\0"
    "slotDeleteShopcart\0slotInsertForm\0"
    "slotInsertShopcart\0slotUpdateMerchant\0"
    "slotUpdateClient\0slotUpdateCommodity\0"
    "slotUpdateUserImage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TcpSever[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      32,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  174,    2, 0x06 /* Public */,
       4,    1,  177,    2, 0x06 /* Public */,
       5,    1,  180,    2, 0x06 /* Public */,
       6,    1,  183,    2, 0x06 /* Public */,
       7,    1,  186,    2, 0x06 /* Public */,
       8,    1,  189,    2, 0x06 /* Public */,
       9,    1,  192,    2, 0x06 /* Public */,
      10,    1,  195,    2, 0x06 /* Public */,
      11,    1,  198,    2, 0x06 /* Public */,
      12,    1,  201,    2, 0x06 /* Public */,
      13,    1,  204,    2, 0x06 /* Public */,
      14,    2,  207,    2, 0x06 /* Public */,
      16,    1,  212,    2, 0x06 /* Public */,
      17,    1,  215,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      18,    0,  218,    2, 0x0a /* Public */,
      19,    2,  219,    2, 0x0a /* Public */,
      22,    2,  224,    2, 0x0a /* Public */,
      23,    2,  229,    2, 0x0a /* Public */,
      25,    2,  234,    2, 0x0a /* Public */,
      27,    2,  239,    2, 0x0a /* Public */,
      29,    1,  244,    2, 0x0a /* Public */,
      30,    1,  247,    2, 0x0a /* Public */,
      31,    1,  250,    2, 0x0a /* Public */,
      32,    1,  253,    2, 0x0a /* Public */,
      33,    1,  256,    2, 0x0a /* Public */,
      34,    1,  259,    2, 0x0a /* Public */,
      35,    1,  262,    2, 0x0a /* Public */,
      36,    1,  265,    2, 0x0a /* Public */,
      37,    1,  268,    2, 0x0a /* Public */,
      38,    1,  271,    2, 0x0a /* Public */,
      39,    1,  274,    2, 0x0a /* Public */,
      40,    2,  277,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   15,    3,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::QString,   15,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 20,   15,   21,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 20,   15,   21,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   15,   24,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   15,   26,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   15,   28,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   15,    3,

       0        // eod
};

void TcpSever::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TcpSever *_t = static_cast<TcpSever *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalInsertUser((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->signalUpdateSqla((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->signalInsertShop((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->signalDeleteShop((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->signalDeleteForm((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->signalDeleteShopcart((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->signalInsertForm((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->signalInsertShopcart((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->signalUpdateMerchant((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->signalUpdateClient((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->signalUpdateCommodity((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->signalUpdateUserImage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 12: _t->signalUserNum((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->signalUserNumX((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 14: _t->slotNewConnection(); break;
        case 15: _t->slotRegisterSocket((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< TcpSocket*(*)>(_a[2]))); break;
        case 16: _t->slotLogoutSocket((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< TcpSocket*(*)>(_a[2]))); break;
        case 17: _t->slotSendMsgToClient((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 18: _t->slotSendImageToClient((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 19: _t->slotSendImagepToClient((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 20: _t->slotInsertUser((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->slotUpdateSql((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->slotInsertShop((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->slotDeleteShop((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->slotDeleteForm((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->slotDeleteShopcart((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: _t->slotInsertForm((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 27: _t->slotInsertShopcart((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 28: _t->slotUpdateMerchant((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 29: _t->slotUpdateClient((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 30: _t->slotUpdateCommodity((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 31: _t->slotUpdateUserImage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< TcpSocket* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< TcpSocket* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (TcpSever::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TcpSever::signalInsertUser)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (TcpSever::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TcpSever::signalUpdateSqla)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (TcpSever::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TcpSever::signalInsertShop)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (TcpSever::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TcpSever::signalDeleteShop)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (TcpSever::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TcpSever::signalDeleteForm)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (TcpSever::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TcpSever::signalDeleteShopcart)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (TcpSever::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TcpSever::signalInsertForm)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (TcpSever::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TcpSever::signalInsertShopcart)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (TcpSever::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TcpSever::signalUpdateMerchant)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (TcpSever::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TcpSever::signalUpdateClient)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (TcpSever::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TcpSever::signalUpdateCommodity)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (TcpSever::*_t)(QString , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TcpSever::signalUpdateUserImage)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (TcpSever::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TcpSever::signalUserNum)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (TcpSever::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TcpSever::signalUserNumX)) {
                *result = 13;
                return;
            }
        }
    }
}

const QMetaObject TcpSever::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TcpSever.data,
      qt_meta_data_TcpSever,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TcpSever::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TcpSever::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TcpSever.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TcpSever::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    }
    return _id;
}

// SIGNAL 0
void TcpSever::signalInsertUser(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TcpSever::signalUpdateSqla(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TcpSever::signalInsertShop(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void TcpSever::signalDeleteShop(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void TcpSever::signalDeleteForm(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void TcpSever::signalDeleteShopcart(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void TcpSever::signalInsertForm(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void TcpSever::signalInsertShopcart(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void TcpSever::signalUpdateMerchant(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void TcpSever::signalUpdateClient(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void TcpSever::signalUpdateCommodity(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void TcpSever::signalUpdateUserImage(QString _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void TcpSever::signalUserNum(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void TcpSever::signalUserNumX(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
