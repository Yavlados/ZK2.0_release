/****************************************************************************
** Meta object code from reading C++ file '_MTM_Contacts.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../untitled3/VKR/Model_Headers/_MTM_Contacts.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file '_MTM_Contacts.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MTM_Contacts_t {
    QByteArrayData data[9];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MTM_Contacts_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MTM_Contacts_t qt_meta_stringdata_MTM_Contacts = {
    {
QT_MOC_LITERAL(0, 0, 12), // "MTM_Contacts"
QT_MOC_LITERAL(1, 13, 14), // "addRow_contact"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 9), // "Contacts*"
QT_MOC_LITERAL(4, 39, 3), // "cnt"
QT_MOC_LITERAL(5, 43, 14), // "delRow_contact"
QT_MOC_LITERAL(6, 58, 11), // "QModelIndex"
QT_MOC_LITERAL(7, 70, 5), // "index"
QT_MOC_LITERAL(8, 76, 17) // "delBindedContacts"

    },
    "MTM_Contacts\0addRow_contact\0\0Contacts*\0"
    "cnt\0delRow_contact\0QModelIndex\0index\0"
    "delBindedContacts"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MTM_Contacts[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,
       5,    1,   32,    2, 0x0a /* Public */,
       8,    1,   35,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void MTM_Contacts::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MTM_Contacts *_t = static_cast<MTM_Contacts *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addRow_contact((*reinterpret_cast< Contacts*(*)>(_a[1]))); break;
        case 1: _t->delRow_contact((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->delBindedContacts((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MTM_Contacts::staticMetaObject = {
    { &QAbstractTableModel::staticMetaObject, qt_meta_stringdata_MTM_Contacts.data,
      qt_meta_data_MTM_Contacts,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MTM_Contacts::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MTM_Contacts::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MTM_Contacts.stringdata0))
        return static_cast<void*>(this);
    return QAbstractTableModel::qt_metacast(_clname);
}

int MTM_Contacts::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
