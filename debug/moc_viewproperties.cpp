/****************************************************************************
** Meta object code from reading C++ file 'viewproperties.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../src/gui/viewproperties.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'viewproperties.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ViewProperties_t {
    const uint offsetsAndSize[24];
    char stringdata0[121];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_ViewProperties_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_ViewProperties_t qt_meta_stringdata_ViewProperties = {
    {
QT_MOC_LITERAL(0, 14), // "ViewProperties"
QT_MOC_LITERAL(15, 13), // "valuesChanged"
QT_MOC_LITERAL(29, 0), // ""
QT_MOC_LITERAL(30, 4), // "Unit"
QT_MOC_LITERAL(35, 4), // "unit"
QT_MOC_LITERAL(40, 5), // "value"
QT_MOC_LITERAL(46, 18), // "setValuesFromActor"
QT_MOC_LITERAL(65, 17), // "QMap<Unit,float>*"
QT_MOC_LITERAL(83, 7), // "valores"
QT_MOC_LITERAL(91, 16), // "setSelectedActor"
QT_MOC_LITERAL(108, 6), // "Actor*"
QT_MOC_LITERAL(115, 5) // "actor"

    },
    "ViewProperties\0valuesChanged\0\0Unit\0"
    "unit\0value\0setValuesFromActor\0"
    "QMap<Unit,float>*\0valores\0setSelectedActor\0"
    "Actor*\0actor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ViewProperties[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   32,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    1,   37,    2, 0x0a,    4 /* Public */,
       9,    1,   40,    2, 0x0a,    6 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Float,    4,    5,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 10,   11,

       0        // eod
};

void ViewProperties::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ViewProperties *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->valuesChanged((*reinterpret_cast< Unit(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 1: _t->setValuesFromActor((*reinterpret_cast< QMap<Unit,float>*(*)>(_a[1]))); break;
        case 2: _t->setSelectedActor((*reinterpret_cast< Actor*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ViewProperties::*)(Unit , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewProperties::valuesChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ViewProperties::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ViewProperties.offsetsAndSize,
    qt_meta_data_ViewProperties,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ViewProperties_t
, QtPrivate::TypeAndForceComplete<ViewProperties, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Unit, std::false_type>, QtPrivate::TypeAndForceComplete<float, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QMap<Unit,float> *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Actor *, std::false_type>


>,
    nullptr
} };


const QMetaObject *ViewProperties::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ViewProperties::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ViewProperties.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ViewProperties::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void ViewProperties::valuesChanged(Unit _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
