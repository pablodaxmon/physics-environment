/****************************************************************************
** Meta object code from reading C++ file 'viewgraphicsresults.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../src/gui/viewgraphicsresults.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'viewgraphicsresults.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ViewGraphicsResults_t {
    const uint offsetsAndSize[2];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_ViewGraphicsResults_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_ViewGraphicsResults_t qt_meta_stringdata_ViewGraphicsResults = {
    {
QT_MOC_LITERAL(0, 19) // "ViewGraphicsResults"

    },
    "ViewGraphicsResults"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ViewGraphicsResults[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void ViewGraphicsResults::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject ViewGraphicsResults::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ViewGraphicsResults.offsetsAndSize,
    qt_meta_data_ViewGraphicsResults,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ViewGraphicsResults_t
, QtPrivate::TypeAndForceComplete<ViewGraphicsResults, std::true_type>



>,
    nullptr
} };


const QMetaObject *ViewGraphicsResults::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ViewGraphicsResults::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ViewGraphicsResults.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ViewGraphicsResults::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
