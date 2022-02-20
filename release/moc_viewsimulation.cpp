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
    const uint offsetsAndSize[84];
    char stringdata0[515];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_ViewSimulation_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_ViewSimulation_t qt_meta_stringdata_ViewSimulation = {
    {
QT_MOC_LITERAL(0, 14), // "ViewSimulation"
QT_MOC_LITERAL(15, 17), // "graphiTypeChanged"
QT_MOC_LITERAL(33, 0), // ""
QT_MOC_LITERAL(34, 4), // "type"
QT_MOC_LITERAL(39, 13), // "eqTextChanged"
QT_MOC_LITERAL(53, 11), // "createActor"
QT_MOC_LITERAL(65, 8), // "QAction*"
QT_MOC_LITERAL(74, 6), // "action"
QT_MOC_LITERAL(81, 11), // "rulerToggle"
QT_MOC_LITERAL(93, 7), // "checked"
QT_MOC_LITERAL(101, 13), // "deletedObject"
QT_MOC_LITERAL(115, 6), // "Actor*"
QT_MOC_LITERAL(122, 6), // "object"
QT_MOC_LITERAL(129, 22), // "setSelectedActorSignal"
QT_MOC_LITERAL(152, 15), // "isMovibleSignal"
QT_MOC_LITERAL(168, 10), // "playSignal"
QT_MOC_LITERAL(179, 11), // "pauseSignal"
QT_MOC_LITERAL(191, 10), // "stopSignal"
QT_MOC_LITERAL(202, 13), // "reverseSignal"
QT_MOC_LITERAL(216, 13), // "toStartSignal"
QT_MOC_LITERAL(230, 11), // "toEndSignal"
QT_MOC_LITERAL(242, 10), // "loopEnable"
QT_MOC_LITERAL(253, 8), // "loopInit"
QT_MOC_LITERAL(262, 4), // "text"
QT_MOC_LITERAL(267, 12), // "loopDuration"
QT_MOC_LITERAL(280, 16), // "intervalDuration"
QT_MOC_LITERAL(297, 12), // "showSettings"
QT_MOC_LITERAL(310, 14), // "timeNowChanged"
QT_MOC_LITERAL(325, 18), // "updateSceneObjects"
QT_MOC_LITERAL(344, 14), // "QList<Actor*>*"
QT_MOC_LITERAL(359, 10), // "listactors"
QT_MOC_LITERAL(370, 10), // "moveToggle"
QT_MOC_LITERAL(381, 15), // "setItemSelected"
QT_MOC_LITERAL(397, 12), // "deleteObject"
QT_MOC_LITERAL(410, 21), // "setSelectedActorSlots"
QT_MOC_LITERAL(432, 10), // "setTimeNow"
QT_MOC_LITERAL(443, 4), // "time"
QT_MOC_LITERAL(448, 15), // "setAntialiasing"
QT_MOC_LITERAL(464, 6), // "cheked"
QT_MOC_LITERAL(471, 5), // "reset"
QT_MOC_LITERAL(477, 16), // "showMenuSettings"
QT_MOC_LITERAL(494, 20) // "showMenuCreateObject"

    },
    "ViewSimulation\0graphiTypeChanged\0\0"
    "type\0eqTextChanged\0createActor\0QAction*\0"
    "action\0rulerToggle\0checked\0deletedObject\0"
    "Actor*\0object\0setSelectedActorSignal\0"
    "isMovibleSignal\0playSignal\0pauseSignal\0"
    "stopSignal\0reverseSignal\0toStartSignal\0"
    "toEndSignal\0loopEnable\0loopInit\0text\0"
    "loopDuration\0intervalDuration\0"
    "showSettings\0timeNowChanged\0"
    "updateSceneObjects\0QList<Actor*>*\0"
    "listactors\0moveToggle\0setItemSelected\0"
    "deleteObject\0setSelectedActorSlots\0"
    "setTimeNow\0time\0setAntialiasing\0cheked\0"
    "reset\0showMenuSettings\0showMenuCreateObject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ViewSimulation[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      29,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      19,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  188,    2, 0x06,    1 /* Public */,
       4,    0,  191,    2, 0x06,    3 /* Public */,
       5,    1,  192,    2, 0x06,    4 /* Public */,
       8,    1,  195,    2, 0x06,    6 /* Public */,
      10,    1,  198,    2, 0x06,    8 /* Public */,
      13,    1,  201,    2, 0x06,   10 /* Public */,
      14,    1,  204,    2, 0x06,   12 /* Public */,
      15,    0,  207,    2, 0x06,   14 /* Public */,
      16,    0,  208,    2, 0x06,   15 /* Public */,
      17,    0,  209,    2, 0x06,   16 /* Public */,
      18,    0,  210,    2, 0x06,   17 /* Public */,
      19,    0,  211,    2, 0x06,   18 /* Public */,
      20,    0,  212,    2, 0x06,   19 /* Public */,
      21,    1,  213,    2, 0x06,   20 /* Public */,
      22,    1,  216,    2, 0x06,   22 /* Public */,
      24,    1,  219,    2, 0x06,   24 /* Public */,
      25,    1,  222,    2, 0x06,   26 /* Public */,
      26,    0,  225,    2, 0x06,   28 /* Public */,
      27,    1,  226,    2, 0x06,   29 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      28,    1,  229,    2, 0x0a,   31 /* Public */,
      31,    1,  232,    2, 0x0a,   33 /* Public */,
      32,    0,  235,    2, 0x0a,   35 /* Public */,
      33,    0,  236,    2, 0x0a,   36 /* Public */,
      34,    0,  237,    2, 0x0a,   37 /* Public */,
      35,    1,  238,    2, 0x0a,   38 /* Public */,
      37,    1,  241,    2, 0x0a,   40 /* Public */,
      39,    0,  244,    2, 0x0a,   42 /* Public */,
      40,    0,  245,    2, 0x08,   43 /* Private */,
      41,    0,  246,    2, 0x08,   44 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::QString,   23,
    QMetaType::Void, QMetaType::QString,   23,
    QMetaType::Void, QMetaType::QString,   23,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   23,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 29,   30,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,   36,
    QMetaType::Void, QMetaType::Bool,   38,
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
        case 0: _t->graphiTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->eqTextChanged(); break;
        case 2: _t->createActor((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 3: _t->rulerToggle((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->deletedObject((*reinterpret_cast< Actor*(*)>(_a[1]))); break;
        case 5: _t->setSelectedActorSignal((*reinterpret_cast< Actor*(*)>(_a[1]))); break;
        case 6: _t->isMovibleSignal((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->playSignal(); break;
        case 8: _t->pauseSignal(); break;
        case 9: _t->stopSignal(); break;
        case 10: _t->reverseSignal(); break;
        case 11: _t->toStartSignal(); break;
        case 12: _t->toEndSignal(); break;
        case 13: _t->loopEnable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->loopInit((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: _t->loopDuration((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->intervalDuration((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: _t->showSettings(); break;
        case 18: _t->timeNowChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 19: _t->updateSceneObjects((*reinterpret_cast< QList<Actor*>*(*)>(_a[1]))); break;
        case 20: _t->moveToggle((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->setItemSelected(); break;
        case 22: _t->deleteObject(); break;
        case 23: _t->setSelectedActorSlots(); break;
        case 24: _t->setTimeNow((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 25: _t->setAntialiasing((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: _t->reset(); break;
        case 27: _t->showMenuSettings(); break;
        case 28: _t->showMenuCreateObject(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Actor* >(); break;
            }
            break;
        case 5:
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
            using _t = void (ViewSimulation::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewSimulation::graphiTypeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ViewSimulation::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewSimulation::eqTextChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ViewSimulation::*)(QAction * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewSimulation::createActor)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ViewSimulation::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewSimulation::rulerToggle)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ViewSimulation::*)(Actor * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewSimulation::deletedObject)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ViewSimulation::*)(Actor * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewSimulation::setSelectedActorSignal)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ViewSimulation::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewSimulation::isMovibleSignal)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (ViewSimulation::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewSimulation::playSignal)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (ViewSimulation::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewSimulation::pauseSignal)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (ViewSimulation::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewSimulation::stopSignal)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (ViewSimulation::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewSimulation::reverseSignal)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (ViewSimulation::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewSimulation::toStartSignal)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (ViewSimulation::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewSimulation::toEndSignal)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (ViewSimulation::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewSimulation::loopEnable)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (ViewSimulation::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewSimulation::loopInit)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (ViewSimulation::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewSimulation::loopDuration)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (ViewSimulation::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewSimulation::intervalDuration)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (ViewSimulation::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewSimulation::showSettings)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (ViewSimulation::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewSimulation::timeNowChanged)) {
                *result = 18;
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
, QtPrivate::TypeAndForceComplete<ViewSimulation, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QAction *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Actor *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Actor *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QList<Actor*> *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<float, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


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
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    }
    return _id;
}

// SIGNAL 0
void ViewSimulation::graphiTypeChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ViewSimulation::eqTextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ViewSimulation::createActor(QAction * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ViewSimulation::rulerToggle(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ViewSimulation::deletedObject(Actor * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ViewSimulation::setSelectedActorSignal(Actor * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ViewSimulation::isMovibleSignal(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void ViewSimulation::playSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void ViewSimulation::pauseSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void ViewSimulation::stopSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void ViewSimulation::reverseSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void ViewSimulation::toStartSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void ViewSimulation::toEndSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void ViewSimulation::loopEnable(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void ViewSimulation::loopInit(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void ViewSimulation::loopDuration(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void ViewSimulation::intervalDuration(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void ViewSimulation::showSettings()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void ViewSimulation::timeNowChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
