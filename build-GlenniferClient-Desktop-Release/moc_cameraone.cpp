/****************************************************************************
** Meta object code from reading C++ file 'cameraone.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../client/cameraone.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cameraone.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CameraOne_t {
    QByteArrayData data[19];
    char stringdata0[267];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CameraOne_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CameraOne_t qt_meta_stringdata_CameraOne = {
    {
QT_MOC_LITERAL(0, 0, 9), // "CameraOne"
QT_MOC_LITERAL(1, 10, 14), // "handleFrameOne"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 3), // "key"
QT_MOC_LITERAL(4, 30, 4), // "data"
QT_MOC_LITERAL(5, 35, 12), // "camOneStream"
QT_MOC_LITERAL(6, 48, 18), // "camOneSubscription"
QT_MOC_LITERAL(7, 67, 14), // "handleFrameTwo"
QT_MOC_LITERAL(8, 82, 12), // "camTwoStream"
QT_MOC_LITERAL(9, 95, 18), // "camTwoSubscription"
QT_MOC_LITERAL(10, 114, 16), // "handleFrameThree"
QT_MOC_LITERAL(11, 131, 14), // "camThreeStream"
QT_MOC_LITERAL(12, 146, 20), // "camThreeSubscription"
QT_MOC_LITERAL(13, 167, 15), // "handleFrameFour"
QT_MOC_LITERAL(14, 183, 13), // "camFourStream"
QT_MOC_LITERAL(15, 197, 19), // "camFourSubscription"
QT_MOC_LITERAL(16, 217, 15), // "handleFrameFive"
QT_MOC_LITERAL(17, 233, 13), // "camFiveStream"
QT_MOC_LITERAL(18, 247, 19) // "camFiveSubscription"

    },
    "CameraOne\0handleFrameOne\0\0key\0data\0"
    "camOneStream\0camOneSubscription\0"
    "handleFrameTwo\0camTwoStream\0"
    "camTwoSubscription\0handleFrameThree\0"
    "camThreeStream\0camThreeSubscription\0"
    "handleFrameFour\0camFourStream\0"
    "camFourSubscription\0handleFrameFive\0"
    "camFiveStream\0camFiveSubscription"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CameraOne[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   89,    2, 0x0a /* Public */,
       5,    0,   94,    2, 0x0a /* Public */,
       6,    0,   95,    2, 0x0a /* Public */,
       7,    2,   96,    2, 0x0a /* Public */,
       8,    0,  101,    2, 0x0a /* Public */,
       9,    0,  102,    2, 0x0a /* Public */,
      10,    2,  103,    2, 0x0a /* Public */,
      11,    0,  108,    2, 0x0a /* Public */,
      12,    0,  109,    2, 0x0a /* Public */,
      13,    2,  110,    2, 0x0a /* Public */,
      14,    0,  115,    2, 0x0a /* Public */,
      15,    0,  116,    2, 0x0a /* Public */,
      16,    2,  117,    2, 0x0a /* Public */,
      17,    0,  122,    2, 0x0a /* Public */,
      18,    0,  123,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArray,    3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArray,    3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArray,    3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArray,    3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArray,    3,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CameraOne::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CameraOne *_t = static_cast<CameraOne *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->handleFrameOne((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 1: _t->camOneStream(); break;
        case 2: _t->camOneSubscription(); break;
        case 3: _t->handleFrameTwo((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 4: _t->camTwoStream(); break;
        case 5: _t->camTwoSubscription(); break;
        case 6: _t->handleFrameThree((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 7: _t->camThreeStream(); break;
        case 8: _t->camThreeSubscription(); break;
        case 9: _t->handleFrameFour((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 10: _t->camFourStream(); break;
        case 11: _t->camFourSubscription(); break;
        case 12: _t->handleFrameFive((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 13: _t->camFiveStream(); break;
        case 14: _t->camFiveSubscription(); break;
        default: ;
        }
    }
}

const QMetaObject CameraOne::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CameraOne.data,
      qt_meta_data_CameraOne,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CameraOne::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CameraOne::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CameraOne.stringdata0))
        return static_cast<void*>(const_cast< CameraOne*>(this));
    return QDialog::qt_metacast(_clname);
}

int CameraOne::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
