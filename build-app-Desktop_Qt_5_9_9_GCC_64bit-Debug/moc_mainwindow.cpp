/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[22];
    char stringdata0[355];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 17), // "change_mainwindow"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(4, 52, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(5, 76, 31), // "on_listWidget_itemDoubleClicked"
QT_MOC_LITERAL(6, 108, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(7, 125, 4), // "item"
QT_MOC_LITERAL(8, 130, 13), // "keyPressEvent"
QT_MOC_LITERAL(9, 144, 10), // "QKeyEvent*"
QT_MOC_LITERAL(10, 155, 5), // "event"
QT_MOC_LITERAL(11, 161, 25), // "on_lineEdit_returnPressed"
QT_MOC_LITERAL(12, 187, 20), // "get_name_app_from_db"
QT_MOC_LITERAL(13, 208, 13), // "search_result"
QT_MOC_LITERAL(14, 222, 6), // "search"
QT_MOC_LITERAL(15, 229, 11), // "check_error"
QT_MOC_LITERAL(16, 241, 9), // "name_main"
QT_MOC_LITERAL(17, 251, 18), // "check_word_in_word"
QT_MOC_LITERAL(18, 270, 26), // "check_word_in_word_no_name"
QT_MOC_LITERAL(19, 297, 22), // "add_apps_to_listWidget"
QT_MOC_LITERAL(20, 320, 22), // "QList<QList<QString> >"
QT_MOC_LITERAL(21, 343, 11) // "list_result"

    },
    "MainWindow\0change_mainwindow\0\0"
    "on_pushButton_clicked\0on_pushButton_2_clicked\0"
    "on_listWidget_itemDoubleClicked\0"
    "QListWidgetItem*\0item\0keyPressEvent\0"
    "QKeyEvent*\0event\0on_lineEdit_returnPressed\0"
    "get_name_app_from_db\0search_result\0"
    "search\0check_error\0name_main\0"
    "check_word_in_word\0check_word_in_word_no_name\0"
    "add_apps_to_listWidget\0QList<QList<QString> >\0"
    "list_result"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

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
       1,    0,   74,    2, 0x0a /* Public */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    1,   77,    2, 0x08 /* Private */,
       8,    1,   80,    2, 0x08 /* Private */,
      11,    0,   83,    2, 0x08 /* Private */,
      12,    0,   84,    2, 0x08 /* Private */,
      13,    1,   85,    2, 0x08 /* Private */,
      15,    2,   88,    2, 0x08 /* Private */,
      17,    2,   93,    2, 0x08 /* Private */,
      18,    2,   98,    2, 0x08 /* Private */,
      19,    1,  103,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Int, QMetaType::QString, QMetaType::QString,   14,   16,
    QMetaType::Int, QMetaType::QString, QMetaType::QString,   14,   16,
    QMetaType::Int, QMetaType::QString, QMetaType::QString,   14,   16,
    QMetaType::Void, 0x80000000 | 20,   21,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->change_mainwindow(); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->on_pushButton_2_clicked(); break;
        case 3: _t->on_listWidget_itemDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 4: _t->keyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 5: _t->on_lineEdit_returnPressed(); break;
        case 6: _t->get_name_app_from_db(); break;
        case 7: _t->search_result((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: { int _r = _t->check_error((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 9: { int _r = _t->check_word_in_word((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 10: { int _r = _t->check_word_in_word_no_name((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 11: _t->add_apps_to_listWidget((*reinterpret_cast< QList<QList<QString> >(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QList<QString> > >(); break;
            }
            break;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
