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
    const uint offsetsAndSize[42];
    char stringdata0[232];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_TimerLoop_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_TimerLoop_t qt_meta_stringdata_TimerLoop = {
    {
QT_MOC_LITERAL(0, 9), // "TimerLoop"
QT_MOC_LITERAL(10, 12), // "signalUpdate"
QT_MOC_LITERAL(23, 0), // ""
QT_MOC_LITERAL(24, 11), // "signalStart"
QT_MOC_LITERAL(36, 10), // "timeChange"
QT_MOC_LITERAL(47, 4), // "time"
QT_MOC_LITERAL(52, 16), // "setFrameDuration"
QT_MOC_LITERAL(69, 16), // "newFrameDuration"
QT_MOC_LITERAL(86, 6), // "update"
QT_MOC_LITERAL(93, 10), // "setTimeNow"
QT_MOC_LITERAL(104, 9), // "startLoop"
QT_MOC_LITERAL(114, 8), // "stopLoop"
QT_MOC_LITERAL(123, 9), // "pauseLoop"
QT_MOC_LITERAL(133, 11), // "toStartLoop"
QT_MOC_LITERAL(145, 9), // "toEndLoop"
QT_MOC_LITERAL(155, 13), // "setLoopEnable"
QT_MOC_LITERAL(169, 13), // "newLoopEnable"
QT_MOC_LITERAL(183, 19), // "setIntervalDuration"
QT_MOC_LITERAL(203, 4), // "text"
QT_MOC_LITERAL(208, 7), // "setInit"
QT_MOC_LITERAL(216, 15) // "setDurationLoop"

    },
    "TimerLoop\0signalUpdate\0\0signalStart\0"
    "timeChange\0time\0setFrameDuration\0"
    "newFrameDuration\0update\0setTimeNow\0"
    "startLoop\0stopLoop\0pauseLoop\0toStartLoop\0"
    "toEndLoop\0setLoopEnable\0newLoopEnable\0"
    "setIntervalDuration\0text\0setInit\0"
    "setDurationLoop"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TimerLoop[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  104,    2, 0x06,    1 /* Public */,
       3,    0,  105,    2, 0x06,    2 /* Public */,
       4,    1,  106,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    1,  109,    2, 0x0a,    5 /* Public */,
       8,    0,  112,    2, 0x0a,    7 /* Public */,
       9,    1,  113,    2, 0x0a,    8 /* Public */,
      10,    0,  116,    2, 0x0a,   10 /* Public */,
      11,    0,  117,    2, 0x0a,   11 /* Public */,
      12,    0,  118,    2, 0x0a,   12 /* Public */,
      13,    0,  119,    2, 0x0a,   13 /* Public */,
      14,    0,  120,    2, 0x0a,   14 /* Public */,
      15,    1,  121,    2, 0x0a,   15 /* Public */,
      17,    1,  124,    2, 0x0a,   17 /* Public */,
      19,    1,  127,    2, 0x0a,   19 /* Public */,
      20,    1,  130,    2, 0x0a,   21 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, QMetaType::QString,   18,

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
        case 2: _t->timeChange((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 3: _t->setFrameDuration((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->update(); break;
        case 5: _t->setTimeNow((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->startLoop(); break;
        case 7: _t->stopLoop(); break;
        case 8: _t->pauseLoop(); break;
        case 9: _t->toStartLoop(); break;
        case 10: _t->toEndLoop(); break;
        case 11: _t->setLoopEnable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->setIntervalDuration((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->setInit((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->setDurationLoop((*reinterpret_cast< const QString(*)>(_a[1]))); break;
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
        {
            using _t = void (TimerLoop::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimerLoop::timeChange)) {
                *result = 2;
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
, QtPrivate::TypeAndForceComplete<TimerLoop, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<float, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<float, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>


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
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 15;
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

// SIGNAL 2
void TimerLoop::timeChange(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
