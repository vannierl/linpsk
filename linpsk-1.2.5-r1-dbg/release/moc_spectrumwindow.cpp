/****************************************************************************
** Meta object code from reading C++ file 'spectrumwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/spectrumwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'spectrumwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SpectrumWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   37,   37,   37, 0x05,
      38,   37,   37,   37, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_SpectrumWindow[] = {
    "SpectrumWindow\0frequencyChanged(int)\0"
    "\0frequencyChanged(double)\0"
};

void SpectrumWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SpectrumWindow *_t = static_cast<SpectrumWindow *>(_o);
        switch (_id) {
        case 0: _t->frequencyChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->frequencyChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SpectrumWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SpectrumWindow::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_SpectrumWindow,
      qt_meta_data_SpectrumWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SpectrumWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SpectrumWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SpectrumWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SpectrumWindow))
        return static_cast<void*>(const_cast< SpectrumWindow*>(this));
    return QFrame::qt_metacast(_clname);
}

int SpectrumWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void SpectrumWindow::frequencyChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SpectrumWindow::frequencyChanged(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
