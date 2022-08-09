/****************************************************************************
** Meta object code from reading C++ file 'tcpsocket.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../SalesSever/network/tcpsocket.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tcpsocket.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TcpSocket_t {
    QByteArrayData data[17];
    char stringdata0[175];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TcpSocket_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TcpSocket_t qt_meta_stringdata_TcpSocket = {
    {
QT_MOC_LITERAL(0, 0, 9), // "TcpSocket"
QT_MOC_LITERAL(1, 10, 20), // "signalRegisterSocket"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 2), // "id"
QT_MOC_LITERAL(4, 35, 10), // "TcpSocket*"
QT_MOC_LITERAL(5, 46, 6), // "socket"
QT_MOC_LITERAL(6, 53, 18), // "signalLogoutSocket"
QT_MOC_LITERAL(7, 72, 16), // "signalInsertUser"
QT_MOC_LITERAL(8, 89, 3), // "res"
QT_MOC_LITERAL(9, 93, 21), // "signalUpdateUserImage"
QT_MOC_LITERAL(10, 115, 13), // "slotReadyRead"
QT_MOC_LITERAL(11, 129, 9), // "slotImage"
QT_MOC_LITERAL(12, 139, 4), // "imid"
QT_MOC_LITERAL(13, 144, 10), // "slotImagep"
QT_MOC_LITERAL(14, 155, 3), // "mid"
QT_MOC_LITERAL(15, 159, 11), // "slotSendMsg"
QT_MOC_LITERAL(16, 171, 3) // "msg"

    },
    "TcpSocket\0signalRegisterSocket\0\0id\0"
    "TcpSocket*\0socket\0signalLogoutSocket\0"
    "signalInsertUser\0res\0signalUpdateUserImage\0"
    "slotReadyRead\0slotImage\0imid\0slotImagep\0"
    "mid\0slotSendMsg\0msg"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TcpSocket[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   54,    2, 0x06 /* Public */,
       6,    2,   59,    2, 0x06 /* Public */,
       7,    1,   64,    2, 0x06 /* Public */,
       9,    2,   67,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   72,    2, 0x0a /* Public */,
      11,    2,   73,    2, 0x0a /* Public */,
      13,    1,   78,    2, 0x0a /* Public */,
      15,    1,   81,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,   12,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Bool, QMetaType::QString,   16,

       0        // eod
};

void TcpSocket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TcpSocket *_t = static_cast<TcpSocket *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalRegisterSocket((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< TcpSocket*(*)>(_a[2]))); break;
        case 1: _t->signalLogoutSocket((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< TcpSocket*(*)>(_a[2]))); break;
        case 2: _t->signalInsertUser((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->signalUpdateUserImage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->slotReadyRead(); break;
        case 5: _t->slotImage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->slotImagep((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: { bool _r = _t->slotSendMsg((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< TcpSocket* >(); break;
            }
            break;
        case 1:
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
            typedef void (TcpSocket::*_t)(QString , TcpSocket * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TcpSocket::signalRegisterSocket)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (TcpSocket::*_t)(QString , TcpSocket * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TcpSocket::signalLogoutSocket)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (TcpSocket::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TcpSocket::signalInsertUser)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (TcpSocket::*_t)(QString , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TcpSocket::signalUpdateUserImage)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject TcpSocket::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TcpSocket.data,
      qt_meta_data_TcpSocket,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TcpSocket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TcpSocket::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TcpSocket.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TcpSocket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void TcpSocket::signalRegisterSocket(QString _t1, TcpSocket * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TcpSocket::signalLogoutSocket(QString _t1, TcpSocket * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TcpSocket::signalInsertUser(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void TcpSocket::signalUpdateUserImage(QString _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
