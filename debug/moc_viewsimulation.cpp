/****************************************************************************
** Meta object code from reading C++ file 'viewsimulation.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../src/gui/viewsimulation.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'viewsimulation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ViewSimulation_t {
    const uint offsetsAndSize[72];
    char stringdata0[440];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_ViewSimulation_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_ViewSimulation_t qt_meta_stringdata_ViewSimulation = {
    {
QT_MOC_LITERAL(0, 14), // "ViewSimulation"
QT_MOC_LITERAL(15, 13), // "eqTextChanged"
QT_MOC_LITERAL(29, 0), // ""
QT_MOC_LITERAL(30, 11), // "createActor"
QT_MOC_LITERAL(42, 8), // "QAction*"
QT_MOC_LITERAL(51, 6), // "action"
QT_MOC_LITERAL(58, 11), // "rulerToggle"
QT_MOC_LITERAL(70, 7), // "checked"
QT_MOC_LITERAL(78, 13), // "deletedObject"
QT_MOC_LITERAL(92, 6), // "Actor*"
QT_MOC_LITERAL(99, 6), // "object"
QT_MOC_LITERAL(106, 22), // "setSelectedActorSignal"
QT_MOC_LITERAL(129, 10), // "playSignal"
QT_MOC_LITERAL(140, 11), // "pauseSignal"
QT_MOC_LITERAL(152, 10), // "stopSignal"
QT_MOC_LITERAL(163, 13), // "reverseSignal"
QT_MOC_LITERAL(177, 13), // "toStartSignal"
QT_MOC_LITERAL(191, 11), // "toEndSignal"
QT_MOC_LITERAL(203, 10), // "loopEnable"
QT_MOC_LITERAL(214, 8), // "loopInit"
QT_MOC_LITERAL(223, 4), // "text"
QT_MOC_LITERAL(228, 12), // "loopDuration"
QT_MOC_LITERAL(241, 16), // "intervalDuration"
QT_MOC_LITERAL(258, 14), // "timeNowChanged"
QT_MOC_LITERAL(273, 18), // "updateSceneObjects"
QT_MOC_LITERAL(292, 14), // "QList<Actor*>*"
QT_MOC_LITERAL(307, 10), // "listactors"
QT_MOC_LITERAL(318, 10), // "moveToggle"
QT_MOC_LITERAL(329, 15), // "setItemSelected"
QT_MOC_LITERAL(345, 12), // "deleteObject"
QT_MOC_LITERAL(358, 21), // "setSelectedActorSlots"
QT_MOC_LITERAL(380, 10), // "setTimeNow"
QT_MOC_LITERAL(391, 4), // "time"
QT_MOC_LITERAL(396, 5), // "reset"
QT_MOC_LITERAL(402, 16), // "showMenuSettings"
QT_MOC_LITERAL(419, 20) // "showMenuCreateObject"

    },
    "ViewSimulation\0eqTextChanged\0\0createActor\0"
    "QAction*\0action\0rulerToggle\0checked\0"
    "deletedObject\0Actor*\0object\0"
    "setSelectedActorSignal\0playSignal\0"
    "pauseSignal\0stopSignal\0reverseSignal\0"
    "toStartSignal\0toEndSignal\0loopEnable\0"
    "loopInit\0text\0loopDuration\0intervalDuration\0"
    "timeNowChanged\0updateSceneObjects\0"
    "QList<Actor*>*\0listactors\0moveToggle\0"
    "setItemSelected\0deleteObject\0"
    "setSelectedActorSlots\0setTimeNow\0time\0"
    "reset\0showMenuSettings\0showMenuCreateObject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ViewSimulation[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      16,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  164,    2, 0x06,    1 /* Public */,
       3,    1,  165,    2, 0x06,    2 /* Public */,
       6,    1,  168,    2, 0x06,    4 /* Public */,
       8,    1,  171,    2, 0x06,    6 /* Public */,
      11,    1,  174,    2, 0x06,    8 /* Public */,
      12,    0,  177,    2, 0x06,   10 /* Public */,
      13,    0,  178,    2, 0x06,   11 /* Public */,
      14,    0,  179,    2, 0x06,   12 /* Public */,
      15,    0,  180,    2, 0x06,   13 /* Public */,
      16,    0,  181,    2, 0x06,   14 /* Public */,
      17,    0,  182,    2, 0x06,   15 /* Public */,
      18,    1,  183,    2, 0x06,   16 /* Public */,
      19,    1,  186,    2, 0x06,   18 /* Public */,
      21,    1,  189,    2, 0x06,   20 /* Public */,
      22,    1,  192,    2, 0x06,   22 /* Public */,
      23,    1,  195,    2, 0x06,   24 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      24,    1,  198,    2, 0x0a,   26 /* Public */,
      27,    1,  201,    2, 0x0a,   28 /* Public */,
      28,    0,  204,    2, 0x0a,   30 /* Public */,
      29,    0,  205,    2, 0x0a,   31 /* Public */,
      30,    0,  206,    2, 0x0a,   32 /* Public */,
      31,    1,  207,    2, 0x0a,   33 /* Public */,
      33,    0,  210,    2, 0x0a,   35 /* Public */,
      34,    0,  211,    2, 0x08,   36 /* Private */,
      35,    0,  212,    2, 0x08,   37 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void, QMetaType::QString,   20,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 25,   26,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,   32,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ViewSimulation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ViewSimulation *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->eqTextChanged(); break;
        case 1: _t->createActor((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 2: _t->rulerToggle((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->deletedObject((*reinterpret_cast< Actor*(*)>(_a[1]))); break;
        case 4: _t->setSelectedActorSignal((*reinterpret_cast< Actor*(*)>(_a[1]))); break;
        case 5: _t->playSignal(); break;
        case 6: _t->pauseSignal(); break;
        case 7: _t->stopSignal(); break;
        case 8: _t->reverseSignal(); break;
        case 9: _t->toStartSignal(); break;
        case 10: _t->toEndSignal(); break;
        case 11: _t->loopEnable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->loopInit((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->loopDuration((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->intervalDuration((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: _t->timeNowChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->updateSceneObjects((*reinterpret_cast< QList<Actor*>*(*)>(_a[1]))); break;
        case 17: _t->moveToggle((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->setItemSelected(); break;
        case 19: _t->deleteObject(); break;
        case 20: _t->setSelectedActorSlots(); break;
        case 21: _t->setTimeNow((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 22: _t->reset(); break;
        case 23: _t->showMenuSettings(); break;
        case 24: _t->showMenuCreateObject(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Actor* >(); break;
            }
            break;
        case 4:
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
            using _t = void (ViewSimulation::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewSimulation::eqTextChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ViewSimulation::*)(QAction * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewSimulation::createActor)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ViewSimulation::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewSimulation::rulerToggle)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ViewSimulation::*)(Actor * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewSimulation::deletedObject)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ViewSimulation::*)(Actor * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewSimulation::setSelectedActorSignal)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ViewSimulation::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewSimulation::playSignal)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ViewSimulation::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewSimulation::pauseSignal)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (ViewSimulation::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewSimulation::stopSignal)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (ViewSimulation::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewSimulation::reverseSignal)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (ViewSimulation::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewSimulation::toStartSignal)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (ViewSimulation::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewSimulation::toEndSignal)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (ViewSimulation::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewSimulation::loopEnable)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (ViewSimulation::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewSimulation::loopInit)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (ViewSimulation::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewSimulation::loopDuration)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (ViewSimulation::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewSimulation::intervalDuration)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (ViewSimulation::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewSimulation::timeNowChanged)) {
                *result = 15;
                return;
            }
        }
    }
}

const QMetaObject ViewSimulation::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ViewSimulation.offsetsAndSize,
    qt_meta_data_ViewSimulation,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ViewSimulation_t
, QtPrivate::TypeAndForceComplete<ViewSimulation, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QAction *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Actor *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Actor *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QList<Actor*> *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<float, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *ViewSimulation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ViewSimulation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ViewSimulation.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ViewSimulation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
    return _id;
}

// SIGNAL 0
void ViewSimulation::eqTextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ViewSimulation::createActor(QAction * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ViewSimulation::rulerToggle(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ViewSimulation::deletedObject(Actor * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ViewSimulation::setSelectedActorSignal(Actor * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ViewSimulation::playSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void ViewSimulation::pauseSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void ViewSimulation::stopSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void ViewSimulation::reverseSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void ViewSimulation::toStartSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void ViewSimulation::toEndSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void ViewSimulation::loopEnable(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void ViewSimulation::loopInit(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void ViewSimulation::loopDuration(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void ViewSimulation::intervalDuration(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void ViewSimulation::timeNowChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
