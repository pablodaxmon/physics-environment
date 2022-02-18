/****************************************************************************
** Meta object code from reading C++ file 'createactiondinamicdialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../src/gui/createactiondinamicdialog.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'createactiondinamicdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CreateActionDinamicDialog_t {
    const uint offsetsAndSize[26];
    char stringdata0[151];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_CreateActionDinamicDialog_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_CreateActionDinamicDialog_t qt_meta_stringdata_CreateActionDinamicDialog = {
    {
QT_MOC_LITERAL(0, 25), // "CreateActionDinamicDialog"
QT_MOC_LITERAL(26, 13), // "createdAction"
QT_MOC_LITERAL(40, 0), // ""
QT_MOC_LITERAL(41, 15), // "unidadCondition"
QT_MOC_LITERAL(57, 4), // "time"
QT_MOC_LITERAL(62, 8), // "unidadTo"
QT_MOC_LITERAL(71, 14), // "valueCondition"
QT_MOC_LITERAL(86, 7), // "valueTo"
QT_MOC_LITERAL(94, 9), // "isDinamic"
QT_MOC_LITERAL(104, 17), // "createdActionSlot"
QT_MOC_LITERAL(122, 12), // "cancelAction"
QT_MOC_LITERAL(135, 9), // "updateGui"
QT_MOC_LITERAL(145, 5) // "index"

    },
    "CreateActionDinamicDialog\0createdAction\0"
    "\0unidadCondition\0time\0unidadTo\0"
    "valueCondition\0valueTo\0isDinamic\0"
    "createdActionSlot\0cancelAction\0updateGui\0"
    "index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CreateActionDinamicDialog[] = {

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
       1,    6,   38,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    0,   51,    2, 0x08,    8 /* Private */,
      10,    0,   52,    2, 0x08,    9 /* Private */,
      11,    1,   53,    2, 0x08,   10 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Bool,    3,    4,    5,    6,    7,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,

       0        // eod
};

void CreateActionDinamicDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CreateActionDinamicDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->createdAction((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6]))); break;
        case 1: _t->createdActionSlot(); break;
        case 2: _t->cancelAction(); break;
        case 3: _t->updateGui((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CreateActionDinamicDialog::*)(int , float , float , float , float , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CreateActionDinamicDialog::createdAction)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject CreateActionDinamicDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CreateActionDinamicDialog.offsetsAndSize,
    qt_meta_data_CreateActionDinamicDialog,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_CreateActionDinamicDialog_t
, QtPrivate::TypeAndForceComplete<CreateActionDinamicDialog, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<float, std::false_type>, QtPrivate::TypeAndForceComplete<float, std::false_type>, QtPrivate::TypeAndForceComplete<float, std::false_type>, QtPrivate::TypeAndForceComplete<float, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
    nullptr
} };


const QMetaObject *CreateActionDinamicDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CreateActionDinamicDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CreateActionDinamicDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int CreateActionDinamicDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void CreateActionDinamicDialog::createdAction(int _t1, float _t2, float _t3, float _t4, float _t5, bool _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
