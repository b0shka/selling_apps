/****************************************************************************
** Meta object code from reading C++ file 'profile.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../profile/profile.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'profile.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_profile_t {
    QByteArrayData data[16];
    char stringdata0[300];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_profile_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_profile_t qt_meta_stringdata_profile = {
    {
QT_MOC_LITERAL(0, 0, 7), // "profile"
QT_MOC_LITERAL(1, 8, 16), // "get_info_from_db"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(4, 48, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(5, 72, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(6, 96, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(7, 120, 23), // "on_pushButton_8_clicked"
QT_MOC_LITERAL(8, 144, 23), // "on_pushButton_9_clicked"
QT_MOC_LITERAL(9, 168, 25), // "on_lineEdit_returnPressed"
QT_MOC_LITERAL(10, 194, 27), // "on_lineEdit_2_returnPressed"
QT_MOC_LITERAL(11, 222, 27), // "on_lineEdit_3_returnPressed"
QT_MOC_LITERAL(12, 250, 15), // "mousePressEvent"
QT_MOC_LITERAL(13, 266, 12), // "QMouseEvent*"
QT_MOC_LITERAL(14, 279, 5), // "event"
QT_MOC_LITERAL(15, 285, 14) // "mouseMoveEvent"

    },
    "profile\0get_info_from_db\0\0"
    "on_pushButton_clicked\0on_pushButton_2_clicked\0"
    "on_pushButton_3_clicked\0on_pushButton_4_clicked\0"
    "on_pushButton_8_clicked\0on_pushButton_9_clicked\0"
    "on_lineEdit_returnPressed\0"
    "on_lineEdit_2_returnPressed\0"
    "on_lineEdit_3_returnPressed\0mousePressEvent\0"
    "QMouseEvent*\0event\0mouseMoveEvent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_profile[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    0,   80,    2, 0x08 /* Private */,
       9,    0,   81,    2, 0x08 /* Private */,
      10,    0,   82,    2, 0x08 /* Private */,
      11,    0,   83,    2, 0x08 /* Private */,
      12,    1,   84,    2, 0x08 /* Private */,
      15,    1,   87,    2, 0x08 /* Private */,

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

       0        // eod
};

void profile::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        profile *_t = static_cast<profile *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->get_info_from_db(); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->on_pushButton_2_clicked(); break;
        case 3: _t->on_pushButton_3_clicked(); break;
        case 4: _t->on_pushButton_4_clicked(); break;
        case 5: _t->on_pushButton_8_clicked(); break;
        case 6: _t->on_pushButton_9_clicked(); break;
        case 7: _t->on_lineEdit_returnPressed(); break;
        case 8: _t->on_lineEdit_2_returnPressed(); break;
        case 9: _t->on_lineEdit_3_returnPressed(); break;
        case 10: _t->mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 11: _t->mouseMoveEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject profile::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_profile.data,
      qt_meta_data_profile,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *profile::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *profile::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_profile.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int profile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE