/****************************************************************************
** Meta object code from reading C++ file 'txwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../gui/txwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'txwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TxWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,   24,   24,   24, 0x0a,
      25,   24,   24,   24, 0x0a,
      41,   24,   24,   24, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_TxWindow[] = {
    "TxWindow\0clearBuffers()\0\0show_keyboard()\0"
    "show_tos()\0"
};

void TxWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TxWindow *_t = static_cast<TxWindow *>(_o);
        switch (_id) {
        case 0: _t->clearBuffers(); break;
        case 1: _t->show_keyboard(); break;
        case 2: _t->show_tos(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData TxWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TxWindow::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_TxWindow,
      qt_meta_data_TxWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TxWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TxWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TxWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TxWindow))
        return static_cast<void*>(const_cast< TxWindow*>(this));
    return QFrame::qt_metacast(_clname);
}

int TxWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
