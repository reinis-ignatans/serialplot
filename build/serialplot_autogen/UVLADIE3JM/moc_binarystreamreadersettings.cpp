/****************************************************************************
** Meta object code from reading C++ file 'binarystreamreadersettings.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/binarystreamreadersettings.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'binarystreamreadersettings.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_BinaryStreamReaderSettings_t {
    uint offsetsAndSizes[14];
    char stringdata0[27];
    char stringdata1[21];
    char stringdata2[1];
    char stringdata3[20];
    char stringdata4[13];
    char stringdata5[18];
    char stringdata6[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_BinaryStreamReaderSettings_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_BinaryStreamReaderSettings_t qt_meta_stringdata_BinaryStreamReaderSettings = {
    {
        QT_MOC_LITERAL(0, 26),  // "BinaryStreamReaderSettings"
        QT_MOC_LITERAL(27, 20),  // "numOfChannelsChanged"
        QT_MOC_LITERAL(48, 0),  // ""
        QT_MOC_LITERAL(49, 19),  // "numberFormatChanged"
        QT_MOC_LITERAL(69, 12),  // "NumberFormat"
        QT_MOC_LITERAL(82, 17),  // "skipByteRequested"
        QT_MOC_LITERAL(100, 19)   // "skipSampleRequested"
    },
    "BinaryStreamReaderSettings",
    "numOfChannelsChanged",
    "",
    "numberFormatChanged",
    "NumberFormat",
    "skipByteRequested",
    "skipSampleRequested"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_BinaryStreamReaderSettings[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x06,    1 /* Public */,
       3,    1,   41,    2, 0x06,    3 /* Public */,
       5,    0,   44,    2, 0x06,    5 /* Public */,
       6,    0,   45,    2, 0x06,    6 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject BinaryStreamReaderSettings::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_BinaryStreamReaderSettings.offsetsAndSizes,
    qt_meta_data_BinaryStreamReaderSettings,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_BinaryStreamReaderSettings_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<BinaryStreamReaderSettings, std::true_type>,
        // method 'numOfChannelsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<unsigned , std::false_type>,
        // method 'numberFormatChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<NumberFormat, std::false_type>,
        // method 'skipByteRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'skipSampleRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void BinaryStreamReaderSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BinaryStreamReaderSettings *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->numOfChannelsChanged((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1]))); break;
        case 1: _t->numberFormatChanged((*reinterpret_cast< std::add_pointer_t<NumberFormat>>(_a[1]))); break;
        case 2: _t->skipByteRequested(); break;
        case 3: _t->skipSampleRequested(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BinaryStreamReaderSettings::*)(unsigned  );
            if (_t _q_method = &BinaryStreamReaderSettings::numOfChannelsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (BinaryStreamReaderSettings::*)(NumberFormat );
            if (_t _q_method = &BinaryStreamReaderSettings::numberFormatChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (BinaryStreamReaderSettings::*)();
            if (_t _q_method = &BinaryStreamReaderSettings::skipByteRequested; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (BinaryStreamReaderSettings::*)();
            if (_t _q_method = &BinaryStreamReaderSettings::skipSampleRequested; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *BinaryStreamReaderSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BinaryStreamReaderSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BinaryStreamReaderSettings.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int BinaryStreamReaderSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void BinaryStreamReaderSettings::numOfChannelsChanged(unsigned  _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BinaryStreamReaderSettings::numberFormatChanged(NumberFormat _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BinaryStreamReaderSettings::skipByteRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void BinaryStreamReaderSettings::skipSampleRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
