/****************************************************************************
** Meta object code from reading C++ file 'about_app.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../about_app/about_app.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'about_app.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_about_app_t {
    QByteArrayData data[19];
    char stringdata0[272];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_about_app_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_about_app_t qt_meta_stringdata_about_app = {
    {
QT_MOC_LITERAL(0, 0, 9), // "about_app"
QT_MOC_LITERAL(1, 10, 8), // "add_info"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 14), // "QList<QString>"
QT_MOC_LITERAL(4, 35, 8), // "name_app"
QT_MOC_LITERAL(5, 44, 20), // "on_login_dev_clicked"
QT_MOC_LITERAL(6, 65, 19), // "on_star_add_clicked"
QT_MOC_LITERAL(7, 85, 23), // "on_favorite_add_clicked"
QT_MOC_LITERAL(8, 109, 23), // "on_favorite_del_clicked"
QT_MOC_LITERAL(9, 133, 19), // "on_star_del_clicked"
QT_MOC_LITERAL(10, 153, 19), // "on_messages_clicked"
QT_MOC_LITERAL(11, 173, 16), // "on_close_clicked"
QT_MOC_LITERAL(12, 190, 15), // "on_hide_clicked"
QT_MOC_LITERAL(13, 206, 15), // "mousePressEvent"
QT_MOC_LITERAL(14, 222, 12), // "QMouseEvent*"
QT_MOC_LITERAL(15, 235, 5), // "event"
QT_MOC_LITERAL(16, 241, 14), // "mouseMoveEvent"
QT_MOC_LITERAL(17, 256, 9), // "get_views"
QT_MOC_LITERAL(18, 266, 5) // "login"

    },
    "about_app\0add_info\0\0QList<QString>\0"
    "name_app\0on_login_dev_clicked\0"
    "on_star_add_clicked\0on_favorite_add_clicked\0"
    "on_favorite_del_clicked\0on_star_del_clicked\0"
    "on_messages_clicked\0on_close_clicked\0"
    "on_hide_clicked\0mousePressEvent\0"
    "QMouseEvent*\0event\0mouseMoveEvent\0"
    "get_views\0login"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_about_app[] = {

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
       1,    1,   74,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    0,   80,    2, 0x08 /* Private */,
       9,    0,   81,    2, 0x08 /* Private */,
      10,    0,   82,    2, 0x08 /* Private */,
      11,    0,   83,    2, 0x08 /* Private */,
      12,    0,   84,    2, 0x08 /* Private */,
      13,    1,   85,    2, 0x08 /* Private */,
      16,    1,   88,    2, 0x08 /* Private */,
      17,    2,   91,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   18,    4,

       0        // eod
};

void about_app::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        about_app *_t = static_cast<about_app *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->add_info((*reinterpret_cast< QList<QString>(*)>(_a[1]))); break;
        case 1: _t->on_login_dev_clicked(); break;
        case 2: _t->on_star_add_clicked(); break;
        case 3: _t->on_favorite_add_clicked(); break;
        case 4: _t->on_favorite_del_clicked(); break;
        case 5: _t->on_star_del_clicked(); break;
        case 6: _t->on_messages_clicked(); break;
        case 7: _t->on_close_clicked(); break;
        case 8: _t->on_hide_clicked(); break;
        case 9: _t->mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 10: _t->mouseMoveEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 11: _t->get_views((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
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

const QMetaObject about_app::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_about_app.data,
      qt_meta_data_about_app,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *about_app::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *about_app::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_about_app.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int about_app::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
