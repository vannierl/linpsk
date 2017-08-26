/****************************************************************************
** Meta object code from reading C++ file 'dial_if_menu.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../CLERVIE_development/travaux_qt/alaine/dial_if_menu.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dial_if_menu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_dial_if_menu[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   31,   31,   31, 0x05,
      32,   31,   31,   31, 0x05,

 // slots: signature, parameters, type, tag, flags
      48,   31,   31,   31, 0x0a,
      57,   31,   31,   31, 0x0a,
      68,   31,   31,   31, 0x0a,
      77,   31,   31,   31, 0x0a,
      87,   31,   31,   31, 0x0a,
      98,   31,   31,   31, 0x0a,
     108,   31,   31,   31, 0x0a,
     119,   31,   31,   31, 0x0a,
     131,   31,   31,   31, 0x0a,
     141,   31,   31,   31, 0x0a,
     152,   31,   31,   31, 0x0a,
     163,   31,   31,   31, 0x0a,
     175,   31,   31,   31, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_dial_if_menu[] = {
    "dial_if_menu\0fqcy_changed(int)\0\0"
    "ok_clicked(int)\0set_up()\0set_down()\0"
    "set_m1()\0set_m10()\0set_m100()\0set_m1k()\0"
    "set_m10k()\0set_m100k()\0set_m1m()\0"
    "set_m10m()\0set_sign()\0set_clear()\0"
    "set_ok()\0"
};

void dial_if_menu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        dial_if_menu *_t = static_cast<dial_if_menu *>(_o);
        switch (_id) {
        case 0: _t->fqcy_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->ok_clicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->set_up(); break;
        case 3: _t->set_down(); break;
        case 4: _t->set_m1(); break;
        case 5: _t->set_m10(); break;
        case 6: _t->set_m100(); break;
        case 7: _t->set_m1k(); break;
        case 8: _t->set_m10k(); break;
        case 9: _t->set_m100k(); break;
        case 10: _t->set_m1m(); break;
        case 11: _t->set_m10m(); break;
        case 12: _t->set_sign(); break;
        case 13: _t->set_clear(); break;
        case 14: _t->set_ok(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData dial_if_menu::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject dial_if_menu::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_dial_if_menu,
      qt_meta_data_dial_if_menu, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &dial_if_menu::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *dial_if_menu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *dial_if_menu::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_dial_if_menu))
        return static_cast<void*>(const_cast< dial_if_menu*>(this));
    return QDialog::qt_metacast(_clname);
}

int dial_if_menu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void dial_if_menu::fqcy_changed(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void dial_if_menu::ok_clicked(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
