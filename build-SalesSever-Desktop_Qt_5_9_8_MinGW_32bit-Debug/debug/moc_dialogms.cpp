/****************************************************************************
** Meta object code from reading C++ file 'dialogms.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../SalesSever/saleswidget/dialogms.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialogms.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DialogMS_t {
    QByteArrayData data[11];
    char stringdata0[195];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DialogMS_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DialogMS_t qt_meta_stringdata_DialogMS = {
    {
QT_MOC_LITERAL(0, 0, 8), // "DialogMS"
QT_MOC_LITERAL(1, 9, 31), // "on_comboBox_currentIndexChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 5), // "index"
QT_MOC_LITERAL(4, 48, 22), // "on_tableWidget_clicked"
QT_MOC_LITERAL(5, 71, 20), // "on_pb_select_clicked"
QT_MOC_LITERAL(6, 92, 20), // "on_pb_update_clicked"
QT_MOC_LITERAL(7, 113, 20), // "on_pb_delete_clicked"
QT_MOC_LITERAL(8, 134, 20), // "on_pb_insert_clicked"
QT_MOC_LITERAL(9, 155, 20), // "on_pb_cancel_clicked"
QT_MOC_LITERAL(10, 176, 18) // "on_pb_save_clicked"

    },
    "DialogMS\0on_comboBox_currentIndexChanged\0"
    "\0index\0on_tableWidget_clicked\0"
    "on_pb_select_clicked\0on_pb_update_clicked\0"
    "on_pb_delete_clicked\0on_pb_insert_clicked\0"
    "on_pb_cancel_clicked\0on_pb_save_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DialogMS[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x0a /* Public */,
       4,    1,   57,    2, 0x0a /* Public */,
       5,    0,   60,    2, 0x0a /* Public */,
       6,    0,   61,    2, 0x0a /* Public */,
       7,    0,   62,    2, 0x0a /* Public */,
       8,    0,   63,    2, 0x0a /* Public */,
       9,    0,   64,    2, 0x0a /* Public */,
      10,    0,   65,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DialogMS::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DialogMS *_t = static_cast<DialogMS *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_comboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_tableWidget_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->on_pb_select_clicked(); break;
        case 3: _t->on_pb_update_clicked(); break;
        case 4: _t->on_pb_delete_clicked(); break;
        case 5: _t->on_pb_insert_clicked(); break;
        case 6: _t->on_pb_cancel_clicked(); break;
        case 7: _t->on_pb_save_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject DialogMS::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_DialogMS.data,
      qt_meta_data_DialogMS,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DialogMS::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DialogMS::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DialogMS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int DialogMS::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
