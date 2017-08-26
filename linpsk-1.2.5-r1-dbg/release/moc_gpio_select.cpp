/****************************************************************************
** Meta object code from reading C++ file 'gpio_select.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../CLERVIE_development/travaux_qt/alaine/gpio_select.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gpio_select.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_gpio_select[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   27,   27,   27, 0x05,
      28,   27,   27,   27, 0x05,

 // slots: signature, parameters, type, tag, flags
      41,   27,   27,   27, 0x0a,
      50,   27,   27,   27, 0x0a,
      59,   27,   27,   27, 0x0a,
      70,   27,   27,   27, 0x0a,
      82,   27,   27,   27, 0x0a,
      94,   27,   27,   27, 0x0a,
     105,   27,   27,   27, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_gpio_select[] = {
    "gpio_select\0gpio_changed()\0\0ok_clicked()\0"
    "set_ok()\0set_up()\0set_down()\0set_reset()\0"
    "set_fq_ud()\0set_data()\0set_w_clk()\0"
};

void gpio_select::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        gpio_select *_t = static_cast<gpio_select *>(_o);
        switch (_id) {
        case 0: _t->gpio_changed(); break;
        case 1: _t->ok_clicked(); break;
        case 2: _t->set_ok(); break;
        case 3: _t->set_up(); break;
        case 4: _t->set_down(); break;
        case 5: _t->set_reset(); break;
        case 6: _t->set_fq_ud(); break;
        case 7: _t->set_data(); break;
        case 8: _t->set_w_clk(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData gpio_select::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject gpio_select::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_gpio_select,
      qt_meta_data_gpio_select, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &gpio_select::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *gpio_select::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *gpio_select::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_gpio_select))
        return static_cast<void*>(const_cast< gpio_select*>(this));
    return QDialog::qt_metacast(_clname);
}

int gpio_select::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void gpio_select::gpio_changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void gpio_select::ok_clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
