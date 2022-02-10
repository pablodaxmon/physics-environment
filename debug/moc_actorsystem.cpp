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
    const uint offsetsAndSize[26];
    char stringdata0[129];
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
QT_MOC_LITERAL(49, 12), // "updateActors"
QT_MOC_LITERAL(62, 8), // "addActor"
QT_MOC_LITERAL(71, 8), // "QAction*"
QT_MOC_LITERAL(80, 6), // "action"
QT_MOC_LITERAL(87, 11), // "deleteActor"
QT_MOC_LITERAL(99, 6), // "Actor*"
QT_MOC_LITERAL(106, 16), // "setSelectedActor"
QT_MOC_LITERAL(123, 5) // "index"

    },
    "ActorSystem\0addActorSignal\0\0QList<Actor*>*\0"
    "actor\0updateActors\0addActor\0QAction*\0"
    "action\0deleteActor\0Actor*\0setSelectedActor\0"
    "index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ActorSystem[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   47,    2, 0x0a,    3 /* Public */,
       6,    1,   48,    2, 0x0a,    4 /* Public */,
       9,    1,   51,    2, 0x0a,    6 /* Public */,
      11,    1,   54,    2, 0x0a,    8 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Bool, 0x80000000 | 10,    4,
    QMetaType::Void, QMetaType::Int,   12,

       0        // eod
};

void ActorSystem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ActorSystem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->addActorSignal((*reinterpret_cast< QList<Actor*>*(*)>(_a[1]))); break;
        case 1: _t->updateActors(); break;
        case 2: _t->addActor((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 3: { bool _r = _t->deleteActor((*reinterpret_cast< Actor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->setSelectedActor((*reinterpret_cast< int(*)>(_a[1]))); break;
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
    }
}

const QMetaObject ActorSystem::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ActorSystem.offsetsAndSize,
    qt_meta_data_ActorSystem,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ActorSystem_t
, QtPrivate::TypeAndForceComplete<ActorSystem, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QList<Actor*> *, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QAction *, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<Actor *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


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
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void ActorSystem::addActorSignal(QList<Actor*> * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
