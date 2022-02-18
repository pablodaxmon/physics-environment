/****************************************************************************
** Meta object code from reading C++ file 'viewobjectlist.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../src/gui/viewobjectlist.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'viewobjectlist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ViewObjectList_t {
    const uint offsetsAndSize[22];
    char stringdata0[118];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_ViewObjectList_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_ViewObjectList_t qt_meta_stringdata_ViewObjectList = {
    {
QT_MOC_LITERAL(0, 14), // "ViewObjectList"
QT_MOC_LITERAL(15, 10), // "selectItem"
QT_MOC_LITERAL(26, 0), // ""
QT_MOC_LITERAL(27, 11), // "QModelIndex"
QT_MOC_LITERAL(39, 5), // "index"
QT_MOC_LITERAL(45, 15), // "setSelectedItem"
QT_MOC_LITERAL(61, 13), // "addItemToList"
QT_MOC_LITERAL(75, 14), // "QList<Actor*>*"
QT_MOC_LITERAL(90, 5), // "actor"
QT_MOC_LITERAL(96, 16), // "removeItemToList"
QT_MOC_LITERAL(113, 4) // "name"

    },
    "ViewObjectList\0selectItem\0\0QModelIndex\0"
    "index\0setSelectedItem\0addItemToList\0"
    "QList<Actor*>*\0actor\0removeItemToList\0"
    "name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ViewObjectList[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x06,    1 /* Public */,
       5,    1,   41,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    1,   44,    2, 0x0a,    5 /* Public */,
       9,    1,   47,    2, 0x0a,    7 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::QString,   10,

       0        // eod
};

void ViewObjectList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ViewObjectList *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->selectItem((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->setSelectedItem((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->addItemToList((*reinterpret_cast< QList<Actor*>*(*)>(_a[1]))); break;
        case 3: _t->removeItemToList((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ViewObjectList::*)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewObjectList::selectItem)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ViewObjectList::*)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewObjectList::setSelectedItem)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject ViewObjectList::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ViewObjectList.offsetsAndSize,
    qt_meta_data_ViewObjectList,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ViewObjectList_t
, QtPrivate::TypeAndForceComplete<ViewObjectList, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QList<Actor*> *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString, std::false_type>


>,
    nullptr
} };


const QMetaObject *ViewObjectList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ViewObjectList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ViewObjectList.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ViewObjectList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void ViewObjectList::selectItem(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ViewObjectList::setSelectedItem(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
