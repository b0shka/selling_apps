/****************************************************************************
** Meta object code from reading C++ file 'user_apps.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../user_apps/user_apps.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'user_apps.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_user_apps_t {
    QByteArrayData data[8];
    char stringdata0[113];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_user_apps_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_user_apps_t qt_meta_stringdata_user_apps = {
    {
QT_MOC_LITERAL(0, 0, 9), // "user_apps"
QT_MOC_LITERAL(1, 10, 22), // "add_apps_to_listWidget"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 14), // "QList<QString>"
QT_MOC_LITERAL(4, 49, 9), // "list_apps"
QT_MOC_LITERAL(5, 59, 31), // "on_listWidget_itemDoubleClicked"
QT_MOC_LITERAL(6, 91, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(7, 108, 4) // "item"

    },
    "user_apps\0add_apps_to_listWidget\0\0"
    "QList<QString>\0list_apps\0"
    "on_listWidget_itemDoubleClicked\0"
    "QListWidgetItem*\0item"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_user_apps[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x08 /* Private */,
       5,    1,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void user_apps::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        user_apps *_t = static_cast<user_apps *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->add_apps_to_listWidget((*reinterpret_cast< QList<QString>(*)>(_a[1]))); break;
        case 1: _t->on_listWidget_itemDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QString> >(); break;
            }
            break;
        }
    }
}

const QMetaObject user_apps::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_user_apps.data,
      qt_meta_data_user_apps,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *user_apps::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *user_apps::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_user_apps.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int user_apps::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
