/****************************************************************************
** Meta object code from reading C++ file 'widgetKeyBoard.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../CLERVIE_development/travaux_qt/MyVirtualKeyboard/virtualKeyboard/keyboard/widgetKeyBoard.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widgetKeyBoard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_widgetKeyBoard[] = {

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
      15,   30,   41,   41, 0x0a,
      42,   53,   41,   41, 0x0a,
      67,   89,   41,   41, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_widgetKeyBoard[] = {
    "widgetKeyBoard\0show(QWidget*)\0activeForm\0"
    "\0hide(bool)\0noChangeColor\0"
    "focusThis(QLineEdit*)\0control\0"
};

void widgetKeyBoard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        widgetKeyBoard *_t = static_cast<widgetKeyBoard *>(_o);
        switch (_id) {
        case 0: _t->show((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 1: _t->hide((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->focusThis((*reinterpret_cast< QLineEdit*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData widgetKeyBoard::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject widgetKeyBoard::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_widgetKeyBoard,
      qt_meta_data_widgetKeyBoard, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &widgetKeyBoard::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *widgetKeyBoard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *widgetKeyBoard::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_widgetKeyBoard))
        return static_cast<void*>(const_cast< widgetKeyBoard*>(this));
    return QWidget::qt_metacast(_clname);
}

int widgetKeyBoard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
