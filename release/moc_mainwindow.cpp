/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../src/gui/mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[70];
    char stringdata0[387];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 15), // "setItemSelected"
QT_MOC_LITERAL(27, 0), // ""
QT_MOC_LITERAL(28, 11), // "QModelIndex"
QT_MOC_LITERAL(40, 5), // "index"
QT_MOC_LITERAL(46, 14), // "loadSimulation"
QT_MOC_LITERAL(61, 18), // "loadLastSimulation"
QT_MOC_LITERAL(80, 17), // "recentSimulations"
QT_MOC_LITERAL(98, 13), // "importObjects"
QT_MOC_LITERAL(112, 4), // "exit"
QT_MOC_LITERAL(117, 4), // "undo"
QT_MOC_LITERAL(122, 4), // "redo"
QT_MOC_LITERAL(127, 3), // "cut"
QT_MOC_LITERAL(131, 4), // "copy"
QT_MOC_LITERAL(136, 5), // "paste"
QT_MOC_LITERAL(142, 11), // "preferences"
QT_MOC_LITERAL(154, 11), // "worldValues"
QT_MOC_LITERAL(166, 9), // "addObject"
QT_MOC_LITERAL(176, 15), // "startSimulation"
QT_MOC_LITERAL(192, 14), // "stopSimulation"
QT_MOC_LITERAL(207, 12), // "recordValues"
QT_MOC_LITERAL(220, 15), // "calculateValues"
QT_MOC_LITERAL(236, 16), // "aboutProgrammers"
QT_MOC_LITERAL(253, 4), // "help"
QT_MOC_LITERAL(258, 11), // "versionInfo"
QT_MOC_LITERAL(270, 20), // "createLoadSimulation"
QT_MOC_LITERAL(291, 3), // "url"
QT_MOC_LITERAL(295, 13), // "newSimulation"
QT_MOC_LITERAL(309, 20), // "connectSelectedActor"
QT_MOC_LITERAL(330, 6), // "Actor*"
QT_MOC_LITERAL(337, 5), // "actor"
QT_MOC_LITERAL(343, 9), // "resetAlls"
QT_MOC_LITERAL(353, 8), // "showInfo"
QT_MOC_LITERAL(362, 15), // "showVersionInfo"
QT_MOC_LITERAL(378, 8) // "showHelp"

    },
    "MainWindow\0setItemSelected\0\0QModelIndex\0"
    "index\0loadSimulation\0loadLastSimulation\0"
    "recentSimulations\0importObjects\0exit\0"
    "undo\0redo\0cut\0copy\0paste\0preferences\0"
    "worldValues\0addObject\0startSimulation\0"
    "stopSimulation\0recordValues\0calculateValues\0"
    "aboutProgrammers\0help\0versionInfo\0"
    "createLoadSimulation\0url\0newSimulation\0"
    "connectSelectedActor\0Actor*\0actor\0"
    "resetAlls\0showInfo\0showVersionInfo\0"
    "showHelp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      21,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  182,    2, 0x06,    1 /* Public */,
       5,    0,  185,    2, 0x06,    3 /* Public */,
       6,    0,  186,    2, 0x06,    4 /* Public */,
       7,    0,  187,    2, 0x06,    5 /* Public */,
       8,    0,  188,    2, 0x06,    6 /* Public */,
       9,    0,  189,    2, 0x06,    7 /* Public */,
      10,    0,  190,    2, 0x06,    8 /* Public */,
      11,    0,  191,    2, 0x06,    9 /* Public */,
      12,    0,  192,    2, 0x06,   10 /* Public */,
      13,    0,  193,    2, 0x06,   11 /* Public */,
      14,    0,  194,    2, 0x06,   12 /* Public */,
      15,    0,  195,    2, 0x06,   13 /* Public */,
      16,    0,  196,    2, 0x06,   14 /* Public */,
      17,    0,  197,    2, 0x06,   15 /* Public */,
      18,    0,  198,    2, 0x06,   16 /* Public */,
      19,    0,  199,    2, 0x06,   17 /* Public */,
      20,    0,  200,    2, 0x06,   18 /* Public */,
      21,    0,  201,    2, 0x06,   19 /* Public */,
      22,    0,  202,    2, 0x06,   20 /* Public */,
      23,    0,  203,    2, 0x06,   21 /* Public */,
      24,    0,  204,    2, 0x06,   22 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      25,    1,  205,    2, 0x0a,   23 /* Public */,
      27,    0,  208,    2, 0x0a,   25 /* Public */,
      28,    1,  209,    2, 0x0a,   26 /* Public */,
      31,    0,  212,    2, 0x0a,   28 /* Public */,
      32,    0,  213,    2, 0x0a,   29 /* Public */,
      33,    0,  214,    2, 0x0a,   30 /* Public */,
      34,    0,  215,    2, 0x0a,   31 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   26,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 29,   30,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setItemSelected((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->loadSimulation(); break;
        case 2: _t->loadLastSimulation(); break;
        case 3: _t->recentSimulations(); break;
        case 4: _t->importObjects(); break;
        case 5: _t->exit(); break;
        case 6: _t->undo(); break;
        case 7: _t->redo(); break;
        case 8: _t->cut(); break;
        case 9: _t->copy(); break;
        case 10: _t->paste(); break;
        case 11: _t->preferences(); break;
        case 12: _t->worldValues(); break;
        case 13: _t->addObject(); break;
        case 14: _t->startSimulation(); break;
        case 15: _t->stopSimulation(); break;
        case 16: _t->recordValues(); break;
        case 17: _t->calculateValues(); break;
        case 18: _t->aboutProgrammers(); break;
        case 19: _t->help(); break;
        case 20: _t->versionInfo(); break;
        case 21: _t->createLoadSimulation((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 22: _t->newSimulation(); break;
        case 23: _t->connectSelectedActor((*reinterpret_cast< Actor*(*)>(_a[1]))); break;
        case 24: _t->resetAlls(); break;
        case 25: _t->showInfo(); break;
        case 26: _t->showVersionInfo(); break;
        case 27: _t->showHelp(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 23:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Actor* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::setItemSelected)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::loadSimulation)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::loadLastSimulation)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::recentSimulations)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::importObjects)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::exit)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::undo)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::redo)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::cut)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::copy)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::paste)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::preferences)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::worldValues)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::addObject)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::startSimulation)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::stopSimulation)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::recordValues)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::calculateValues)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::aboutProgrammers)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::help)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::versionInfo)) {
                *result = 20;
                return;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t
, QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Actor *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


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
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::setItemSelected(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::loadSimulation()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MainWindow::loadLastSimulation()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MainWindow::recentSimulations()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void MainWindow::importObjects()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void MainWindow::exit()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void MainWindow::undo()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void MainWindow::redo()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void MainWindow::cut()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void MainWindow::copy()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void MainWindow::paste()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void MainWindow::preferences()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void MainWindow::worldValues()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void MainWindow::addObject()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void MainWindow::startSimulation()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void MainWindow::stopSimulation()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void MainWindow::recordValues()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void MainWindow::calculateValues()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void MainWindow::aboutProgrammers()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void MainWindow::help()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}

// SIGNAL 20
void MainWindow::versionInfo()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
