/****************************************************************************
** Meta object code from reading C++ file 'waterfallwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/waterfallwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'waterfallwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WaterfallWindow[] = {

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
      16,   41,   41,   41, 0x05,
      42,   41,   41,   41, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_WaterfallWindow[] = {
    "WaterfallWindow\0frequencyChanged(double)\0"
    "\0frequencyChanged(int)\0"
};

void WaterfallWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WaterfallWindow *_t = static_cast<WaterfallWindow *>(_o);
        switch (_id) {
        case 0: _t->frequencyChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->frequencyChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WaterfallWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WaterfallWindow::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_WaterfallWindow,
      qt_meta_data_WaterfallWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WaterfallWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WaterfallWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WaterfallWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WaterfallWindow))
        return static_cast<void*>(const_cast< WaterfallWindow*>(this));
    return QFrame::qt_metacast(_clname);
}

int WaterfallWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void WaterfallWindow::frequencyChanged(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WaterfallWindow::frequencyChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
