/****************************************************************************
** Meta object code from reading C++ file 'addfunction.h'
**
** Created: Fri 2. Nov 07:49:28 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../addfunction.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addfunction.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AddFunction[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x08,
      39,   12,   12,   12, 0x08,
      64,   12,   12,   12, 0x08,
      92,   86,   12,   12, 0x08,
     128,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_AddFunction[] = {
    "AddFunction\0\0on_removeButton_clicked()\0"
    "on_selectClass_clicked()\0on_okbutton_clicked()\0"
    "index\0on_varType_currentIndexChanged(int)\0"
    "on_AddButton_clicked()\0"
};

void AddFunction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AddFunction *_t = static_cast<AddFunction *>(_o);
        switch (_id) {
        case 0: _t->on_removeButton_clicked(); break;
        case 1: _t->on_selectClass_clicked(); break;
        case 2: _t->on_okbutton_clicked(); break;
        case 3: _t->on_varType_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_AddButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AddFunction::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AddFunction::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AddFunction,
      qt_meta_data_AddFunction, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AddFunction::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AddFunction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AddFunction::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AddFunction))
        return static_cast<void*>(const_cast< AddFunction*>(this));
    return QDialog::qt_metacast(_clname);
}

int AddFunction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
