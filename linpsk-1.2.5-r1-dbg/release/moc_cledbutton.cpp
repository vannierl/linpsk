/****************************************************************************
** Meta object code from reading C++ file 'cledbutton.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/cledbutton.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cledbutton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CLedButton[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   21,   21,   21, 0x05,
      22,   21,   21,   21, 0x05,
      32,   21,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
      42,   21,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CLedButton[] = {
    "CLedButton\0startRx()\0\0startTx()\0"
    "abortTx()\0rxtx()\0"
};

void CLedButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CLedButton *_t = static_cast<CLedButton *>(_o);
        switch (_id) {
        case 0: _t->startRx(); break;
        case 1: _t->startTx(); break;
        case 2: _t->abortTx(); break;
        case 3: _t->rxtx(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData CLedButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CLedButton::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_CLedButton,
      qt_meta_data_CLedButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CLedButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CLedButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CLedButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CLedButton))
        return static_cast<void*>(const_cast< CLedButton*>(this));
    return QPushButton::qt_metacast(_clname);
}

int CLedButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
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
void CLedButton::startRx()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void CLedButton::startTx()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void CLedButton::abortTx()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
