/****************************************************************************
** Meta object code from reading C++ file 'channelinfomodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/channelinfomodel.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'channelinfomodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_ChannelInfoModel_t {
    uint offsetsAndSizes[18];
    char stringdata0[17];
    char stringdata1[11];
    char stringdata2[1];
    char stringdata3[11];
    char stringdata4[12];
    char stringdata5[11];
    char stringdata6[13];
    char stringdata7[16];
    char stringdata8[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_ChannelInfoModel_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_ChannelInfoModel_t qt_meta_stringdata_ChannelInfoModel = {
    {
        QT_MOC_LITERAL(0, 16),  // "ChannelInfoModel"
        QT_MOC_LITERAL(17, 10),  // "resetInfos"
        QT_MOC_LITERAL(28, 0),  // ""
        QT_MOC_LITERAL(29, 10),  // "resetNames"
        QT_MOC_LITERAL(40, 11),  // "resetColors"
        QT_MOC_LITERAL(52, 10),  // "resetGains"
        QT_MOC_LITERAL(63, 12),  // "resetOffsets"
        QT_MOC_LITERAL(76, 15),  // "resetVisibility"
        QT_MOC_LITERAL(92, 7)   // "visible"
    },
    "ChannelInfoModel",
    "resetInfos",
    "",
    "resetNames",
    "resetColors",
    "resetGains",
    "resetOffsets",
    "resetVisibility",
    "visible"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_ChannelInfoModel[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x0a,    1 /* Public */,
       3,    0,   51,    2, 0x0a,    2 /* Public */,
       4,    0,   52,    2, 0x0a,    3 /* Public */,
       5,    0,   53,    2, 0x0a,    4 /* Public */,
       6,    0,   54,    2, 0x0a,    5 /* Public */,
       7,    1,   55,    2, 0x0a,    6 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    8,

       0        // eod
};

Q_CONSTINIT const QMetaObject ChannelInfoModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractTableModel::staticMetaObject>(),
    qt_meta_stringdata_ChannelInfoModel.offsetsAndSizes,
    qt_meta_data_ChannelInfoModel,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_ChannelInfoModel_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ChannelInfoModel, std::true_type>,
        // method 'resetInfos'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'resetNames'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'resetColors'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'resetGains'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'resetOffsets'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'resetVisibility'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void ChannelInfoModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ChannelInfoModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->resetInfos(); break;
        case 1: _t->resetNames(); break;
        case 2: _t->resetColors(); break;
        case 3: _t->resetGains(); break;
        case 4: _t->resetOffsets(); break;
        case 5: _t->resetVisibility((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *ChannelInfoModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChannelInfoModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ChannelInfoModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractTableModel::qt_metacast(_clname);
}

int ChannelInfoModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
