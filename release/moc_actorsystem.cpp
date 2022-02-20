/****************************************************************************
** Meta object code from reading C++ file 'actorsystem.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../src/core/actorsystem.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'actorsystem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ActorSystem_t {
    const uint offsetsAndSize[44];
    char stringdata0[246];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_ActorSystem_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_ActorSystem_t qt_meta_stringdata_ActorSystem = {
    {
QT_MOC_LITERAL(0, 11), // "ActorSystem"
QT_MOC_LITERAL(12, 14), // "addActorSignal"
QT_MOC_LITERAL(27, 0), // ""
QT_MOC_LITERAL(28, 14), // "QList<Actor*>*"
QT_MOC_LITERAL(43, 5), // "actor"
QT_MOC_LITERAL(49, 19), // "selectedActorSignal"
QT_MOC_LITERAL(69, 6), // "Actor*"
QT_MOC_LITERAL(76, 11), // "startActors"
QT_MOC_LITERAL(88, 12), // "updateActors"
QT_MOC_LITERAL(101, 4), // "time"
QT_MOC_LITERAL(106, 10), // "stopActors"
QT_MOC_LITERAL(117, 8), // "addActor"
QT_MOC_LITERAL(126, 8), // "QAction*"
QT_MOC_LITERAL(135, 6), // "action"
QT_MOC_LITERAL(142, 11), // "deleteActor"
QT_MOC_LITERAL(154, 16), // "setSelectedActor"
QT_MOC_LITERAL(171, 24), // "setSelectedActorFromView"
QT_MOC_LITERAL(196, 11), // "QModelIndex"
QT_MOC_LITERAL(208, 5), // "index"
QT_MOC_LITERAL(214, 5), // "reset"
QT_MOC_LITERAL(220, 12), // "setStopEvery"
QT_MOC_LITERAL(233, 12) // "newStopEvery"

    },
    "ActorSystem\0addActorSignal\0\0QList<Actor*>*\0"
    "actor\0selectedActorSignal\0Actor*\0"
    "startActors\0updateActors\0time\0stopActors\0"
    "addActor\0QAction*\0action\0deleteActor\0"
    "setSelectedActor\0setSelectedActorFromView\0"
    "QModelIndex\0index\0reset\0setStopEvery\0"
    "newStopEvery"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ActorSystem[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   80,    2, 0x06,    1 /* Public */,
       5,    1,   83,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,   86,    2, 0x0a,    5 /* Public */,
       8,    1,   87,    2, 0x0a,    6 /* Public */,
      10,    0,   90,    2, 0x0a,    8 /* Public */,
      11,    1,   91,    2, 0x0a,    9 /* Public */,
      14,    1,   94,    2, 0x0a,   11 /* Public */,
      15,    1,   97,    2, 0x0a,   13 /* Public */,
      16,    1,  100,    2, 0x0a,   15 /* Public */,
      19,    0,  103,    2, 0x0a,   17 /* Public */,
      20,    1,  104,    2, 0x0a,   18 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,    9,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 6,    4,
    QMetaType::Void, 0x80000000 | 6,    4,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   21,

       0        // eod
};

void ActorSystem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ActorSystem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->addActorSignal((*reinterpret_cast< QList<Actor*>*(*)>(_a[1]))); break;
        case 1: _t->selectedActorSignal((*reinterpret_cast< Actor*(*)>(_a[1]))); break;
        case 2: _t->startActors(); break;
        case 3: _t->updateActors((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->stopActors(); break;
        case 5: _t->addActor((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 6: _t->deleteActor((*reinterpret_cast< Actor*(*)>(_a[1]))); break;
        case 7: _t->setSelectedActor((*reinterpret_cast< Actor*(*)>(_a[1]))); break;
        case 8: _t->setSelectedActorFromView((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 9: _t->reset(); break;
        case 10: _t->setStopEvery((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
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
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Actor* >(); break;
            }
            break;
        case 7:
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
            using _t = void (ActorSystem::*)(QList<Actor*> * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActorSystem::addActorSignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ActorSystem::*)(Actor * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActorSystem::selectedActorSignal)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject ActorSystem::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ActorSystem.offsetsAndSize,
    qt_meta_data_ActorSystem,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ActorSystem_t
, QtPrivate::TypeAndForceComplete<ActorSystem, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QList<Actor*> *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Actor *, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<float, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QAction *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Actor *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Actor *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
    nullptr
} };


const QMetaObject *ActorSystem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ActorSystem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ActorSystem.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ActorSystem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void ActorSystem::addActorSignal(QList<Actor*> * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ActorSystem::selectedActorSignal(Actor * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
