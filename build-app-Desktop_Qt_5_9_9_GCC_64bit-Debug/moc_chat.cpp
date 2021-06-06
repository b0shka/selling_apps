/****************************************************************************
** Meta object code from reading C++ file 'chat.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../chat/chat.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chat.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_chat_t {
    QByteArrayData data[24];
    char stringdata0[393];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_chat_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_chat_t qt_meta_stringdata_chat = {
    {
QT_MOC_LITERAL(0, 0, 4), // "chat"
QT_MOC_LITERAL(1, 5, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(4, 52, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(5, 76, 23), // "on_pushButton_8_clicked"
QT_MOC_LITERAL(6, 100, 23), // "on_pushButton_9_clicked"
QT_MOC_LITERAL(7, 124, 27), // "on_lineEdit_3_returnPressed"
QT_MOC_LITERAL(8, 152, 15), // "mousePressEvent"
QT_MOC_LITERAL(9, 168, 12), // "QMouseEvent*"
QT_MOC_LITERAL(10, 181, 5), // "event"
QT_MOC_LITERAL(11, 187, 14), // "mouseMoveEvent"
QT_MOC_LITERAL(12, 202, 25), // "add_message_to_listwidget"
QT_MOC_LITERAL(13, 228, 7), // "message"
QT_MOC_LITERAL(14, 236, 23), // "add_message_from_server"
QT_MOC_LITERAL(15, 260, 12), // "restore_chat"
QT_MOC_LITERAL(16, 273, 11), // "all_message"
QT_MOC_LITERAL(17, 285, 20), // "restore_new_messages"
QT_MOC_LITERAL(18, 306, 12), // "new_messages"
QT_MOC_LITERAL(19, 319, 25), // "on_listWidget_itemClicked"
QT_MOC_LITERAL(20, 345, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(21, 362, 4), // "item"
QT_MOC_LITERAL(22, 367, 18), // "add_online_in_chat"
QT_MOC_LITERAL(23, 386, 6) // "status"

    },
    "chat\0on_pushButton_clicked\0\0"
    "on_pushButton_2_clicked\0on_pushButton_4_clicked\0"
    "on_pushButton_8_clicked\0on_pushButton_9_clicked\0"
    "on_lineEdit_3_returnPressed\0mousePressEvent\0"
    "QMouseEvent*\0event\0mouseMoveEvent\0"
    "add_message_to_listwidget\0message\0"
    "add_message_from_server\0restore_chat\0"
    "all_message\0restore_new_messages\0"
    "new_messages\0on_listWidget_itemClicked\0"
    "QListWidgetItem*\0item\0add_online_in_chat\0"
    "status"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_chat[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    0,   88,    2, 0x08 /* Private */,
       7,    0,   89,    2, 0x08 /* Private */,
       8,    1,   90,    2, 0x08 /* Private */,
      11,    1,   93,    2, 0x08 /* Private */,
      12,    1,   96,    2, 0x08 /* Private */,
      14,    1,   99,    2, 0x08 /* Private */,
      15,    1,  102,    2, 0x08 /* Private */,
      17,    1,  105,    2, 0x08 /* Private */,
      19,    1,  108,    2, 0x08 /* Private */,
      22,    1,  111,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void, QMetaType::Int,   23,

       0        // eod
};

void chat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        chat *_t = static_cast<chat *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_pushButton_2_clicked(); break;
        case 2: _t->on_pushButton_4_clicked(); break;
        case 3: _t->on_pushButton_8_clicked(); break;
        case 4: _t->on_pushButton_9_clicked(); break;
        case 5: _t->on_lineEdit_3_returnPressed(); break;
        case 6: _t->mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 7: _t->mouseMoveEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 8: _t->add_message_to_listwidget((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->add_message_from_server((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->restore_chat((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->restore_new_messages((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->on_listWidget_itemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 13: _t->add_online_in_chat((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject chat::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_chat.data,
      qt_meta_data_chat,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *chat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *chat::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_chat.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int chat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
