/****************************************************************************
** Meta object code from reading C++ file 'dialog_settings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../untitled3/VKR/dialog_settings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialog_settings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Dialog_settings_t {
    QByteArrayData data[11];
    char stringdata0[164];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dialog_settings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dialog_settings_t qt_meta_stringdata_Dialog_settings = {
    {
QT_MOC_LITERAL(0, 0, 15), // "Dialog_settings"
QT_MOC_LITERAL(1, 16, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 21), // "on_groupBox_3_toggled"
QT_MOC_LITERAL(4, 61, 4), // "arg1"
QT_MOC_LITERAL(5, 66, 21), // "on_groupBox_4_toggled"
QT_MOC_LITERAL(6, 88, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(7, 112, 10), // "closeEvent"
QT_MOC_LITERAL(8, 123, 12), // "QCloseEvent*"
QT_MOC_LITERAL(9, 136, 5), // "event"
QT_MOC_LITERAL(10, 142, 21) // "set_settings_from_ini"

    },
    "Dialog_settings\0on_pushButton_clicked\0"
    "\0on_groupBox_3_toggled\0arg1\0"
    "on_groupBox_4_toggled\0on_pushButton_2_clicked\0"
    "closeEvent\0QCloseEvent*\0event\0"
    "set_settings_from_ini"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dialog_settings[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    1,   45,    2, 0x08 /* Private */,
       5,    1,   48,    2, 0x08 /* Private */,
       6,    0,   51,    2, 0x08 /* Private */,
       7,    1,   52,    2, 0x08 /* Private */,
      10,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,

       0        // eod
};

void Dialog_settings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Dialog_settings *_t = static_cast<Dialog_settings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_groupBox_3_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_groupBox_4_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_pushButton_2_clicked(); break;
        case 4: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 5: _t->set_settings_from_ini(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Dialog_settings::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Dialog_settings.data,
      qt_meta_data_Dialog_settings,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Dialog_settings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dialog_settings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Dialog_settings.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Dialog_settings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
