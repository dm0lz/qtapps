/****************************************************************************
** Meta object code from reading C++ file 'test.h'
**
** Created: Mon Jul 4 20:05:40 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../test/test.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'test.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MaClassFenetre[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   16,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MaClassFenetre[] = {
    "MaClassFenetre\0\0largeur\0ChangerLargeur(int)\0"
};

const QMetaObject MaClassFenetre::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MaClassFenetre,
      qt_meta_data_MaClassFenetre, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MaClassFenetre::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MaClassFenetre::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MaClassFenetre::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MaClassFenetre))
        return static_cast<void*>(const_cast< MaClassFenetre*>(this));
    return QWidget::qt_metacast(_clname);
}

int MaClassFenetre::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: ChangerLargeur((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
