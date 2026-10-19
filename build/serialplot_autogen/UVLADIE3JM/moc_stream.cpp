/****************************************************************************
** Meta object code from reading C++ file 'stream.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/stream.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stream.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_Stream_t {
    uint offsetsAndSizes[40];
    char stringdata0[7];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[18];
    char stringdata5[13];
    char stringdata6[21];
    char stringdata7[5];
    char stringdata8[19];
    char stringdata9[8];
    char stringdata10[5];
    char stringdata11[10];
    char stringdata12[14];
    char stringdata13[9];
    char stringdata14[8];
    char stringdata15[4];
    char stringdata16[4];
    char stringdata17[6];
    char stringdata18[7];
    char stringdata19[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_Stream_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_Stream_t qt_meta_stringdata_Stream = {
    {
        QT_MOC_LITERAL(0, 6),  // "Stream"
        QT_MOC_LITERAL(7, 18),  // "numChannelsChanged"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 5),  // "value"
        QT_MOC_LITERAL(33, 17),  // "numSamplesChanged"
        QT_MOC_LITERAL(51, 12),  // "channelAdded"
        QT_MOC_LITERAL(64, 20),  // "const StreamChannel*"
        QT_MOC_LITERAL(85, 4),  // "chan"
        QT_MOC_LITERAL(90, 18),  // "channelNameChanged"
        QT_MOC_LITERAL(109, 7),  // "channel"
        QT_MOC_LITERAL(117, 4),  // "name"
        QT_MOC_LITERAL(122, 9),  // "dataAdded"
        QT_MOC_LITERAL(132, 13),  // "setNumSamples"
        QT_MOC_LITERAL(146, 8),  // "setXAxis"
        QT_MOC_LITERAL(155, 7),  // "asIndex"
        QT_MOC_LITERAL(163, 3),  // "min"
        QT_MOC_LITERAL(167, 3),  // "max"
        QT_MOC_LITERAL(171, 5),  // "pause"
        QT_MOC_LITERAL(177, 6),  // "paused"
        QT_MOC_LITERAL(184, 5)   // "clear"
    },
    "Stream",
    "numChannelsChanged",
    "",
    "value",
    "numSamplesChanged",
    "channelAdded",
    "const StreamChannel*",
    "chan",
    "channelNameChanged",
    "channel",
    "name",
    "dataAdded",
    "setNumSamples",
    "setXAxis",
    "asIndex",
    "min",
    "max",
    "pause",
    "paused",
    "clear"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_Stream[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   68,    2, 0x06,    1 /* Public */,
       4,    1,   71,    2, 0x06,    3 /* Public */,
       5,    1,   74,    2, 0x06,    5 /* Public */,
       8,    2,   77,    2, 0x06,    7 /* Public */,
      11,    0,   82,    2, 0x06,   10 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      12,    1,   83,    2, 0x0a,   11 /* Public */,
      13,    3,   86,    2, 0x0a,   13 /* Public */,
      17,    1,   93,    2, 0x0a,   17 /* Public */,
      19,    0,   96,    2, 0x0a,   19 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::UInt, QMetaType::QString,    9,   10,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::Bool, QMetaType::Double, QMetaType::Double,   14,   15,   16,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Stream::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Stream.offsetsAndSizes,
    qt_meta_data_Stream,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_Stream_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Stream, std::true_type>,
        // method 'numChannelsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<unsigned , std::false_type>,
        // method 'numSamplesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<unsigned , std::false_type>,
        // method 'channelAdded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const StreamChannel *, std::false_type>,
        // method 'channelNameChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<unsigned , std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'dataAdded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setNumSamples'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<unsigned , std::false_type>,
        // method 'setXAxis'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'pause'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'clear'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Stream::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Stream *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->numChannelsChanged((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1]))); break;
        case 1: _t->numSamplesChanged((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1]))); break;
        case 2: _t->channelAdded((*reinterpret_cast< std::add_pointer_t<const StreamChannel*>>(_a[1]))); break;
        case 3: _t->channelNameChanged((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 4: _t->dataAdded(); break;
        case 5: _t->setNumSamples((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1]))); break;
        case 6: _t->setXAxis((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[3]))); break;
        case 7: _t->pause((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->clear(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Stream::*)(unsigned  );
            if (_t _q_method = &Stream::numChannelsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Stream::*)(unsigned  );
            if (_t _q_method = &Stream::numSamplesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Stream::*)(const StreamChannel * );
            if (_t _q_method = &Stream::channelAdded; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Stream::*)(unsigned  , QString );
            if (_t _q_method = &Stream::channelNameChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Stream::*)();
            if (_t _q_method = &Stream::dataAdded; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject *Stream::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Stream::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Stream.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Sink"))
        return static_cast< Sink*>(this);
    return QObject::qt_metacast(_clname);
}

int Stream::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void Stream::numChannelsChanged(unsigned  _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Stream::numSamplesChanged(unsigned  _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Stream::channelAdded(const StreamChannel * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Stream::channelNameChanged(unsigned  _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Stream::dataAdded()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
