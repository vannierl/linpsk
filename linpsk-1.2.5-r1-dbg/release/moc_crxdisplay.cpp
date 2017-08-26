/****************************************************************************
** Meta object code from reading C++ file 'crxdisplay.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../gui/crxdisplay.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'crxdisplay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CRxDisplay[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   39,   41,   41, 0x05,
      42,   41,   41,   41, 0x05,
      61,   41,   41,   41, 0x05,
      76,   39,   41,   41, 0x05,

 // slots: signature, parameters, type, tag, flags
     104,  134,   41,   41, 0x0a,
     163,   41,   41,   41, 0x0a,
     186,  202,   41,   41, 0x0a,
     207,  202,   41,   41, 0x0a,
     233,   41,   41,   41, 0x0a,
     252,   41,   41,   41, 0x0a,
     269,   41,   41,   41, 0x0a,
     291,   41,   41,   41, 0x0a,
     311,   41,   41,   41, 0x09,
     328,   41,   41,   41, 0x09,
     345,   41,   41,   41, 0x09,
     371,   41,   41,   41, 0x09,
     381,   41,   41,   41, 0x09,
     397,   41,   41,   41, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_CRxDisplay[] = {
    "CRxDisplay\0startPlotting(double*,bool)\0"
    ",\0\0newActiveChannel()\0new_IMD(float)\0"
    "setQsoData(QsoData,QString)\0"
    "addRxWindow(int,Mode,QString)\0"
    "Frequency,Modulation,Heading\0"
    "setRxFrequency(double)\0setAfc(AfcMode)\0"
    "mode\0setAfcProperties(AfcMode)\0"
    "select_frequency()\0select_if_tune()\0"
    "update_frequency(int)\0update_if_tune(int)\0"
    "languageChange()\0process_rxdata()\0"
    "changeActiveRxWindow(int)\0trigger()\0"
    "clearRxWindow()\0record(bool)\0"
};

void CRxDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CRxDisplay *_t = static_cast<CRxDisplay *>(_o);
        switch (_id) {
        case 0: _t->startPlotting((*reinterpret_cast< double*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->newActiveChannel(); break;
        case 2: _t->new_IMD((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 3: _t->setQsoData((*reinterpret_cast< QsoData(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: _t->addRxWindow((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Mode(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 5: _t->setRxFrequency((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->setAfc((*reinterpret_cast< AfcMode(*)>(_a[1]))); break;
        case 7: _t->setAfcProperties((*reinterpret_cast< AfcMode(*)>(_a[1]))); break;
        case 8: _t->select_frequency(); break;
        case 9: _t->select_if_tune(); break;
        case 10: _t->update_frequency((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->update_if_tune((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->languageChange(); break;
        case 13: _t->process_rxdata(); break;
        case 14: _t->changeActiveRxWindow((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->trigger(); break;
        case 16: _t->clearRxWindow(); break;
        case 17: _t->record((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CRxDisplay::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CRxDisplay::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_CRxDisplay,
      qt_meta_data_CRxDisplay, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CRxDisplay::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CRxDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CRxDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CRxDisplay))
        return static_cast<void*>(const_cast< CRxDisplay*>(this));
    return QFrame::qt_metacast(_clname);
}

int CRxDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void CRxDisplay::startPlotting(double * _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CRxDisplay::newActiveChannel()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void CRxDisplay::new_IMD(float _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CRxDisplay::setQsoData(QsoData _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
