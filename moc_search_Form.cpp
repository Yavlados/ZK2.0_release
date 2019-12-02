/****************************************************************************
** Meta object code from reading C++ file 'search_Form.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../untitled3/VKR/Form_Headers/search_Form.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'search_Form.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Search_t {
    QByteArrayData data[24];
    char stringdata0[300];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Search_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Search_t qt_meta_stringdata_Search = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Search"
QT_MOC_LITERAL(1, 7, 18), // "Show_search_result"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 13), // "QList<Crud*>*"
QT_MOC_LITERAL(4, 41, 8), // "crudlist"
QT_MOC_LITERAL(5, 50, 18), // "Send_search_result"
QT_MOC_LITERAL(6, 69, 13), // "search_result"
QT_MOC_LITERAL(7, 83, 13), // "Cancel_search"
QT_MOC_LITERAL(8, 97, 20), // "Create_search_report"
QT_MOC_LITERAL(9, 118, 20), // "on_pb_search_clicked"
QT_MOC_LITERAL(10, 139, 25), // "on_pb_back_tomain_clicked"
QT_MOC_LITERAL(11, 165, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(12, 187, 19), // "create_search_query"
QT_MOC_LITERAL(13, 207, 5), // "Crud*"
QT_MOC_LITERAL(14, 213, 11), // "search_crud"
QT_MOC_LITERAL(15, 225, 13), // "get_date_from"
QT_MOC_LITERAL(16, 239, 11), // "get_date_to"
QT_MOC_LITERAL(17, 251, 8), // "get_date"
QT_MOC_LITERAL(18, 260, 4), // "year"
QT_MOC_LITERAL(19, 265, 5), // "month"
QT_MOC_LITERAL(20, 271, 3), // "day"
QT_MOC_LITERAL(21, 275, 14), // "get_date_query"
QT_MOC_LITERAL(22, 290, 4), // "date"
QT_MOC_LITERAL(23, 295, 4) // "flag"

    },
    "Search\0Show_search_result\0\0QList<Crud*>*\0"
    "crudlist\0Send_search_result\0search_result\0"
    "Cancel_search\0Create_search_report\0"
    "on_pb_search_clicked\0on_pb_back_tomain_clicked\0"
    "on_pushButton_clicked\0create_search_query\0"
    "Crud*\0search_crud\0get_date_from\0"
    "get_date_to\0get_date\0year\0month\0day\0"
    "get_date_query\0date\0flag"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Search[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       5,    1,   77,    2, 0x06 /* Public */,
       7,    0,   80,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   81,    2, 0x08 /* Private */,
       9,    0,   84,    2, 0x08 /* Private */,
      10,    0,   85,    2, 0x08 /* Private */,
      11,    0,   86,    2, 0x08 /* Private */,
      12,    1,   87,    2, 0x08 /* Private */,
      15,    0,   90,    2, 0x08 /* Private */,
      16,    0,   91,    2, 0x08 /* Private */,
      17,    3,   92,    2, 0x08 /* Private */,
      21,    2,   99,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QString, 0x80000000 | 13,   14,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   18,   19,   20,
    QMetaType::QString, QMetaType::QString, QMetaType::Int,   22,   23,

       0        // eod
};

void Search::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Search *_t = static_cast<Search *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Show_search_result((*reinterpret_cast< QList<Crud*>*(*)>(_a[1]))); break;
        case 1: _t->Send_search_result((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->Cancel_search(); break;
        case 3: _t->Create_search_report((*reinterpret_cast< QList<Crud*>*(*)>(_a[1]))); break;
        case 4: _t->on_pb_search_clicked(); break;
        case 5: _t->on_pb_back_tomain_clicked(); break;
        case 6: _t->on_pushButton_clicked(); break;
        case 7: { QString _r = _t->create_search_query((*reinterpret_cast< Crud*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 8: { QString _r = _t->get_date_from();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 9: { QString _r = _t->get_date_to();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 10: { QString _r = _t->get_date((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 11: { QString _r = _t->get_date_query((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Search::*)(QList<Crud*> * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Search::Show_search_result)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Search::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Search::Send_search_result)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Search::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Search::Cancel_search)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Search::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Search.data,
      qt_meta_data_Search,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Search::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Search::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Search.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Search::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void Search::Show_search_result(QList<Crud*> * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Search::Send_search_result(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Search::Cancel_search()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
