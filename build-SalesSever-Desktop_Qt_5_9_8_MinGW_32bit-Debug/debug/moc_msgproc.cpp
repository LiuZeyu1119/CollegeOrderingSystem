/****************************************************************************
** Meta object code from reading C++ file 'msgproc.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../SalesSever/network/msgproc.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'msgproc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MsgProc_t {
    QByteArrayData data[20];
    char stringdata0[264];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MsgProc_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MsgProc_t qt_meta_stringdata_MsgProc = {
    {
QT_MOC_LITERAL(0, 0, 7), // "MsgProc"
QT_MOC_LITERAL(1, 8, 21), // "signalSendMsgToClient"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 2), // "id"
QT_MOC_LITERAL(4, 34, 3), // "msg"
QT_MOC_LITERAL(5, 38, 11), // "signalImage"
QT_MOC_LITERAL(6, 50, 4), // "imid"
QT_MOC_LITERAL(7, 55, 12), // "signalImagep"
QT_MOC_LITERAL(8, 68, 3), // "mid"
QT_MOC_LITERAL(9, 72, 15), // "signalUpdateSql"
QT_MOC_LITERAL(10, 88, 3), // "res"
QT_MOC_LITERAL(11, 92, 16), // "signalInsertShop"
QT_MOC_LITERAL(12, 109, 16), // "signalDeleteShop"
QT_MOC_LITERAL(13, 126, 16), // "signalDeleteForm"
QT_MOC_LITERAL(14, 143, 20), // "signalDeleteShopcart"
QT_MOC_LITERAL(15, 164, 16), // "signalInsertForm"
QT_MOC_LITERAL(16, 181, 20), // "signalInsertShopcart"
QT_MOC_LITERAL(17, 202, 20), // "signalUpdateMerchant"
QT_MOC_LITERAL(18, 223, 18), // "signalUpdateClient"
QT_MOC_LITERAL(19, 242, 21) // "signalUpdateCommodity"

    },
    "MsgProc\0signalSendMsgToClient\0\0id\0msg\0"
    "signalImage\0imid\0signalImagep\0mid\0"
    "signalUpdateSql\0res\0signalInsertShop\0"
    "signalDeleteShop\0signalDeleteForm\0"
    "signalDeleteShopcart\0signalInsertForm\0"
    "signalInsertShopcart\0signalUpdateMerchant\0"
    "signalUpdateClient\0signalUpdateCommodity"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MsgProc[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   79,    2, 0x06 /* Public */,
       5,    2,   84,    2, 0x06 /* Public */,
       7,    2,   89,    2, 0x06 /* Public */,
       9,    1,   94,    2, 0x06 /* Public */,
      11,    1,   97,    2, 0x06 /* Public */,
      12,    1,  100,    2, 0x06 /* Public */,
      13,    1,  103,    2, 0x06 /* Public */,
      14,    1,  106,    2, 0x06 /* Public */,
      15,    1,  109,    2, 0x06 /* Public */,
      16,    1,  112,    2, 0x06 /* Public */,
      17,    1,  115,    2, 0x06 /* Public */,
      18,    1,  118,    2, 0x06 /* Public */,
      19,    1,  121,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    8,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,

       0        // eod
};

void MsgProc::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MsgProc *_t = static_cast<MsgProc *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalSendMsgToClient((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->signalImage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->signalImagep((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->signalUpdateSql((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->signalInsertShop((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->signalDeleteShop((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->signalDeleteForm((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->signalDeleteShopcart((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->signalInsertForm((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->signalInsertShopcart((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->signalUpdateMerchant((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->signalUpdateClient((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->signalUpdateCommodity((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (MsgProc::*_t)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MsgProc::signalSendMsgToClient)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MsgProc::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MsgProc::signalImage)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MsgProc::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MsgProc::signalImagep)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (MsgProc::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MsgProc::signalUpdateSql)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (MsgProc::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MsgProc::signalInsertShop)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (MsgProc::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MsgProc::signalDeleteShop)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (MsgProc::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MsgProc::signalDeleteForm)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (MsgProc::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MsgProc::signalDeleteShopcart)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (MsgProc::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MsgProc::signalInsertForm)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (MsgProc::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MsgProc::signalInsertShopcart)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (MsgProc::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MsgProc::signalUpdateMerchant)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (MsgProc::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MsgProc::signalUpdateClient)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (MsgProc::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MsgProc::signalUpdateCommodity)) {
                *result = 12;
                return;
            }
        }
    }
}

const QMetaObject MsgProc::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_MsgProc.data,
      qt_meta_data_MsgProc,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MsgProc::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MsgProc::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MsgProc.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int MsgProc::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void MsgProc::signalSendMsgToClient(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MsgProc::signalImage(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MsgProc::signalImagep(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MsgProc::signalUpdateSql(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MsgProc::signalInsertShop(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MsgProc::signalDeleteShop(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MsgProc::signalDeleteForm(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MsgProc::signalDeleteShopcart(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void MsgProc::signalInsertForm(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void MsgProc::signalInsertShopcart(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void MsgProc::signalUpdateMerchant(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void MsgProc::signalUpdateClient(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void MsgProc::signalUpdateCommodity(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
