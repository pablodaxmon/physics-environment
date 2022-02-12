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
    const uint offsetsAndSize[42];
    char stringdata0[274];
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
QT_MOC_LITERAL(129, 18), // "updateSceneObjects"
QT_MOC_LITERAL(148, 14), // "QList<Actor*>*"
QT_MOC_LITERAL(163, 10), // "listactors"
QT_MOC_LITERAL(174, 10), // "moveToggle"
QT_MOC_LITERAL(185, 15), // "setItemSelected"
QT_MOC_LITERAL(201, 12), // "deleteObject"
QT_MOC_LITERAL(214, 21), // "setSelectedActorSlots"
QT_MOC_LITERAL(236, 16), // "showMenuSettings"
QT_MOC_LITERAL(253, 20) // "showMenuCreateObject"

    },
    "ViewSimulation\0eqTextChanged\0\0createActor\0"
    "QAction*\0action\0rulerToggle\0checked\0"
    "deletedObject\0Actor*\0object\0"
    "setSelectedActorSignal\0updateSceneObjects\0"
    "QList<Actor*>*\0listactors\0moveToggle\0"
    "setItemSelected\0deleteObject\0"
    "setSelectedActorSlots\0showMenuSettings\0"
    "showMenuCreateObject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ViewSimulation[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x06,    1 /* Public */,
       3,    1,   87,    2, 0x06,    2 /* Public */,
       6,    1,   90,    2, 0x06,    4 /* Public */,
       8,    1,   93,    2, 0x06,    6 /* Public */,
      11,    1,   96,    2, 0x06,    8 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      12,    1,   99,    2, 0x0a,   10 /* Public */,
      15,    1,  102,    2, 0x0a,   12 /* Public */,
      16,    0,  105,    2, 0x0a,   14 /* Public */,
      17,    0,  106,    2, 0x0a,   15 /* Public */,
      18,    0,  107,    2, 0x0a,   16 /* Public */,
      19,    0,  108,    2, 0x08,   17 /* Private */,
      20,    0,  109,    2, 0x08,   18 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void,
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
        case 5: _t->updateSceneObjects((*reinterpret_cast< QList<Actor*>*(*)>(_a[1]))); break;
        case 6: _t->moveToggle((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->setItemSelected(); break;
        case 8: _t->deleteObject(); break;
        case 9: _t->setSelectedActorSlots(); break;
        case 10: _t->showMenuSettings(); break;
        case 11: _t->showMenuCreateObject(); break;
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
    }
}

const QMetaObject ViewSimulation::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ViewSimulation.offsetsAndSize,
    qt_meta_data_ViewSimulation,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ViewSimulation_t
, QtPrivate::TypeAndForceComplete<ViewSimulation, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QAction *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Actor *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Actor *, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QList<Actor*> *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


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
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
