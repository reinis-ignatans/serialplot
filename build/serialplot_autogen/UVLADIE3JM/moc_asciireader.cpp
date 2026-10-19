/****************************************************************************
** Meta object code from reading C++ file 'asciireader.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/asciireader.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'asciireader.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_AsciiReader_t {
    uint offsetsAndSizes[10];
    char stringdata0[12];
    char stringdata1[10];
    char stringdata2[12];
    char stringdata3[1];
    char stringdata4[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_AsciiReader_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_AsciiReader_t qt_meta_stringdata_AsciiReader = {
    {
        QT_MOC_LITERAL(0, 11),  // "AsciiReader"
        QT_MOC_LITERAL(12, 9),  // "parseLine"
        QT_MOC_LITERAL(22, 11),  // "SamplePack*"
        QT_MOC_LITERAL(34, 0),  // ""
        QT_MOC_LITERAL(35, 4)   // "line"
    },
    "AsciiReader",
    "parseLine",
    "SamplePack*",
    "",
    "line"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_AsciiReader[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   20,    3, 0x108,    1 /* Private | MethodIsConst  */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QString,    4,

       0        // eod
};

Q_CONSTINIT const QMetaObject AsciiReader::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractReader::staticMetaObject>(),
    qt_meta_stringdata_AsciiReader.offsetsAndSizes,
    qt_meta_data_AsciiReader,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_AsciiReader_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AsciiReader, std::true_type>,
        // method 'parseLine'
        QtPrivate::TypeAndForceComplete<SamplePack *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void AsciiReader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AsciiReader *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { SamplePack* _r = _t->parseLine((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< SamplePack**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *AsciiReader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AsciiReader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AsciiReader.stringdata0))
        return static_cast<void*>(this);
    return AbstractReader::qt_metacast(_clname);
}

int AsciiReader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractReader::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
