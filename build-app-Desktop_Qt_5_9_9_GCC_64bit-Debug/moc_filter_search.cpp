/****************************************************************************
** Meta object code from reading C++ file 'filter_search.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../filter_search/filter_search.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filter_search.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_filter_search_t {
    QByteArrayData data[14];
    char stringdata0[269];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_filter_search_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_filter_search_t qt_meta_stringdata_filter_search = {
    {
QT_MOC_LITERAL(0, 0, 13), // "filter_search"
QT_MOC_LITERAL(1, 14, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(4, 61, 23), // "on_pushButton_8_clicked"
QT_MOC_LITERAL(5, 85, 23), // "on_pushButton_9_clicked"
QT_MOC_LITERAL(6, 109, 25), // "on_lineEdit_returnPressed"
QT_MOC_LITERAL(7, 135, 27), // "on_lineEdit_2_returnPressed"
QT_MOC_LITERAL(8, 163, 27), // "on_lineEdit_3_returnPressed"
QT_MOC_LITERAL(9, 191, 27), // "on_lineEdit_4_returnPressed"
QT_MOC_LITERAL(10, 219, 15), // "mousePressEvent"
QT_MOC_LITERAL(11, 235, 12), // "QMouseEvent*"
QT_MOC_LITERAL(12, 248, 5), // "event"
QT_MOC_LITERAL(13, 254, 14) // "mouseMoveEvent"

    },
    "filter_search\0on_pushButton_clicked\0"
    "\0on_pushButton_2_clicked\0"
    "on_pushButton_8_clicked\0on_pushButton_9_clicked\0"
    "on_lineEdit_returnPressed\0"
    "on_lineEdit_2_returnPressed\0"
    "on_lineEdit_3_returnPressed\0"
    "on_lineEdit_4_returnPressed\0mousePressEvent\0"
    "QMouseEvent*\0event\0mouseMoveEvent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_filter_search[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    1,   72,    2, 0x08 /* Private */,
      13,    1,   75,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   12,

       0        // eod
};

void filter_search::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        filter_search *_t = static_cast<filter_search *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_pushButton_2_clicked(); break;
        case 2: _t->on_pushButton_8_clicked(); break;
        case 3: _t->on_pushButton_9_clicked(); break;
        case 4: _t->on_lineEdit_returnPressed(); break;
        case 5: _t->on_lineEdit_2_returnPressed(); break;
        case 6: _t->on_lineEdit_3_returnPressed(); break;
        case 7: _t->on_lineEdit_4_returnPressed(); break;
        case 8: _t->mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 9: _t->mouseMoveEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject filter_search::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_filter_search.data,
      qt_meta_data_filter_search,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *filter_search::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *filter_search::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_filter_search.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int filter_search::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
