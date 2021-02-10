/****************************************************************************
** Meta object code from reading C++ file 'litemanwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "sqliteman/litemanwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'litemanwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LiteManWindow_t {
    QByteArrayData data[48];
    char stringdata0[545];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LiteManWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LiteManWindow_t qt_meta_stringdata_LiteManWindow = {
    {
QT_MOC_LITERAL(0, 0, 13), // "LiteManWindow"
QT_MOC_LITERAL(1, 14, 12), // "prefsChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 5), // "newDB"
QT_MOC_LITERAL(4, 34, 4), // "open"
QT_MOC_LITERAL(5, 39, 4), // "file"
QT_MOC_LITERAL(6, 44, 10), // "openRecent"
QT_MOC_LITERAL(7, 55, 5), // "about"
QT_MOC_LITERAL(8, 61, 7), // "aboutQt"
QT_MOC_LITERAL(9, 69, 4), // "help"
QT_MOC_LITERAL(10, 74, 11), // "preferences"
QT_MOC_LITERAL(11, 86, 10), // "buildQuery"
QT_MOC_LITERAL(12, 97, 7), // "execSql"
QT_MOC_LITERAL(13, 105, 5), // "query"
QT_MOC_LITERAL(14, 111, 12), // "exportSchema"
QT_MOC_LITERAL(15, 124, 12), // "dumpDatabase"
QT_MOC_LITERAL(16, 137, 11), // "createTable"
QT_MOC_LITERAL(17, 149, 9), // "dropTable"
QT_MOC_LITERAL(18, 159, 10), // "alterTable"
QT_MOC_LITERAL(19, 170, 11), // "renameTable"
QT_MOC_LITERAL(20, 182, 13), // "populateTable"
QT_MOC_LITERAL(21, 196, 11), // "importTable"
QT_MOC_LITERAL(22, 208, 10), // "createView"
QT_MOC_LITERAL(23, 219, 8), // "dropView"
QT_MOC_LITERAL(24, 228, 9), // "alterView"
QT_MOC_LITERAL(25, 238, 11), // "createIndex"
QT_MOC_LITERAL(26, 250, 9), // "dropIndex"
QT_MOC_LITERAL(27, 260, 7), // "reindex"
QT_MOC_LITERAL(28, 268, 17), // "treeItemActivated"
QT_MOC_LITERAL(29, 286, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(30, 303, 4), // "item"
QT_MOC_LITERAL(31, 308, 6), // "column"
QT_MOC_LITERAL(32, 315, 21), // "treeContextMenuOpened"
QT_MOC_LITERAL(33, 337, 3), // "pos"
QT_MOC_LITERAL(34, 341, 28), // "tableTree_currentItemChanged"
QT_MOC_LITERAL(35, 370, 3), // "cur"
QT_MOC_LITERAL(36, 374, 4), // "prev"
QT_MOC_LITERAL(37, 379, 15), // "handleSqlEditor"
QT_MOC_LITERAL(38, 395, 19), // "handleObjectBrowser"
QT_MOC_LITERAL(39, 415, 13), // "analyzeDialog"
QT_MOC_LITERAL(40, 429, 12), // "vacuumDialog"
QT_MOC_LITERAL(41, 442, 14), // "attachDatabase"
QT_MOC_LITERAL(42, 457, 14), // "detachDatabase"
QT_MOC_LITERAL(43, 472, 13), // "createTrigger"
QT_MOC_LITERAL(44, 486, 12), // "alterTrigger"
QT_MOC_LITERAL(45, 499, 11), // "dropTrigger"
QT_MOC_LITERAL(46, 511, 18), // "constraintTriggers"
QT_MOC_LITERAL(47, 530, 14) // "describeObject"

    },
    "LiteManWindow\0prefsChanged\0\0newDB\0"
    "open\0file\0openRecent\0about\0aboutQt\0"
    "help\0preferences\0buildQuery\0execSql\0"
    "query\0exportSchema\0dumpDatabase\0"
    "createTable\0dropTable\0alterTable\0"
    "renameTable\0populateTable\0importTable\0"
    "createView\0dropView\0alterView\0createIndex\0"
    "dropIndex\0reindex\0treeItemActivated\0"
    "QTreeWidgetItem*\0item\0column\0"
    "treeContextMenuOpened\0pos\0"
    "tableTree_currentItemChanged\0cur\0prev\0"
    "handleSqlEditor\0handleObjectBrowser\0"
    "analyzeDialog\0vacuumDialog\0attachDatabase\0"
    "detachDatabase\0createTrigger\0alterTrigger\0"
    "dropTrigger\0constraintTriggers\0"
    "describeObject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LiteManWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      39,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  209,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,  210,    2, 0x08 /* Private */,
       4,    1,  211,    2, 0x08 /* Private */,
       4,    0,  214,    2, 0x28 /* Private | MethodCloned */,
       6,    0,  215,    2, 0x08 /* Private */,
       7,    0,  216,    2, 0x08 /* Private */,
       8,    0,  217,    2, 0x08 /* Private */,
       9,    0,  218,    2, 0x08 /* Private */,
      10,    0,  219,    2, 0x08 /* Private */,
      11,    0,  220,    2, 0x08 /* Private */,
      12,    1,  221,    2, 0x08 /* Private */,
      14,    0,  224,    2, 0x08 /* Private */,
      15,    0,  225,    2, 0x08 /* Private */,
      16,    0,  226,    2, 0x08 /* Private */,
      17,    0,  227,    2, 0x08 /* Private */,
      18,    0,  228,    2, 0x08 /* Private */,
      19,    0,  229,    2, 0x08 /* Private */,
      20,    0,  230,    2, 0x08 /* Private */,
      21,    0,  231,    2, 0x08 /* Private */,
      22,    0,  232,    2, 0x08 /* Private */,
      23,    0,  233,    2, 0x08 /* Private */,
      24,    0,  234,    2, 0x08 /* Private */,
      25,    0,  235,    2, 0x08 /* Private */,
      26,    0,  236,    2, 0x08 /* Private */,
      27,    0,  237,    2, 0x08 /* Private */,
      28,    2,  238,    2, 0x08 /* Private */,
      32,    1,  243,    2, 0x08 /* Private */,
      34,    2,  246,    2, 0x08 /* Private */,
      37,    0,  251,    2, 0x08 /* Private */,
      38,    0,  252,    2, 0x08 /* Private */,
      39,    0,  253,    2, 0x08 /* Private */,
      40,    0,  254,    2, 0x08 /* Private */,
      41,    0,  255,    2, 0x08 /* Private */,
      42,    0,  256,    2, 0x08 /* Private */,
      43,    0,  257,    2, 0x08 /* Private */,
      44,    0,  258,    2, 0x08 /* Private */,
      45,    0,  259,    2, 0x08 /* Private */,
      46,    0,  260,    2, 0x08 /* Private */,
      47,    0,  261,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 29, QMetaType::Int,   30,   31,
    QMetaType::Void, QMetaType::QPoint,   33,
    QMetaType::Void, 0x80000000 | 29, 0x80000000 | 29,   35,   36,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LiteManWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LiteManWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->prefsChanged(); break;
        case 1: _t->newDB(); break;
        case 2: _t->open((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->open(); break;
        case 4: _t->openRecent(); break;
        case 5: _t->about(); break;
        case 6: _t->aboutQt(); break;
        case 7: _t->help(); break;
        case 8: _t->preferences(); break;
        case 9: _t->buildQuery(); break;
        case 10: _t->execSql((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->exportSchema(); break;
        case 12: _t->dumpDatabase(); break;
        case 13: _t->createTable(); break;
        case 14: _t->dropTable(); break;
        case 15: _t->alterTable(); break;
        case 16: _t->renameTable(); break;
        case 17: _t->populateTable(); break;
        case 18: _t->importTable(); break;
        case 19: _t->createView(); break;
        case 20: _t->dropView(); break;
        case 21: _t->alterView(); break;
        case 22: _t->createIndex(); break;
        case 23: _t->dropIndex(); break;
        case 24: _t->reindex(); break;
        case 25: _t->treeItemActivated((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 26: _t->treeContextMenuOpened((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 27: _t->tableTree_currentItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 28: _t->handleSqlEditor(); break;
        case 29: _t->handleObjectBrowser(); break;
        case 30: _t->analyzeDialog(); break;
        case 31: _t->vacuumDialog(); break;
        case 32: _t->attachDatabase(); break;
        case 33: _t->detachDatabase(); break;
        case 34: _t->createTrigger(); break;
        case 35: _t->alterTrigger(); break;
        case 36: _t->dropTrigger(); break;
        case 37: _t->constraintTriggers(); break;
        case 38: _t->describeObject(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LiteManWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LiteManWindow::prefsChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LiteManWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_LiteManWindow.data,
    qt_meta_data_LiteManWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LiteManWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LiteManWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LiteManWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int LiteManWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 39)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 39;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 39)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 39;
    }
    return _id;
}

// SIGNAL 0
void LiteManWindow::prefsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
