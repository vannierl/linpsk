/****************************************************************************
** Meta object code from reading C++ file 'crxchannel.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/crxchannel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'crxchannel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CRxChannel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   26,   26,   26, 0x05,

 // slots: signature, parameters, type, tag, flags
      27,   26,   26,   26, 0x0a,
      50,   26,   26,   26, 0x0a,
      57,   26,   26,   26, 0x0a,
      64,   26,   80,   26, 0x0a,
      92,   26,   26,   26, 0x0a,
     112,   26,   26,   26, 0x0a,
     129,   26,   26,   26, 0x0a,
     144,   26,   26,   26, 0x0a,
     160,   26,   26,   26, 0x0a,
     174,   26,   26,   26, 0x0a,
     195,   26,  208,   26, 0x0a,
     217,   26,   26,   26, 0x0a,
     230,   26,   26,   26, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CRxChannel[] = {
    "CRxChannel\0Triggered(int)\0\0"
    "setRxFrequency(double)\0hide()\0show()\0"
    "getChannel(int)\0CRxChannel*\0"
    "setAfcMode(AfcMode)\0setSquelch(bool)\0"
    "updateRx(char)\0clearRxWindow()\0"
    "setMode(Mode)\0setQsoData(QsoInfo*)\0"
    "getQsoData()\0QsoInfo*\0record(bool)\0"
    "triggered()\0"
};

void CRxChannel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CRxChannel *_t = static_cast<CRxChannel *>(_o);
        switch (_id) {
        case 0: _t->Triggered((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setRxFrequency((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->hide(); break;
        case 3: _t->show(); break;
        case 4: { CRxChannel* _r = _t->getChannel((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< CRxChannel**>(_a[0]) = _r; }  break;
        case 5: _t->setAfcMode((*reinterpret_cast< AfcMode(*)>(_a[1]))); break;
        case 6: _t->setSquelch((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->updateRx((*reinterpret_cast< char(*)>(_a[1]))); break;
        case 8: _t->clearRxWindow(); break;
        case 9: _t->setMode((*reinterpret_cast< Mode(*)>(_a[1]))); break;
        case 10: _t->setQsoData((*reinterpret_cast< QsoInfo*(*)>(_a[1]))); break;
        case 11: { QsoInfo* _r = _t->getQsoData();
            if (_a[0]) *reinterpret_cast< QsoInfo**>(_a[0]) = _r; }  break;
        case 12: _t->record((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->triggered(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CRxChannel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CRxChannel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CRxChannel,
      qt_meta_data_CRxChannel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CRxChannel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CRxChannel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CRxChannel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CRxChannel))
        return static_cast<void*>(const_cast< CRxChannel*>(this));
    return QObject::qt_metacast(_clname);
}

int CRxChannel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void CRxChannel::Triggered(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
