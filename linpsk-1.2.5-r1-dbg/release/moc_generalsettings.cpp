/****************************************************************************
** Meta object code from reading C++ file 'generalsettings.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../gui/generalsettings.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'generalsettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GeneralSettings[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   37,   37,   37, 0x09,
      38,   37,   37,   37, 0x09,
      64,   37,   37,   37, 0x09,
      88,   37,   37,   37, 0x09,
     114,  137,   37,   37, 0x09,
     139,   37,   37,   37, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_GeneralSettings[] = {
    "GeneralSettings\0selectDemomode(bool)\0"
    "\0setPTTDevice(QModelIndex)\0"
    "selectFileLogging(bool)\0"
    "selectLinLogLogging(bool)\0"
    "setSampleRate(QString)\0s\0"
    "setComplexFormat(bool)\0"
};

void GeneralSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GeneralSettings *_t = static_cast<GeneralSettings *>(_o);
        switch (_id) {
        case 0: _t->selectDemomode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setPTTDevice((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->selectFileLogging((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->selectLinLogLogging((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->setSampleRate((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->setComplexFormat((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GeneralSettings::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GeneralSettings::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_GeneralSettings,
      qt_meta_data_GeneralSettings, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GeneralSettings::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GeneralSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GeneralSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GeneralSettings))
        return static_cast<void*>(const_cast< GeneralSettings*>(this));
    return QDialog::qt_metacast(_clname);
}

int GeneralSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
