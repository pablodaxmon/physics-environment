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
    const uint offsetsAndSize[36];
    char stringdata0[211];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_InitialDialog_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_InitialDialog_t qt_meta_stringdata_InitialDialog = {
    {
QT_MOC_LITERAL(0, 13), // "InitialDialog"
QT_MOC_LITERAL(14, 15), // "createNewSesion"
QT_MOC_LITERAL(30, 0), // ""
QT_MOC_LITERAL(31, 11), // "ViewSession"
QT_MOC_LITERAL(43, 5), // "_view"
QT_MOC_LITERAL(49, 5), // "_name"
QT_MOC_LITERAL(55, 12), // "_description"
QT_MOC_LITERAL(68, 7), // "isBox2d"
QT_MOC_LITERAL(76, 7), // "gravity"
QT_MOC_LITERAL(84, 10), // "loadSesion"
QT_MOC_LITERAL(95, 3), // "url"
QT_MOC_LITERAL(99, 19), // "createNewSesionSlot"
QT_MOC_LITERAL(119, 14), // "loadSesionSlot"
QT_MOC_LITERAL(134, 18), // "loadLastSesionSlot"
QT_MOC_LITERAL(153, 14), // "setCurrentItem"
QT_MOC_LITERAL(168, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(185, 4), // "item"
QT_MOC_LITERAL(190, 20) // "setEnabledLoadButton"

    },
    "InitialDialog\0createNewSesion\0\0"
    "ViewSession\0_view\0_name\0_description\0"
    "isBox2d\0gravity\0loadSesion\0url\0"
    "createNewSesionSlot\0loadSesionSlot\0"
    "loadLastSesionSlot\0setCurrentItem\0"
    "QListWidgetItem*\0item\0setEnabledLoadButton"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InitialDialog[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    5,   56,    2, 0x06,    1 /* Public */,
       9,    1,   67,    2, 0x06,    7 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      11,    0,   70,    2, 0x08,    9 /* Private */,
      12,    0,   71,    2, 0x08,   10 /* Private */,
      13,    0,   72,    2, 0x08,   11 /* Private */,
      14,    1,   73,    2, 0x08,   12 /* Private */,
      17,    0,   76,    2, 0x08,   14 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::QString, QMetaType::Bool, QMetaType::Bool,    4,    5,    6,    7,    8,
    QMetaType::Void, QMetaType::QString,   10,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void,

       0        // eod
};

void InitialDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InitialDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->createNewSesion((*reinterpret_cast< ViewSession(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 1: _t->loadSesion((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->createNewSesionSlot(); break;
        case 3: _t->loadSesionSlot(); break;
        case 4: _t->loadLastSesionSlot(); break;
        case 5: _t->setCurrentItem((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 6: _t->setEnabledLoadButton(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (InitialDialog::*)(ViewSession , QString , QString , bool , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InitialDialog::createNewSesion)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (InitialDialog::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InitialDialog::loadSesion)) {
                *result = 1;
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
, QtPrivate::TypeAndForceComplete<InitialDialog, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<ViewSession, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


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
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void InitialDialog::createNewSesion(ViewSession _t1, QString _t2, QString _t3, bool _t4, bool _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void InitialDialog::loadSesion(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
