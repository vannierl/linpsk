/****************************************************************************
** Meta object code from reading C++ file 'QKeyPushButton.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../CLERVIE_development/travaux_qt/MyVirtualKeyboard/virtualKeyboard/keyboard/QKeyPushButton.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QKeyPushButton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QKeyPushButton[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   32,   43,   43, 0x05,

 // slots: signature, parameters, type, tag, flags
      44,   32,   43,   43, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QKeyPushButton[] = {
    "QKeyPushButton\0pressedKey(bool)\0"
    "statusCaps\0\0getKeyPress(bool)\0"
};

void QKeyPushButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QKeyPushButton *_t = static_cast<QKeyPushButton *>(_o);
        switch (_id) {
        case 0: _t->pressedKey((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->getKeyPress((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QKeyPushButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QKeyPushButton::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_QKeyPushButton,
      qt_meta_data_QKeyPushButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QKeyPushButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QKeyPushButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QKeyPushButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QKeyPushButton))
        return static_cast<void*>(const_cast< QKeyPushButton*>(this));
    return QPushButton::qt_metacast(_clname);
}

int QKeyPushButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
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
void QKeyPushButton::pressedKey(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
