/****************************************************************************
** Meta object code from reading C++ file 'linpsk.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../gui/linpsk.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'linpsk.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LinPSK[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      30,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
       7,   17,   17,   17, 0x05,
      18,   17,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      28,   17,   17,   17, 0x0a,
      35,   17,   17,   17, 0x09,
      52,   17,   17,   17, 0x09,
      63,   17,   17,   17, 0x09,
      77,   17,   17,   17, 0x09,
      91,   17,   17,   17, 0x09,
     109,   17,   17,   17, 0x09,
     123,   17,   17,   17, 0x09,
     135,   17,   17,   17, 0x09,
     146,   17,   17,   17, 0x09,
     160,   17,   17,   17, 0x09,
     170,   17,   17,   17, 0x09,
     180,   17,   17,   17, 0x09,
     197,   17,   17,   17, 0x09,
     206,   17,   17,   17, 0x09,
     223,   17,   17,   17, 0x09,
     242,   17,   17,   17, 0x09,
     254,  272,   17,   17, 0x09,
     275,   17,   17,   17, 0x09,
     286,   17,   17,   17, 0x09,
     298,   17,   17,   17, 0x09,
     312,   17,   17,   17, 0x09,
     326,   17,   17,   17, 0x09,
     343,   17,   17,   17, 0x09,
     355,   17,   17,   17, 0x09,
     370,   17,   17,   17, 0x09,
     395,   17,   17,   17, 0x08,
     427,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_LinPSK[] = {
    "LinPSK\0StartRx()\0\0StartTx()\0Exit()\0"
    "languageChange()\0fileOpen()\0helpAboutQt()\0"
    "addRxWindow()\0generalSettings()\0"
    "chooseColor()\0helpAbout()\0setclock()\0"
    "setIMD(float)\0startRx()\0startTx()\0"
    "process_txdata()\0stopTx()\0apply_settings()\0"
    "setChannelParams()\0setRxMode()\0"
    "executeMacro(int)\0id\0addMacro()\0"
    "editMacro()\0deleteMacro()\0renameMacro()\0"
    "actdeactMacros()\0FontSetup()\0"
    "saveSettings()\0closeEvent(QCloseEvent*)\0"
    "on_RxDisplay_newActiveChannel()\0"
    "unblockMacros()\0"
};

void LinPSK::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LinPSK *_t = static_cast<LinPSK *>(_o);
        switch (_id) {
        case 0: _t->StartRx(); break;
        case 1: _t->StartTx(); break;
        case 2: _t->Exit(); break;
        case 3: _t->languageChange(); break;
        case 4: _t->fileOpen(); break;
        case 5: _t->helpAboutQt(); break;
        case 6: _t->addRxWindow(); break;
        case 7: _t->generalSettings(); break;
        case 8: _t->chooseColor(); break;
        case 9: _t->helpAbout(); break;
        case 10: _t->setclock(); break;
        case 11: _t->setIMD((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 12: _t->startRx(); break;
        case 13: _t->startTx(); break;
        case 14: _t->process_txdata(); break;
        case 15: _t->stopTx(); break;
        case 16: _t->apply_settings(); break;
        case 17: _t->setChannelParams(); break;
        case 18: _t->setRxMode(); break;
        case 19: _t->executeMacro((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->addMacro(); break;
        case 21: _t->editMacro(); break;
        case 22: _t->deleteMacro(); break;
        case 23: _t->renameMacro(); break;
        case 24: _t->actdeactMacros(); break;
        case 25: _t->FontSetup(); break;
        case 26: _t->saveSettings(); break;
        case 27: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 28: _t->on_RxDisplay_newActiveChannel(); break;
        case 29: _t->unblockMacros(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData LinPSK::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LinPSK::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_LinPSK,
      qt_meta_data_LinPSK, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LinPSK::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LinPSK::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LinPSK::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LinPSK))
        return static_cast<void*>(const_cast< LinPSK*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int LinPSK::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    }
    return _id;
}

// SIGNAL 0
void LinPSK::StartRx()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void LinPSK::StartTx()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
