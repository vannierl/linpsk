/****************************************************************************
** Meta object code from reading C++ file 'frequencyselect.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/frequencyselect.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'frequencyselect.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FrequencySelect[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   41,   41,   41, 0x05,

 // slots: signature, parameters, type, tag, flags
      42,   41,   57,   41, 0x0a,
      64,   41,   41,   41, 0x0a,
      85,   41,   41,   41, 0x09,
     102,   41,   41,   41, 0x09,
     122,   41,   41,   41, 0x09,
     135,   41,   41,   41, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_FrequencySelect[] = {
    "FrequencySelect\0FrequencyChanged(double)\0"
    "\0getFrequency()\0double\0setFrequency(double)\0"
    "languageChange()\0checkFrequency(int)\0"
    "toggleWide()\0toggleActivate()\0"
};

void FrequencySelect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FrequencySelect *_t = static_cast<FrequencySelect *>(_o);
        switch (_id) {
        case 0: _t->FrequencyChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: { double _r = _t->getFrequency();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 2: _t->setFrequency((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->languageChange(); break;
        case 4: _t->checkFrequency((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->toggleWide(); break;
        case 6: _t->toggleActivate(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FrequencySelect::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FrequencySelect::staticMetaObject = {
    { &QGroupBox::staticMetaObject, qt_meta_stringdata_FrequencySelect,
      qt_meta_data_FrequencySelect, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FrequencySelect::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FrequencySelect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FrequencySelect::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FrequencySelect))
        return static_cast<void*>(const_cast< FrequencySelect*>(this));
    return QGroupBox::qt_metacast(_clname);
}

int FrequencySelect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGroupBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void FrequencySelect::FrequencyChanged(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
