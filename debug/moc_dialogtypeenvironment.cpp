/****************************************************************************
** Meta object code from reading C++ file 'dialogtypeenvironment.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../src/gui/dialogtypeenvironment.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialogtypeenvironment.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DialogTypeEnvironment_t {
    const uint offsetsAndSize[12];
    char stringdata0[80];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_DialogTypeEnvironment_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_DialogTypeEnvironment_t qt_meta_stringdata_DialogTypeEnvironment = {
    {
QT_MOC_LITERAL(0, 21), // "DialogTypeEnvironment"
QT_MOC_LITERAL(22, 11), // "typeOnClick"
QT_MOC_LITERAL(34, 0), // ""
QT_MOC_LITERAL(35, 16), // "cinematicOnClick"
QT_MOC_LITERAL(52, 14), // "dinamicOnClick"
QT_MOC_LITERAL(67, 12) // "fluydOnClick"

    },
    "DialogTypeEnvironment\0typeOnClick\0\0"
    "cinematicOnClick\0dinamicOnClick\0"
    "fluydOnClick"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DialogTypeEnvironment[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   39,    2, 0x08,    2 /* Private */,
       4,    0,   40,    2, 0x08,    3 /* Private */,
       5,    0,   41,    2, 0x08,    4 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DialogTypeEnvironment::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DialogTypeEnvironment *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->typeOnClick(); break;
        case 1: _t->cinematicOnClick(); break;
        case 2: _t->dinamicOnClick(); break;
        case 3: _t->fluydOnClick(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DialogTypeEnvironment::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DialogTypeEnvironment::typeOnClick)) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject DialogTypeEnvironment::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_DialogTypeEnvironment.offsetsAndSize,
    qt_meta_data_DialogTypeEnvironment,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_DialogTypeEnvironment_t
, QtPrivate::TypeAndForceComplete<DialogTypeEnvironment, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *DialogTypeEnvironment::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DialogTypeEnvironment::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DialogTypeEnvironment.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int DialogTypeEnvironment::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void DialogTypeEnvironment::typeOnClick()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
