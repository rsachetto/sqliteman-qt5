/****************************************************************************
** Meta object code from reading C++ file 'altertabledialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "sqliteman/altertabledialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'altertabledialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AlterTableDialog_t {
    QByteArrayData data[8];
    char stringdata0[108];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AlterTableDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AlterTableDialog_t qt_meta_stringdata_AlterTableDialog = {
    {
QT_MOC_LITERAL(0, 0, 16), // "AlterTableDialog"
QT_MOC_LITERAL(1, 17, 8), // "addField"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 11), // "removeField"
QT_MOC_LITERAL(4, 39, 13), // "fieldSelected"
QT_MOC_LITERAL(5, 53, 11), // "cellClicked"
QT_MOC_LITERAL(6, 65, 21), // "dropItem_stateChanged"
QT_MOC_LITERAL(7, 87, 20) // "createButton_clicked"

    },
    "AlterTableDialog\0addField\0\0removeField\0"
    "fieldSelected\0cellClicked\0"
    "dropItem_stateChanged\0createButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AlterTableDialog[] = {

 // content:
       8,       // revision
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
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    2,   47,    2, 0x08 /* Private */,
       6,    1,   52,    2, 0x08 /* Private */,
       7,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

       0        // eod
};

void AlterTableDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AlterTableDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addField(); break;
        case 1: _t->removeField(); break;
        case 2: _t->fieldSelected(); break;
        case 3: _t->cellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->dropItem_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->createButton_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AlterTableDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<TableEditorDialog::staticMetaObject>(),
    qt_meta_stringdata_AlterTableDialog.data,
    qt_meta_data_AlterTableDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AlterTableDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AlterTableDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AlterTableDialog.stringdata0))
        return static_cast<void*>(this);
    return TableEditorDialog::qt_metacast(_clname);
}

int AlterTableDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TableEditorDialog::qt_metacall(_c, _id, _a);
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
