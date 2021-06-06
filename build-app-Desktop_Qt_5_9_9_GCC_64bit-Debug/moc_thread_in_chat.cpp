/****************************************************************************
** Meta object code from reading C++ file 'thread_in_chat.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../chat/thread_in_chat.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'thread_in_chat.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_thread_in_chat_t {
    QByteArrayData data[21];
    char stringdata0[229];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_thread_in_chat_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_thread_in_chat_t qt_meta_stringdata_thread_in_chat = {
    {
QT_MOC_LITERAL(0, 0, 14), // "thread_in_chat"
QT_MOC_LITERAL(1, 15, 8), // "finished"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 7), // "add_msg"
QT_MOC_LITERAL(4, 33, 7), // "message"
QT_MOC_LITERAL(5, 41, 12), // "add_send_msg"
QT_MOC_LITERAL(6, 54, 11), // "add_all_msg"
QT_MOC_LITERAL(7, 66, 11), // "add_new_msg"
QT_MOC_LITERAL(8, 78, 10), // "add_online"
QT_MOC_LITERAL(9, 89, 16), // "login_devChanged"
QT_MOC_LITERAL(10, 106, 9), // "login_dev"
QT_MOC_LITERAL(11, 116, 16), // "id_serverChanged"
QT_MOC_LITERAL(12, 133, 9), // "id_server"
QT_MOC_LITERAL(13, 143, 14), // "messageChanged"
QT_MOC_LITERAL(14, 158, 3), // "run"
QT_MOC_LITERAL(15, 162, 7), // "sending"
QT_MOC_LITERAL(16, 170, 8), // "add_ingo"
QT_MOC_LITERAL(17, 179, 12), // "check_online"
QT_MOC_LITERAL(18, 192, 12), // "setLogin_dev"
QT_MOC_LITERAL(19, 205, 12), // "setId_server"
QT_MOC_LITERAL(20, 218, 10) // "setMessage"

    },
    "thread_in_chat\0finished\0\0add_msg\0"
    "message\0add_send_msg\0add_all_msg\0"
    "add_new_msg\0add_online\0login_devChanged\0"
    "login_dev\0id_serverChanged\0id_server\0"
    "messageChanged\0run\0sending\0add_ingo\0"
    "check_online\0setLogin_dev\0setId_server\0"
    "setMessage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_thread_in_chat[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       3,  132, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x06 /* Public */,
       3,    1,   95,    2, 0x06 /* Public */,
       5,    1,   98,    2, 0x06 /* Public */,
       6,    1,  101,    2, 0x06 /* Public */,
       7,    1,  104,    2, 0x06 /* Public */,
       8,    1,  107,    2, 0x06 /* Public */,
       9,    1,  110,    2, 0x06 /* Public */,
      11,    1,  113,    2, 0x06 /* Public */,
      13,    1,  116,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    0,  119,    2, 0x0a /* Public */,
      15,    0,  120,    2, 0x0a /* Public */,
      16,    0,  121,    2, 0x0a /* Public */,
      17,    0,  122,    2, 0x0a /* Public */,
      18,    1,  123,    2, 0x0a /* Public */,
      19,    1,  126,    2, 0x0a /* Public */,
      20,    1,  129,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::QString,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::QString,    4,

 // properties: name, type, flags
      10, QMetaType::QString, 0x00495103,
      12, QMetaType::Int, 0x00495103,
       4, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       6,
       7,
       8,

       0        // eod
};

void thread_in_chat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        thread_in_chat *_t = static_cast<thread_in_chat *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->add_msg((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->add_send_msg((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->add_all_msg((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->add_new_msg((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->add_online((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->login_devChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->id_serverChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->messageChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->run(); break;
        case 10: _t->sending(); break;
        case 11: _t->add_ingo(); break;
        case 12: _t->check_online(); break;
        case 13: _t->setLogin_dev((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 14: _t->setId_server((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->setMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (thread_in_chat::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&thread_in_chat::finished)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (thread_in_chat::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&thread_in_chat::add_msg)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (thread_in_chat::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&thread_in_chat::add_send_msg)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (thread_in_chat::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&thread_in_chat::add_all_msg)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (thread_in_chat::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&thread_in_chat::add_new_msg)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (thread_in_chat::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&thread_in_chat::add_online)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (thread_in_chat::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&thread_in_chat::login_devChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (thread_in_chat::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&thread_in_chat::id_serverChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (thread_in_chat::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&thread_in_chat::messageChanged)) {
                *result = 8;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        thread_in_chat *_t = static_cast<thread_in_chat *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->login_dev(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->id_server(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->message(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        thread_in_chat *_t = static_cast<thread_in_chat *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLogin_dev(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setId_server(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setMessage(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject thread_in_chat::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_thread_in_chat.data,
      qt_meta_data_thread_in_chat,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *thread_in_chat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *thread_in_chat::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_thread_in_chat.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int thread_in_chat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void thread_in_chat::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void thread_in_chat::add_msg(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void thread_in_chat::add_send_msg(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void thread_in_chat::add_all_msg(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void thread_in_chat::add_new_msg(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void thread_in_chat::add_online(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void thread_in_chat::login_devChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void thread_in_chat::id_serverChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void thread_in_chat::messageChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
