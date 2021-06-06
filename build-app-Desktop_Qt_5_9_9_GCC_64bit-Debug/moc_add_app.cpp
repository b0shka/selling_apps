/****************************************************************************
** Meta object code from reading C++ file 'add_app.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../add_app/add_app.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'add_app.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_add_app_t {
    QByteArrayData data[19];
    char stringdata0[338];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_add_app_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_add_app_t qt_meta_stringdata_add_app = {
    {
QT_MOC_LITERAL(0, 0, 7), // "add_app"
QT_MOC_LITERAL(1, 8, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(4, 55, 23), // "on_pushButton_8_clicked"
QT_MOC_LITERAL(5, 79, 23), // "on_pushButton_9_clicked"
QT_MOC_LITERAL(6, 103, 24), // "on_pushButton_10_clicked"
QT_MOC_LITERAL(7, 128, 24), // "on_pushButton_11_clicked"
QT_MOC_LITERAL(8, 153, 24), // "on_pushButton_12_clicked"
QT_MOC_LITERAL(9, 178, 25), // "on_lineEdit_returnPressed"
QT_MOC_LITERAL(10, 204, 27), // "on_lineEdit_2_returnPressed"
QT_MOC_LITERAL(11, 232, 27), // "on_lineEdit_3_returnPressed"
QT_MOC_LITERAL(12, 260, 15), // "mousePressEvent"
QT_MOC_LITERAL(13, 276, 12), // "QMouseEvent*"
QT_MOC_LITERAL(14, 289, 5), // "event"
QT_MOC_LITERAL(15, 295, 14), // "mouseMoveEvent"
QT_MOC_LITERAL(16, 310, 11), // "eventFilter"
QT_MOC_LITERAL(17, 322, 7), // "watched"
QT_MOC_LITERAL(18, 330, 7) // "QEvent*"

    },
    "add_app\0on_pushButton_clicked\0\0"
    "on_pushButton_2_clicked\0on_pushButton_8_clicked\0"
    "on_pushButton_9_clicked\0"
    "on_pushButton_10_clicked\0"
    "on_pushButton_11_clicked\0"
    "on_pushButton_12_clicked\0"
    "on_lineEdit_returnPressed\0"
    "on_lineEdit_2_returnPressed\0"
    "on_lineEdit_3_returnPressed\0mousePressEvent\0"
    "QMouseEvent*\0event\0mouseMoveEvent\0"
    "eventFilter\0watched\0QEvent*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_add_app[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    0,   85,    2, 0x08 /* Private */,
       9,    0,   86,    2, 0x08 /* Private */,
      10,    0,   87,    2, 0x08 /* Private */,
      11,    0,   88,    2, 0x08 /* Private */,
      12,    1,   89,    2, 0x08 /* Private */,
      15,    1,   92,    2, 0x08 /* Private */,
      16,    2,   95,    2, 0x08 /* Private */,

 // slots: parameters
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
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Bool, QMetaType::QObjectStar, 0x80000000 | 18,   17,   14,

       0        // eod
};

void add_app::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        add_app *_t = static_cast<add_app *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_pushButton_2_clicked(); break;
        case 2: _t->on_pushButton_8_clicked(); break;
        case 3: _t->on_pushButton_9_clicked(); break;
        case 4: _t->on_pushButton_10_clicked(); break;
        case 5: _t->on_pushButton_11_clicked(); break;
        case 6: _t->on_pushButton_12_clicked(); break;
        case 7: _t->on_lineEdit_returnPressed(); break;
        case 8: _t->on_lineEdit_2_returnPressed(); break;
        case 9: _t->on_lineEdit_3_returnPressed(); break;
        case 10: _t->mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 11: _t->mouseMoveEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 12: { bool _r = _t->eventFilter((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject add_app::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_add_app.data,
      qt_meta_data_add_app,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *add_app::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *add_app::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_add_app.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int add_app::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
