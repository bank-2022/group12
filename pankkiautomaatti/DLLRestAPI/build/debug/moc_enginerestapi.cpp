/****************************************************************************
** Meta object code from reading C++ file 'enginerestapi.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../enginerestapi.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'enginerestapi.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_engineRestApi_t {
    QByteArrayData data[15];
    char stringdata0[223];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_engineRestApi_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_engineRestApi_t qt_meta_stringdata_engineRestApi = {
    {
QT_MOC_LITERAL(0, 0, 13), // "engineRestApi"
QT_MOC_LITERAL(1, 14, 23), // "responseDataFromBalance"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 24), // "responseDataFromCustomer"
QT_MOC_LITERAL(4, 64, 27), // "responseDataFromFiveActions"
QT_MOC_LITERAL(5, 92, 9), // "loginData"
QT_MOC_LITERAL(6, 102, 14), // "cardLockedData"
QT_MOC_LITERAL(7, 117, 9), // "loginSlot"
QT_MOC_LITERAL(8, 127, 14), // "QNetworkReply*"
QT_MOC_LITERAL(9, 142, 5), // "reply"
QT_MOC_LITERAL(10, 148, 15), // "fiveActionsSlot"
QT_MOC_LITERAL(11, 164, 11), // "balanceSlot"
QT_MOC_LITERAL(12, 176, 16), // "customerDataSlot"
QT_MOC_LITERAL(13, 193, 12), // "lockCardSlot"
QT_MOC_LITERAL(14, 206, 16) // "isCardLockedSlot"

    },
    "engineRestApi\0responseDataFromBalance\0"
    "\0responseDataFromCustomer\0"
    "responseDataFromFiveActions\0loginData\0"
    "cardLockedData\0loginSlot\0QNetworkReply*\0"
    "reply\0fiveActionsSlot\0balanceSlot\0"
    "customerDataSlot\0lockCardSlot\0"
    "isCardLockedSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_engineRestApi[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       3,    1,   72,    2, 0x06 /* Public */,
       4,    1,   75,    2, 0x06 /* Public */,
       5,    1,   78,    2, 0x06 /* Public */,
       6,    1,   81,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   84,    2, 0x0a /* Public */,
      10,    1,   87,    2, 0x0a /* Public */,
      11,    1,   90,    2, 0x0a /* Public */,
      12,    1,   93,    2, 0x0a /* Public */,
      13,    1,   96,    2, 0x0a /* Public */,
      14,    1,   99,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void engineRestApi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<engineRestApi *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->responseDataFromBalance((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->responseDataFromCustomer((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->responseDataFromFiveActions((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->loginData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->cardLockedData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->loginSlot((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 6: _t->fiveActionsSlot((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 7: _t->balanceSlot((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 8: _t->customerDataSlot((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 9: _t->lockCardSlot((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 10: _t->isCardLockedSlot((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (engineRestApi::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&engineRestApi::responseDataFromBalance)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (engineRestApi::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&engineRestApi::responseDataFromCustomer)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (engineRestApi::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&engineRestApi::responseDataFromFiveActions)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (engineRestApi::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&engineRestApi::loginData)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (engineRestApi::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&engineRestApi::cardLockedData)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject engineRestApi::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_engineRestApi.data,
    qt_meta_data_engineRestApi,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *engineRestApi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *engineRestApi::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_engineRestApi.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int engineRestApi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void engineRestApi::responseDataFromBalance(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void engineRestApi::responseDataFromCustomer(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void engineRestApi::responseDataFromFiveActions(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void engineRestApi::loginData(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void engineRestApi::cardLockedData(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
