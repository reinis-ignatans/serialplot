/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_MainWindow_t {
    uint offsetsAndSizes[40];
    char stringdata0[11];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[5];
    char stringdata4[16];
    char stringdata5[8];
    char stringdata6[7];
    char stringdata7[22];
    char stringdata8[6];
    char stringdata9[10];
    char stringdata10[13];
    char stringdata11[4];
    char stringdata12[11];
    char stringdata13[8];
    char stringdata14[12];
    char stringdata15[5];
    char stringdata16[12];
    char stringdata17[12];
    char stringdata18[15];
    char stringdata19[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_MainWindow_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 13),  // "onPortToggled"
        QT_MOC_LITERAL(25, 0),  // ""
        QT_MOC_LITERAL(26, 4),  // "open"
        QT_MOC_LITERAL(31, 15),  // "onSourceChanged"
        QT_MOC_LITERAL(47, 7),  // "Source*"
        QT_MOC_LITERAL(55, 6),  // "source"
        QT_MOC_LITERAL(62, 21),  // "onNumOfSamplesChanged"
        QT_MOC_LITERAL(84, 5),  // "value"
        QT_MOC_LITERAL(90, 9),  // "clearPlot"
        QT_MOC_LITERAL(100, 12),  // "onSpsChanged"
        QT_MOC_LITERAL(113, 3),  // "sps"
        QT_MOC_LITERAL(117, 10),  // "enableDemo"
        QT_MOC_LITERAL(128, 7),  // "enabled"
        QT_MOC_LITERAL(136, 11),  // "showBarPlot"
        QT_MOC_LITERAL(148, 4),  // "show"
        QT_MOC_LITERAL(153, 11),  // "onExportCsv"
        QT_MOC_LITERAL(165, 11),  // "onExportSvg"
        QT_MOC_LITERAL(177, 14),  // "onSaveSettings"
        QT_MOC_LITERAL(192, 14)   // "onLoadSettings"
    },
    "MainWindow",
    "onPortToggled",
    "",
    "open",
    "onSourceChanged",
    "Source*",
    "source",
    "onNumOfSamplesChanged",
    "value",
    "clearPlot",
    "onSpsChanged",
    "sps",
    "enableDemo",
    "enabled",
    "showBarPlot",
    "show",
    "onExportCsv",
    "onExportSvg",
    "onSaveSettings",
    "onLoadSettings"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   80,    2, 0x08,    1 /* Private */,
       4,    1,   83,    2, 0x08,    3 /* Private */,
       7,    1,   86,    2, 0x08,    5 /* Private */,
       9,    0,   89,    2, 0x08,    7 /* Private */,
      10,    1,   90,    2, 0x08,    8 /* Private */,
      12,    1,   93,    2, 0x08,   10 /* Private */,
      14,    1,   96,    2, 0x08,   12 /* Private */,
      16,    0,   99,    2, 0x08,   14 /* Private */,
      17,    0,  100,    2, 0x08,   15 /* Private */,
      18,    0,  101,    2, 0x08,   16 /* Private */,
      19,    0,  102,    2, 0x08,   17 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,   11,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSizes,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'onPortToggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'onSourceChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Source *, std::false_type>,
        // method 'onNumOfSamplesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'clearPlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onSpsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'enableDemo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'showBarPlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'onExportCsv'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onExportSvg'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onSaveSettings'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onLoadSettings'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onPortToggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->onSourceChanged((*reinterpret_cast< std::add_pointer_t<Source*>>(_a[1]))); break;
        case 2: _t->onNumOfSamplesChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->clearPlot(); break;
        case 4: _t->onSpsChanged((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 5: _t->enableDemo((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->showBarPlot((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->onExportCsv(); break;
        case 8: _t->onExportSvg(); break;
        case 9: _t->onSaveSettings(); break;
        case 10: _t->onLoadSettings(); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
