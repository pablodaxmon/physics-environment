/****************************************************************************
** Meta object code from reading C++ file 'timerloop.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../src/core/timerloop.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'timerloop.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TimerLoop_t {
    const uint offsetsAndSize[24];
    char stringdata0[130];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_TimerLoop_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_TimerLoop_t qt_meta_stringdata_TimerLoop = {
    {
QT_MOC_LITERAL(0, 9), // "TimerLoop"
QT_MOC_LITERAL(10, 12), // "signalUpdate"
QT_MOC_LITERAL(23, 0), // ""
QT_MOC_LITERAL(24, 11), // "signalStart"
QT_MOC_LITERAL(36, 6), // "update"
QT_MOC_LITERAL(43, 15), // "setDurationLoop"
QT_MOC_LITERAL(59, 5), // "value"
QT_MOC_LITERAL(65, 23), // "setDurationLoopInterval"
QT_MOC_LITERAL(89, 9), // "startLoop"
QT_MOC_LITERAL(99, 8), // "stopLoop"
QT_MOC_LITERAL(108, 9), // "pauseLoop"
QT_MOC_LITERAL(118, 11) // "restartLoop"

    },
    "TimerLoop\0signalUpdate\0\0signalStart\0"
    "update\0setDurationLoop\0value\0"
    "setDurationLoopInterval\0startLoop\0"
    "stopLoop\0pauseLoop\0restartLoop"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TimerLoop[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x06,    1 /* Public */,
       3,    0,   69,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   70,    2, 0x0a,    3 /* Public */,
       5,    1,   71,    2, 0x0a,    4 /* Public */,
       7,    1,   74,    2, 0x0a,    6 /* Public */,
       8,    0,   77,    2, 0x0a,    8 /* Public */,
       9,    0,   78,    2, 0x0a,    9 /* Public */,
      10,    0,   79,    2, 0x0a,   10 /* Public */,
      11,    0,   80,    2, 0x0a,   11 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,    6,
    QMetaType::Void, QMetaType::Float,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TimerLoop::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TimerLoop *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signalUpdate(); break;
        case 1: _t->signalStart(); break;
        case 2: _t->update(); break;
        case 3: _t->setDurationLoop((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->setDurationLoopInterval((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 5: _t->startLoop(); break;
        case 6: _t->stopLoop(); break;
        case 7: _t->pauseLoop(); break;
        case 8: _t->restartLoop(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TimerLoop::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimerLoop::signalUpdate)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TimerLoop::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimerLoop::signalStart)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject TimerLoop::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_TimerLoop.offsetsAndSize,
    qt_meta_data_TimerLoop,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_TimerLoop_t
, QtPrivate::TypeAndForceComplete<TimerLoop, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<float, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<float, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *TimerLoop::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TimerLoop::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TimerLoop.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TimerLoop::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void TimerLoop::signalUpdate()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void TimerLoop::signalStart()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
