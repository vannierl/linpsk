/****************************************************************************
** Meta object code from reading C++ file 'spectrumdisplay.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../gui/spectrumdisplay.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'spectrumdisplay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SpectrumDisplay[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   41,   41,   41, 0x05,

 // slots: signature, parameters, type, tag, flags
      42,   66,   41,   41, 0x0a,
      68,   41,   41,   41, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_SpectrumDisplay[] = {
    "SpectrumDisplay\0FrequencyChanged(double)\0"
    "\0startPlot(double*,bool)\0,\0"
    "setnewFrequency(int)\0"
};

void SpectrumDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SpectrumDisplay *_t = static_cast<SpectrumDisplay *>(_o);
        switch (_id) {
        case 0: _t->FrequencyChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->startPlot((*reinterpret_cast< double*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->setnewFrequency((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SpectrumDisplay::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SpectrumDisplay::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_SpectrumDisplay,
      qt_meta_data_SpectrumDisplay, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SpectrumDisplay::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SpectrumDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SpectrumDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SpectrumDisplay))
        return static_cast<void*>(const_cast< SpectrumDisplay*>(this));
    return QFrame::qt_metacast(_clname);
}

int SpectrumDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void SpectrumDisplay::FrequencyChanged(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
