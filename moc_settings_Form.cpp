/****************************************************************************
** Meta object code from reading C++ file 'settings_Form.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../untitled3/VKR/Form_Headers/settings_Form.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settings_Form.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Settings_Form_t {
    QByteArrayData data[11];
    char stringdata0[183];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Settings_Form_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Settings_Form_t qt_meta_stringdata_Settings_Form = {
    {
QT_MOC_LITERAL(0, 0, 13), // "Settings_Form"
QT_MOC_LITERAL(1, 14, 11), // "Update_main"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 14), // "up_check_boxes"
QT_MOC_LITERAL(4, 42, 27), // "on_pb_save_settings_clicked"
QT_MOC_LITERAL(5, 70, 19), // "on_groupBox_clicked"
QT_MOC_LITERAL(6, 90, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(7, 112, 21), // "set_settings_from_ini"
QT_MOC_LITERAL(8, 134, 21), // "on_groupBox_4_toggled"
QT_MOC_LITERAL(9, 156, 4), // "arg1"
QT_MOC_LITERAL(10, 161, 21) // "on_groupBox_3_toggled"

    },
    "Settings_Form\0Update_main\0\0up_check_boxes\0"
    "on_pb_save_settings_clicked\0"
    "on_groupBox_clicked\0on_pushButton_clicked\0"
    "set_settings_from_ini\0on_groupBox_4_toggled\0"
    "arg1\0on_groupBox_3_toggled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Settings_Form[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    1,   60,    2, 0x08 /* Private */,
      10,    1,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,

       0        // eod
};

void Settings_Form::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Settings_Form *_t = static_cast<Settings_Form *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Update_main(); break;
        case 1: _t->up_check_boxes(); break;
        case 2: _t->on_pb_save_settings_clicked(); break;
        case 3: _t->on_groupBox_clicked(); break;
        case 4: _t->on_pushButton_clicked(); break;
        case 5: _t->set_settings_from_ini(); break;
        case 6: _t->on_groupBox_4_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_groupBox_3_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Settings_Form::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Settings_Form::Update_main)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Settings_Form::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Settings_Form.data,
      qt_meta_data_Settings_Form,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Settings_Form::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Settings_Form::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Settings_Form.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Settings_Form::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Settings_Form::Update_main()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
