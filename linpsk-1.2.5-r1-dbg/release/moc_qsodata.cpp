/****************************************************************************
** Meta object code from reading C++ file 'qsodata.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../gui/qsodata.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qsodata.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QSOData[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       8,   22,   22,   22, 0x0a,
      23,   22,   22,   22, 0x0a,
      37,   22,   22,   22, 0x0a,
      52,   22,   22,   22, 0x0a,
      68,   22,   22,   22, 0x0a,
      90,   22,   22,   22, 0x0a,
     107,   22,   22,   22, 0x0a,
     120,   22,   22,   22, 0x0a,
     134,   22,   22,   22, 0x0a,
     152,   22,   22,   22, 0x0a,
     160,   22,   22,   22, 0x0a,
     178,   22,   22,   22, 0x0a,
     185,   22,   22,   22, 0x0a,
     212,   22,   22,   22, 0x0a,
     225,  253,   22,   22, 0x0a,
     255,   22,   22,   22, 0x0a,
     268,   22,   22,   22, 0x09,
     282,   22,   22,   22, 0x09,
     294,   22,   22,   22, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QSOData[] = {
    "QSOData\0Timechanged()\0\0Datechanged()\0"
    "MyRSTchanged()\0HisRSTchanged()\0"
    "frequencyChanged(int)\0Locatorchanged()\0"
    "QTHchanged()\0Namechanged()\0Callsignchanged()\0"
    "clear()\0refreshDateTime()\0save()\0"
    "calculateDistance(QString)\0dokChanged()\0"
    "setQsoData(QsoData,QString)\0,\0"
    "newChannel()\0sendRequest()\0stopTrial()\0"
    "copyAnswer()\0"
};

void QSOData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QSOData *_t = static_cast<QSOData *>(_o);
        switch (_id) {
        case 0: _t->Timechanged(); break;
        case 1: _t->Datechanged(); break;
        case 2: _t->MyRSTchanged(); break;
        case 3: _t->HisRSTchanged(); break;
        case 4: _t->frequencyChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->Locatorchanged(); break;
        case 6: _t->QTHchanged(); break;
        case 7: _t->Namechanged(); break;
        case 8: _t->Callsignchanged(); break;
        case 9: _t->clear(); break;
        case 10: _t->refreshDateTime(); break;
        case 11: _t->save(); break;
        case 12: _t->calculateDistance((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->dokChanged(); break;
        case 14: _t->setQsoData((*reinterpret_cast< QsoData(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 15: _t->newChannel(); break;
        case 16: _t->sendRequest(); break;
        case 17: _t->stopTrial(); break;
        case 18: _t->copyAnswer(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QSOData::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QSOData::staticMetaObject = {
    { &QGroupBox::staticMetaObject, qt_meta_stringdata_QSOData,
      qt_meta_data_QSOData, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QSOData::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QSOData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QSOData::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QSOData))
        return static_cast<void*>(const_cast< QSOData*>(this));
    return QGroupBox::qt_metacast(_clname);
}

int QSOData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGroupBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
