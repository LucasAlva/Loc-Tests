/****************************************************************************
** Meta object code from reading C++ file 'speedometer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../client/speedometer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'speedometer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Speedometer_t {
    QByteArrayData data[14];
    char stringdata0[151];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Speedometer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Speedometer_t qt_meta_stringdata_Speedometer = {
    {
QT_MOC_LITERAL(0, 0, 11), // "Speedometer"
QT_MOC_LITERAL(1, 12, 8), // "setSpeed"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 8), // "setPower"
QT_MOC_LITERAL(4, 31, 9), // "setValues"
QT_MOC_LITERAL(5, 41, 5), // "speed"
QT_MOC_LITERAL(6, 47, 5), // "power"
QT_MOC_LITERAL(7, 53, 4), // "unit"
QT_MOC_LITERAL(8, 58, 14), // "powerGrandient"
QT_MOC_LITERAL(9, 73, 16), // "QConicalGradient"
QT_MOC_LITERAL(10, 90, 16), // "displayPowerPath"
QT_MOC_LITERAL(11, 107, 13), // "unitTextColor"
QT_MOC_LITERAL(12, 121, 14), // "speedTextColor"
QT_MOC_LITERAL(13, 136, 14) // "powerPathColor"

    },
    "Speedometer\0setSpeed\0\0setPower\0setValues\0"
    "speed\0power\0unit\0powerGrandient\0"
    "QConicalGradient\0displayPowerPath\0"
    "unitTextColor\0speedTextColor\0"
    "powerPathColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Speedometer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       8,   56, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x0a /* Public */,
       1,    1,   42,    2, 0x0a /* Public */,
       3,    1,   45,    2, 0x0a /* Public */,
       3,    1,   48,    2, 0x0a /* Public */,
       4,    2,   51,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    5,    6,

 // properties: name, type, flags
       5, QMetaType::Double, 0x00095103,
       6, QMetaType::Double, 0x00095103,
       7, QMetaType::QString, 0x00095103,
       8, 0x80000000 | 9, 0x0009500b,
      10, QMetaType::Bool, 0x00095103,
      11, QMetaType::QColor, 0x00095103,
      12, QMetaType::QColor, 0x00095103,
      13, QMetaType::QColor, 0x00095103,

       0        // eod
};

void Speedometer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Speedometer *_t = static_cast<Speedometer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setSpeed((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->setSpeed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setPower((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->setPower((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setValues((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Speedometer *_t = static_cast<Speedometer *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->speed(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->power(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->unit(); break;
        case 3: *reinterpret_cast< QConicalGradient*>(_v) = _t->powerGradient(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->displayPowerPath(); break;
        case 5: *reinterpret_cast< QColor*>(_v) = _t->unitTextColor(); break;
        case 6: *reinterpret_cast< QColor*>(_v) = _t->speedTextColor(); break;
        case 7: *reinterpret_cast< QColor*>(_v) = _t->powerPathColor(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Speedometer *_t = static_cast<Speedometer *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSpeed(*reinterpret_cast< double*>(_v)); break;
        case 1: _t->setPower(*reinterpret_cast< double*>(_v)); break;
        case 2: _t->setUnit(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setPowerGradient(*reinterpret_cast< QConicalGradient*>(_v)); break;
        case 4: _t->setDisplayPowerPath(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setUnitTextColor(*reinterpret_cast< QColor*>(_v)); break;
        case 6: _t->setSpeedTextColor(*reinterpret_cast< QColor*>(_v)); break;
        case 7: _t->setPowerPathColor(*reinterpret_cast< QColor*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Speedometer::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Speedometer.data,
      qt_meta_data_Speedometer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Speedometer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Speedometer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Speedometer.stringdata0))
        return static_cast<void*>(const_cast< Speedometer*>(this));
    return QWidget::qt_metacast(_clname);
}

int Speedometer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
