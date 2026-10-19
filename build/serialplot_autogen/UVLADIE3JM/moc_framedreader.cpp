/****************************************************************************
** Meta object code from reading C++ file 'framedreader.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/framedreader.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'framedreader.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_FramedReader_t {
    uint offsetsAndSizes[20];
    char stringdata0[13];
    char stringdata1[22];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[13];
    char stringdata5[23];
    char stringdata6[6];
    char stringdata7[18];
    char stringdata8[19];
    char stringdata9[36];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_FramedReader_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_FramedReader_t qt_meta_stringdata_FramedReader = {
    {
        QT_MOC_LITERAL(0, 12),  // "FramedReader"
        QT_MOC_LITERAL(13, 21),  // "onNumberFormatChanged"
        QT_MOC_LITERAL(35, 0),  // ""
        QT_MOC_LITERAL(36, 12),  // "NumberFormat"
        QT_MOC_LITERAL(49, 12),  // "numberFormat"
        QT_MOC_LITERAL(62, 22),  // "onNumOfChannelsChanged"
        QT_MOC_LITERAL(85, 5),  // "value"
        QT_MOC_LITERAL(91, 17),  // "onSyncWordChanged"
        QT_MOC_LITERAL(109, 18),  // "onSizeFieldChanged"
        QT_MOC_LITERAL(128, 35)   // "FramedReaderSettings::SizeFie..."
    },
    "FramedReader",
    "onNumberFormatChanged",
    "",
    "NumberFormat",
    "numberFormat",
    "onNumOfChannelsChanged",
    "value",
    "onSyncWordChanged",
    "onSizeFieldChanged",
    "FramedReaderSettings::SizeFieldType"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_FramedReader[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x08,    1 /* Private */,
       5,    1,   41,    2, 0x08,    3 /* Private */,
       7,    1,   44,    2, 0x08,    5 /* Private */,
       8,    2,   47,    2, 0x08,    7 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::UInt,    6,
    QMetaType::Void, QMetaType::QByteArray,    2,
    QMetaType::Void, 0x80000000 | 9, QMetaType::UInt,    2,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject FramedReader::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractReader::staticMetaObject>(),
    qt_meta_stringdata_FramedReader.offsetsAndSizes,
    qt_meta_data_FramedReader,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_FramedReader_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FramedReader, std::true_type>,
        // method 'onNumberFormatChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<NumberFormat, std::false_type>,
        // method 'onNumOfChannelsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<unsigned , std::false_type>,
        // method 'onSyncWordChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>,
        // method 'onSizeFieldChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<FramedReaderSettings::SizeFieldType, std::false_type>,
        QtPrivate::TypeAndForceComplete<unsigned , std::false_type>
    >,
    nullptr
} };

void FramedReader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FramedReader *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onNumberFormatChanged((*reinterpret_cast< std::add_pointer_t<NumberFormat>>(_a[1]))); break;
        case 1: _t->onNumOfChannelsChanged((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1]))); break;
        case 2: _t->onSyncWordChanged((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 3: _t->onSizeFieldChanged((*reinterpret_cast< std::add_pointer_t<FramedReaderSettings::SizeFieldType>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<uint>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *FramedReader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FramedReader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FramedReader.stringdata0))
        return static_cast<void*>(this);
    return AbstractReader::qt_metacast(_clname);
}

int FramedReader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractReader::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
