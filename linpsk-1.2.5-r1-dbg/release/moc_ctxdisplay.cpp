/****************************************************************************
** Meta object code from reading C++ file 'ctxdisplay.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../gui/ctxdisplay.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctxdisplay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CTxDisplay[] = {

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
      42,   21,   21,   21, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_CTxDisplay[] = {
    "CTxDisplay\0startRx()\0\0startTx()\0"
    "abortTx()\0languageChange()\0"
};

void CTxDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CTxDisplay *_t = static_cast<CTxDisplay *>(_o);
        switch (_id) {
        case 0: _t->startRx(); break;
        case 1: _t->startTx(); break;
        case 2: _t->abortTx(); break;
        case 3: _t->languageChange(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData CTxDisplay::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CTxDisplay::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_CTxDisplay,
      qt_meta_data_CTxDisplay, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CTxDisplay::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CTxDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CTxDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CTxDisplay))
        return static_cast<void*>(const_cast< CTxDisplay*>(this));
    if (!strcmp(_clname, "Ui::CTxDisplay"))
        return static_cast< Ui::CTxDisplay*>(const_cast< CTxDisplay*>(this));
    return QFrame::qt_metacast(_clname);
}

int CTxDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
void CTxDisplay::startRx()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void CTxDisplay::startTx()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void CTxDisplay::abortTx()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
