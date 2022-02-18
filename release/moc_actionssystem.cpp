/****************************************************************************
** Meta object code from reading C++ file 'actionssystem.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../src/core/actionssystem.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'actionssystem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ActionsSystem_t {
    const uint offsetsAndSize[28];
    char stringdata0[144];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_ActionsSystem_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_ActionsSystem_t qt_meta_stringdata_ActionsSystem = {
    {
QT_MOC_LITERAL(0, 13), // "ActionsSystem"
QT_MOC_LITERAL(14, 16), // "setSelectedActor"
QT_MOC_LITERAL(31, 0), // ""
QT_MOC_LITERAL(32, 6), // "Actor*"
QT_MOC_LITERAL(39, 16), // "newSelectedActor"
QT_MOC_LITERAL(56, 12), // "addNewAction"
QT_MOC_LITERAL(69, 11), // "ActionItem*"
QT_MOC_LITERAL(81, 4), // "item"
QT_MOC_LITERAL(86, 20), // "addNewActionFromJson"
QT_MOC_LITERAL(107, 4), // "json"
QT_MOC_LITERAL(112, 5), // "actor"
QT_MOC_LITERAL(118, 14), // "executeActions"
QT_MOC_LITERAL(133, 4), // "time"
QT_MOC_LITERAL(138, 5) // "reset"

    },
    "ActionsSystem\0setSelectedActor\0\0Actor*\0"
    "newSelectedActor\0addNewAction\0ActionItem*\0"
    "item\0addNewActionFromJson\0json\0actor\0"
    "executeActions\0time\0reset"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ActionsSystem[] = {

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
       1,    1,   44,    2, 0x0a,    1 /* Public */,
       5,    1,   47,    2, 0x0a,    3 /* Public */,
       8,    2,   50,    2, 0x0a,    5 /* Public */,
      11,    1,   55,    2, 0x0a,    8 /* Public */,
      13,    0,   58,    2, 0x0a,   10 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::QJsonObject, 0x80000000 | 3,    9,   10,
    QMetaType::Void, QMetaType::Float,   12,
    QMetaType::Void,

       0        // eod
};

void ActionsSystem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ActionsSystem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setSelectedActor((*reinterpret_cast< Actor*(*)>(_a[1]))); break;
        case 1: _t->addNewAction((*reinterpret_cast< ActionItem*(*)>(_a[1]))); break;
        case 2: _t->addNewActionFromJson((*reinterpret_cast< const QJsonObject(*)>(_a[1])),(*reinterpret_cast< Actor*(*)>(_a[2]))); break;
        case 3: _t->executeActions((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->reset(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Actor* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ActionItem* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Actor* >(); break;
            }
            break;
        }
    }
}

const QMetaObject ActionsSystem::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ActionsSystem.offsetsAndSize,
    qt_meta_data_ActionsSystem,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ActionsSystem_t
, QtPrivate::TypeAndForceComplete<ActionsSystem, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Actor *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<ActionItem *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QJsonObject &, std::false_type>, QtPrivate::TypeAndForceComplete<Actor *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<float, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *ActionsSystem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ActionsSystem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ActionsSystem.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ActionsSystem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
