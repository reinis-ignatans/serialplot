/****************************************************************************
** Meta object code from reading C++ file 'snapshotmanager.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/snapshotmanager.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'snapshotmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_SnapshotManager_t {
    uint offsetsAndSizes[20];
    char stringdata0[16];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[15];
    char stringdata5[10];
    char stringdata6[9];
    char stringdata7[14];
    char stringdata8[21];
    char stringdata9[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_SnapshotManager_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_SnapshotManager_t qt_meta_stringdata_SnapshotManager = {
    {
        QT_MOC_LITERAL(0, 15),  // "SnapshotManager"
        QT_MOC_LITERAL(16, 12),  // "takeSnapshot"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 14),  // "clearSnapshots"
        QT_MOC_LITERAL(45, 14),  // "deleteSnapshot"
        QT_MOC_LITERAL(60, 9),  // "Snapshot*"
        QT_MOC_LITERAL(70, 8),  // "snapshot"
        QT_MOC_LITERAL(79, 13),  // "loadSnapshots"
        QT_MOC_LITERAL(93, 20),  // "loadSnapshotFromFile"
        QT_MOC_LITERAL(114, 8)   // "fileName"
    },
    "SnapshotManager",
    "takeSnapshot",
    "",
    "clearSnapshots",
    "deleteSnapshot",
    "Snapshot*",
    "snapshot",
    "loadSnapshots",
    "loadSnapshotFromFile",
    "fileName"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_SnapshotManager[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x08,    1 /* Private */,
       3,    0,   45,    2, 0x08,    2 /* Private */,
       4,    1,   46,    2, 0x08,    3 /* Private */,
       7,    0,   49,    2, 0x08,    5 /* Private */,
       8,    1,   50,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,

       0        // eod
};

Q_CONSTINIT const QMetaObject SnapshotManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_SnapshotManager.offsetsAndSizes,
    qt_meta_data_SnapshotManager,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_SnapshotManager_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SnapshotManager, std::true_type>,
        // method 'takeSnapshot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clearSnapshots'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'deleteSnapshot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Snapshot *, std::false_type>,
        // method 'loadSnapshots'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'loadSnapshotFromFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>
    >,
    nullptr
} };

void SnapshotManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SnapshotManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->takeSnapshot(); break;
        case 1: _t->clearSnapshots(); break;
        case 2: _t->deleteSnapshot((*reinterpret_cast< std::add_pointer_t<Snapshot*>>(_a[1]))); break;
        case 3: _t->loadSnapshots(); break;
        case 4: _t->loadSnapshotFromFile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Snapshot* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *SnapshotManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SnapshotManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SnapshotManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SnapshotManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
