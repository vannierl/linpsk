/****************************************************************************
** Meta object code from reading C++ file 'csquelch.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/csquelch.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'csquelch.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_mySlider[] = {

 // content:
       6,       // revision
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

static const char qt_meta_stringdata_mySlider[] = {
    "mySlider\0"
};

void mySlider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData mySlider::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject mySlider::staticMetaObject = {
    { &QSlider::staticMetaObject, qt_meta_stringdata_mySlider,
      qt_meta_data_mySlider, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &mySlider::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *mySlider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *mySlider::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_mySlider))
        return static_cast<void*>(const_cast< mySlider*>(this));
    return QSlider::qt_metacast(_clname);
}

int mySlider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSlider::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_CSquelch[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,   27,   27,   27, 0x0a,
      28,   27,   27,   27, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_CSquelch[] = {
    "CSquelch\0setThreshold(int)\0\0"
    "languageChange()\0"
};

void CSquelch::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CSquelch *_t = static_cast<CSquelch *>(_o);
        switch (_id) {
        case 0: _t->setThreshold((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->languageChange(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CSquelch::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CSquelch::staticMetaObject = {
    { &QGroupBox::staticMetaObject, qt_meta_stringdata_CSquelch,
      qt_meta_data_CSquelch, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CSquelch::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CSquelch::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CSquelch::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CSquelch))
        return static_cast<void*>(const_cast< CSquelch*>(this));
    return QGroupBox::qt_metacast(_clname);
}

int CSquelch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGroupBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
