/****************************************************************************
** Meta object code from reading C++ file 'initialdialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../src/gui/initialdialog.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'initialdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_InitialDialog_t {
    const uint offsetsAndSize[20];
    char stringdata0[128];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_InitialDialog_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_InitialDialog_t qt_meta_stringdata_InitialDialog = {
    {
QT_MOC_LITERAL(0, 13), // "InitialDialog"
QT_MOC_LITERAL(14, 15), // "createNewSesion"
QT_MOC_LITERAL(30, 0), // ""
QT_MOC_LITERAL(31, 8), // "Session*"
QT_MOC_LITERAL(40, 7), // "session"
QT_MOC_LITERAL(48, 10), // "loadSesion"
QT_MOC_LITERAL(59, 14), // "loadLastSesion"
QT_MOC_LITERAL(74, 19), // "createNewSesionSlot"
QT_MOC_LITERAL(94, 14), // "loadSesionSlot"
QT_MOC_LITERAL(109, 18) // "loadLastSesionSlot"

    },
    "InitialDialog\0createNewSesion\0\0Session*\0"
    "session\0loadSesion\0loadLastSesion\0"
    "createNewSesionSlot\0loadSesionSlot\0"
    "loadLastSesionSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InitialDialog[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x06,    1 /* Public */,
       5,    0,   53,    2, 0x06,    3 /* Public */,
       6,    0,   54,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,   55,    2, 0x08,    5 /* Private */,
       8,    0,   56,    2, 0x08,    6 /* Private */,
       9,    0,   57,    2, 0x08,    7 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void InitialDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InitialDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->createNewSesion((*reinterpret_cast< Session*(*)>(_a[1]))); break;
        case 1: _t->loadSesion(); break;
        case 2: _t->loadLastSesion(); break;
        case 3: _t->createNewSesionSlot(); break;
        case 4: _t->loadSesionSlot(); break;
        case 5: _t->loadLastSesionSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (InitialDialog::*)(Session * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InitialDialog::createNewSesion)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (InitialDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InitialDialog::loadSesion)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (InitialDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InitialDialog::loadLastSesion)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject InitialDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_InitialDialog.offsetsAndSize,
    qt_meta_data_InitialDialog,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_InitialDialog_t
, QtPrivate::TypeAndForceComplete<InitialDialog, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Session *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *InitialDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InitialDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InitialDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int InitialDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void InitialDialog::createNewSesion(Session * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void InitialDialog::loadSesion()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void InitialDialog::loadLastSesion()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
