/****************************************************************************
** Meta object code from reading C++ file 'dllrestapi.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../dllrestapi.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dllrestapi.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DLLRestAPI_t {
    QByteArrayData data[18];
    char stringdata0[274];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DLLRestAPI_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DLLRestAPI_t qt_meta_stringdata_DLLRestAPI = {
    {
QT_MOC_LITERAL(0, 0, 10), // "DLLRestAPI"
QT_MOC_LITERAL(1, 11, 16), // "sendBalanceToExe"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 17), // "sendCustomerToExe"
QT_MOC_LITERAL(4, 47, 20), // "sendFiveActionsToExe"
QT_MOC_LITERAL(5, 68, 16), // "sendActionsToExe"
QT_MOC_LITERAL(6, 85, 11), // "sendIdToExe"
QT_MOC_LITERAL(7, 97, 14), // "sendToExeLogin"
QT_MOC_LITERAL(8, 112, 19), // "sendToExeLockStatus"
QT_MOC_LITERAL(9, 132, 18), // "sendAccountIdToExe"
QT_MOC_LITERAL(10, 151, 14), // "receiveBalance"
QT_MOC_LITERAL(11, 166, 15), // "receiveCustomer"
QT_MOC_LITERAL(12, 182, 18), // "receiveFiveActions"
QT_MOC_LITERAL(13, 201, 14), // "receiveActions"
QT_MOC_LITERAL(14, 216, 12), // "receiveLogin"
QT_MOC_LITERAL(15, 229, 17), // "receiveLockStatus"
QT_MOC_LITERAL(16, 247, 9), // "receiveId"
QT_MOC_LITERAL(17, 257, 16) // "receiveAccountId"

    },
    "DLLRestAPI\0sendBalanceToExe\0\0"
    "sendCustomerToExe\0sendFiveActionsToExe\0"
    "sendActionsToExe\0sendIdToExe\0"
    "sendToExeLogin\0sendToExeLockStatus\0"
    "sendAccountIdToExe\0receiveBalance\0"
    "receiveCustomer\0receiveFiveActions\0"
    "receiveActions\0receiveLogin\0"
    "receiveLockStatus\0receiveId\0"
    "receiveAccountId"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DLLRestAPI[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x06 /* Public */,
       3,    1,   97,    2, 0x06 /* Public */,
       4,    1,  100,    2, 0x06 /* Public */,
       5,    1,  103,    2, 0x06 /* Public */,
       6,    1,  106,    2, 0x06 /* Public */,
       7,    1,  109,    2, 0x06 /* Public */,
       8,    1,  112,    2, 0x06 /* Public */,
       9,    1,  115,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,  118,    2, 0x0a /* Public */,
      11,    1,  121,    2, 0x0a /* Public */,
      12,    1,  124,    2, 0x0a /* Public */,
      13,    1,  127,    2, 0x0a /* Public */,
      14,    1,  130,    2, 0x0a /* Public */,
      15,    1,  133,    2, 0x0a /* Public */,
      16,    1,  136,    2, 0x0a /* Public */,
      17,    1,  139,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void DLLRestAPI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DLLRestAPI *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendBalanceToExe((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->sendCustomerToExe((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->sendFiveActionsToExe((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->sendActionsToExe((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->sendIdToExe((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->sendToExeLogin((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->sendToExeLockStatus((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->sendAccountIdToExe((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->receiveBalance((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->receiveCustomer((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->receiveFiveActions((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->receiveActions((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->receiveLogin((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->receiveLockStatus((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 14: _t->receiveId((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 15: _t->receiveAccountId((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DLLRestAPI::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DLLRestAPI::sendBalanceToExe)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DLLRestAPI::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DLLRestAPI::sendCustomerToExe)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DLLRestAPI::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DLLRestAPI::sendFiveActionsToExe)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DLLRestAPI::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DLLRestAPI::sendActionsToExe)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DLLRestAPI::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DLLRestAPI::sendIdToExe)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (DLLRestAPI::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DLLRestAPI::sendToExeLogin)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (DLLRestAPI::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DLLRestAPI::sendToExeLockStatus)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (DLLRestAPI::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DLLRestAPI::sendAccountIdToExe)) {
                *result = 7;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DLLRestAPI::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DLLRestAPI.data,
    qt_meta_data_DLLRestAPI,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DLLRestAPI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DLLRestAPI::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DLLRestAPI.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DLLRestAPI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void DLLRestAPI::sendBalanceToExe(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DLLRestAPI::sendCustomerToExe(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DLLRestAPI::sendFiveActionsToExe(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DLLRestAPI::sendActionsToExe(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void DLLRestAPI::sendIdToExe(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void DLLRestAPI::sendToExeLogin(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void DLLRestAPI::sendToExeLockStatus(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void DLLRestAPI::sendAccountIdToExe(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
