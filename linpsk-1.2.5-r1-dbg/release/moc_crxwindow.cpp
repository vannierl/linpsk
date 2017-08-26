/****************************************************************************
** Meta object code from reading C++ file 'crxwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/crxwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'crxwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CRxWindow[] = {

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
      10,   22,   22,   22, 0x05,
      23,   51,   22,   22, 0x05,

 // slots: signature, parameters, type, tag, flags
      53,   22,   22,   22, 0x0a,
      68,   22,   22,   22, 0x0a,
      84,   22,   22,   22, 0x0a,
     101,   22,   22,   22, 0x0a,
     126,   22,   22,   22, 0x0a,
     146,   22,   22,   22, 0x0a,
     166,   22,   22,   22, 0x09,
     181,   22,   22,   22, 0x09,
     191,   22,   22,   22, 0x09,
     202,   22,   22,   22, 0x09,
     216,   22,   22,   22, 0x09,
     226,   22,   22,   22, 0x09,
     236,   22,   22,   22, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_CRxWindow[] = {
    "CRxWindow\0Triggered()\0\0"
    "setQsoData(QsoData,QString)\0,\0"
    "updateRx(char)\0clearRxWindow()\0"
    "setColor(QColor)\0activateTrigger(QString)\0"
    "deactivateTrigger()\0contextMenu(QPoint)\0"
    "copyCallSign()\0copyQTH()\0copyName()\0"
    "copyLocator()\0copyRST()\0copyDok()\0"
    "copy()\0"
};

void CRxWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CRxWindow *_t = static_cast<CRxWindow *>(_o);
        switch (_id) {
        case 0: _t->Triggered(); break;
        case 1: _t->setQsoData((*reinterpret_cast< QsoData(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->updateRx((*reinterpret_cast< char(*)>(_a[1]))); break;
        case 3: _t->clearRxWindow(); break;
        case 4: _t->setColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 5: _t->activateTrigger((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->deactivateTrigger(); break;
        case 7: _t->contextMenu((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 8: _t->copyCallSign(); break;
        case 9: _t->copyQTH(); break;
        case 10: _t->copyName(); break;
        case 11: _t->copyLocator(); break;
        case 12: _t->copyRST(); break;
        case 13: _t->copyDok(); break;
        case 14: _t->copy(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CRxWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CRxWindow::staticMetaObject = {
    { &QScrollArea::staticMetaObject, qt_meta_stringdata_CRxWindow,
      qt_meta_data_CRxWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CRxWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CRxWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CRxWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CRxWindow))
        return static_cast<void*>(const_cast< CRxWindow*>(this));
    return QScrollArea::qt_metacast(_clname);
}

int CRxWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScrollArea::qt_metacall(_c, _id, _a);
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
void CRxWindow::Triggered()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void CRxWindow::setQsoData(QsoData _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
