/****************************************************************************
** Meta object code from reading C++ file 'demoreader.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/demoreader.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'demoreader.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_DemoReader_t {
    uint offsetsAndSizes[12];
    char stringdata0[11];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[17];
    char stringdata5[21];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_DemoReader_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_DemoReader_t qt_meta_stringdata_DemoReader = {
    {
        QT_MOC_LITERAL(0, 10),  // "DemoReader"
        QT_MOC_LITERAL(11, 14),  // "setNumChannels"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 5),  // "value"
        QT_MOC_LITERAL(33, 16),  // "demoTimerTimeout"
        QT_MOC_LITERAL(50, 20)   // "onNumChannelsChanged"
    },
    "DemoReader",
    "setNumChannels",
    "",
    "value",
    "demoTimerTimeout",
    "onNumChannelsChanged"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_DemoReader[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x0a,    1 /* Public */,
       4,    0,   35,    2, 0x08,    3 /* Private */,
       5,    1,   36,    2, 0x08,    4 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,    3,

       0        // eod
};

Q_CONSTINIT const QMetaObject DemoReader::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractReader::staticMetaObject>(),
    qt_meta_stringdata_DemoReader.offsetsAndSizes,
    qt_meta_data_DemoReader,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_DemoReader_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DemoReader, std::true_type>,
        // method 'setNumChannels'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<unsigned , std::false_type>,
        // method 'demoTimerTimeout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onNumChannelsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<unsigned , std::false_type>
    >,
    nullptr
} };

void DemoReader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DemoReader *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setNumChannels((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1]))); break;
        case 1: _t->demoTimerTimeout(); break;
        case 2: _t->onNumChannelsChanged((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *DemoReader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DemoReader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DemoReader.stringdata0))
        return static_cast<void*>(this);
    return AbstractReader::qt_metacast(_clname);
}

int DemoReader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractReader::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
