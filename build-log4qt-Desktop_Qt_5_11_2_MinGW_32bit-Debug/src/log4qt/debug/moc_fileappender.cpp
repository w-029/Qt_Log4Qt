/****************************************************************************
** Meta object code from reading C++ file 'fileappender.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../Log4Qt-master/src/log4qt/fileappender.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fileappender.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Log4Qt__FileAppender_t {
    QByteArrayData data[4];
    char stringdata0[48];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Log4Qt__FileAppender_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Log4Qt__FileAppender_t qt_meta_stringdata_Log4Qt__FileAppender = {
    {
QT_MOC_LITERAL(0, 0, 20), // "Log4Qt::FileAppender"
QT_MOC_LITERAL(1, 21, 10), // "appendFile"
QT_MOC_LITERAL(2, 32, 10), // "bufferedIo"
QT_MOC_LITERAL(3, 43, 4) // "file"

    },
    "Log4Qt::FileAppender\0appendFile\0"
    "bufferedIo\0file"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Log4Qt__FileAppender[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Bool, 0x00095103,
       2, QMetaType::Bool, 0x00095103,
       3, QMetaType::QString, 0x00095103,

       0        // eod
};

void Log4Qt::FileAppender::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        FileAppender *_t = static_cast<FileAppender *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->appendFile(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->bufferedIo(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->file(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        FileAppender *_t = static_cast<FileAppender *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAppendFile(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setBufferedIo(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setFile(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Log4Qt::FileAppender::staticMetaObject = {
    { &WriterAppender::staticMetaObject, qt_meta_stringdata_Log4Qt__FileAppender.data,
      qt_meta_data_Log4Qt__FileAppender,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Log4Qt::FileAppender::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Log4Qt::FileAppender::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Log4Qt__FileAppender.stringdata0))
        return static_cast<void*>(this);
    return WriterAppender::qt_metacast(_clname);
}

int Log4Qt::FileAppender::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WriterAppender::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
