/****************************************************************************
** Meta object code from reading C++ file 'cdemodulator.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/cdemodulator.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cdemodulator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CDemodulator[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   29,   29,   29, 0x05,

 // slots: signature, parameters, type, tag, flags
      30,   29,   29,   29, 0x0a,
      53,   29,   29,   29, 0x0a,
      71,   29,   29,   29, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CDemodulator[] = {
    "CDemodulator\0newSymbol(char)\0\0"
    "setRxFrequency(double)\0setThreshold(int)\0"
    "setSquelch(bool)\0"
};

void CDemodulator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CDemodulator *_t = static_cast<CDemodulator *>(_o);
        switch (_id) {
        case 0: _t->newSymbol((*reinterpret_cast< char(*)>(_a[1]))); break;
        case 1: _t->setRxFrequency((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->setThreshold((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setSquelch((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CDemodulator::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CDemodulator::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CDemodulator,
      qt_meta_data_CDemodulator, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CDemodulator::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CDemodulator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CDemodulator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CDemodulator))
        return static_cast<void*>(const_cast< CDemodulator*>(this));
    return QObject::qt_metacast(_clname);
}

int CDemodulator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void CDemodulator::newSymbol(char _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
