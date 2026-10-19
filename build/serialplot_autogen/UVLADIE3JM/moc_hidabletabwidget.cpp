/****************************************************************************
** Meta object code from reading C++ file 'hidabletabwidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/hidabletabwidget.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hidabletabwidget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_HidableTabWidget_t {
    uint offsetsAndSizes[16];
    char stringdata0[17];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[8];
    char stringdata5[16];
    char stringdata6[22];
    char stringdata7[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_HidableTabWidget_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_HidableTabWidget_t qt_meta_stringdata_HidableTabWidget = {
    {
        QT_MOC_LITERAL(0, 16),  // "HidableTabWidget"
        QT_MOC_LITERAL(17, 8),  // "showTabs"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 12),  // "onHideAction"
        QT_MOC_LITERAL(40, 7),  // "checked"
        QT_MOC_LITERAL(48, 15),  // "onTabBarClicked"
        QT_MOC_LITERAL(64, 21),  // "onTabBarDoubleClicked"
        QT_MOC_LITERAL(86, 14)   // "connectSignals"
    },
    "HidableTabWidget",
    "showTabs",
    "",
    "onHideAction",
    "checked",
    "onTabBarClicked",
    "onTabBarDoubleClicked",
    "connectSignals"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_HidableTabWidget[] = {

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
       1,    0,   44,    2, 0x0a,    1 /* Public */,
       3,    1,   45,    2, 0x08,    2 /* Private */,
       5,    0,   48,    2, 0x08,    4 /* Private */,
       6,    0,   49,    2, 0x08,    5 /* Private */,
       7,    0,   50,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject HidableTabWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QTabWidget::staticMetaObject>(),
    qt_meta_stringdata_HidableTabWidget.offsetsAndSizes,
    qt_meta_data_HidableTabWidget,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_HidableTabWidget_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<HidableTabWidget, std::true_type>,
        // method 'showTabs'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onHideAction'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'onTabBarClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onTabBarDoubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'connectSignals'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void HidableTabWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HidableTabWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->showTabs(); break;
        case 1: _t->onHideAction((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->onTabBarClicked(); break;
        case 3: _t->onTabBarDoubleClicked(); break;
        case 4: _t->connectSignals(); break;
        default: ;
        }
    }
}

const QMetaObject *HidableTabWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HidableTabWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HidableTabWidget.stringdata0))
        return static_cast<void*>(this);
    return QTabWidget::qt_metacast(_clname);
}

int HidableTabWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTabWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
