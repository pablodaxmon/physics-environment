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
    const uint offsetsAndSize[58];
    char stringdata0[326];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_ActorSystem_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_ActorSystem_t qt_meta_stringdata_ActorSystem = {
    {
QT_MOC_LITERAL(0, 11), // "ActorSystem"
QT_MOC_LITERAL(12, 14), // "addActorSignal"
QT_MOC_LITERAL(27, 0), // ""
QT_MOC_LITERAL(28, 4), // "name"
QT_MOC_LITERAL(33, 5), // "index"
QT_MOC_LITERAL(39, 12), // "updateActors"
QT_MOC_LITERAL(52, 11), // "startActors"
QT_MOC_LITERAL(64, 8), // "addActor"
QT_MOC_LITERAL(73, 11), // "deleteActor"
QT_MOC_LITERAL(85, 6), // "Actor*"
QT_MOC_LITERAL(92, 5), // "actor"
QT_MOC_LITERAL(98, 14), // "getActorbyName"
QT_MOC_LITERAL(113, 11), // "const char*"
QT_MOC_LITERAL(125, 15), // "getActorbyIndex"
QT_MOC_LITERAL(141, 18), // "getActorInPosition"
QT_MOC_LITERAL(160, 10), // "QVector2D*"
QT_MOC_LITERAL(171, 8), // "position"
QT_MOC_LITERAL(180, 15), // "getActorsInArea"
QT_MOC_LITERAL(196, 13), // "QList<Actor*>"
QT_MOC_LITERAL(210, 9), // "positionA"
QT_MOC_LITERAL(220, 9), // "positionB"
QT_MOC_LITERAL(230, 6), // "center"
QT_MOC_LITERAL(237, 6), // "radius"
QT_MOC_LITERAL(244, 14), // "getActorsByTag"
QT_MOC_LITERAL(259, 8), // "QString*"
QT_MOC_LITERAL(268, 3), // "tag"
QT_MOC_LITERAL(272, 16), // "setSelectedActor"
QT_MOC_LITERAL(289, 11), // "QModelIndex"
QT_MOC_LITERAL(301, 24) // "setCodeEqToSelectedActor"

    },
    "ActorSystem\0addActorSignal\0\0name\0index\0"
    "updateActors\0startActors\0addActor\0"
    "deleteActor\0Actor*\0actor\0getActorbyName\0"
    "const char*\0getActorbyIndex\0"
    "getActorInPosition\0QVector2D*\0position\0"
    "getActorsInArea\0QList<Actor*>\0positionA\0"
    "positionB\0center\0radius\0getActorsByTag\0"
    "QString*\0tag\0setSelectedActor\0QModelIndex\0"
    "setCodeEqToSelectedActor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ActorSystem[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   92,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   97,    2, 0x0a,    4 /* Public */,
       6,    0,   98,    2, 0x0a,    5 /* Public */,
       7,    0,   99,    2, 0x0a,    6 /* Public */,
       8,    1,  100,    2, 0x0a,    7 /* Public */,
      11,    1,  103,    2, 0x0a,    9 /* Public */,
      13,    1,  106,    2, 0x0a,   11 /* Public */,
      14,    1,  109,    2, 0x0a,   13 /* Public */,
      17,    2,  112,    2, 0x0a,   15 /* Public */,
      17,    2,  117,    2, 0x0a,   18 /* Public */,
      23,    1,  122,    2, 0x0a,   21 /* Public */,
      26,    1,  125,    2, 0x0a,   23 /* Public */,
      28,    0,  128,    2, 0x0a,   25 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 12,    3,
    0x80000000 | 9, QMetaType::Int,    4,
    0x80000000 | 9, 0x80000000 | 15,   16,
    0x80000000 | 18, 0x80000000 | 15, 0x80000000 | 15,   19,   20,
    0x80000000 | 18, 0x80000000 | 15, QMetaType::Float,   21,   22,
    0x80000000 | 18, 0x80000000 | 24,   25,
    QMetaType::Void, 0x80000000 | 27,    4,
    QMetaType::Void,

       0        // eod
};

void ActorSystem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ActorSystem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->addActorSignal((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 1: _t->updateActors(); break;
        case 2: _t->startActors(); break;
        case 3: _t->addActor(); break;
        case 4: { bool _r = _t->deleteActor((*reinterpret_cast< Actor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->getActorbyName((*reinterpret_cast< const char*(*)>(_a[1]))); break;
        case 6: { Actor* _r = _t->getActorbyIndex((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Actor**>(_a[0]) = std::move(_r); }  break;
        case 7: { Actor* _r = _t->getActorInPosition((*reinterpret_cast< QVector2D*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Actor**>(_a[0]) = std::move(_r); }  break;
        case 8: { QList<Actor*> _r = _t->getActorsInArea((*reinterpret_cast< QVector2D*(*)>(_a[1])),(*reinterpret_cast< QVector2D*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QList<Actor*>*>(_a[0]) = std::move(_r); }  break;
        case 9: { QList<Actor*> _r = _t->getActorsInArea((*reinterpret_cast< QVector2D*(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QList<Actor*>*>(_a[0]) = std::move(_r); }  break;
        case 10: { QList<Actor*> _r = _t->getActorsByTag((*reinterpret_cast< QString*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<Actor*>*>(_a[0]) = std::move(_r); }  break;
        case 11: _t->setSelectedActor((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 12: _t->setCodeEqToSelectedActor(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ActorSystem::*)(const QString , const int );
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
, QtPrivate::TypeAndForceComplete<ActorSystem, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString, std::false_type>, QtPrivate::TypeAndForceComplete<const int, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<Actor *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const char *, std::false_type>, QtPrivate::TypeAndForceComplete<Actor *, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<Actor *, std::false_type>, QtPrivate::TypeAndForceComplete<QVector2D *, std::false_type>, QtPrivate::TypeAndForceComplete<QList<Actor*>, std::false_type>, QtPrivate::TypeAndForceComplete<QVector2D *, std::false_type>, QtPrivate::TypeAndForceComplete<QVector2D *, std::false_type>, QtPrivate::TypeAndForceComplete<QList<Actor*>, std::false_type>, QtPrivate::TypeAndForceComplete<QVector2D *, std::false_type>, QtPrivate::TypeAndForceComplete<float, std::false_type>, QtPrivate::TypeAndForceComplete<QList<Actor*>, std::false_type>, QtPrivate::TypeAndForceComplete<QString *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


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
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void ActorSystem::addActorSignal(const QString _t1, const int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
