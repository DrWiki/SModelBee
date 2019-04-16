/****************************************************************************
** Meta object code from reading C++ file 'MyOldOpenGLWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../MyOldOpenGLWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MyOldOpenGLWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MyOldOpenGLWidget_t {
    QByteArrayData data[9];
    char stringdata0[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyOldOpenGLWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyOldOpenGLWidget_t qt_meta_stringdata_MyOldOpenGLWidget = {
    {
QT_MOC_LITERAL(0, 0, 17), // "MyOldOpenGLWidget"
QT_MOC_LITERAL(1, 18, 15), // "slot_recieveStl"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 4), // "path"
QT_MOC_LITERAL(4, 40, 18), // "slot_finishLoadStl"
QT_MOC_LITERAL(5, 59, 13), // "slot_moveLeft"
QT_MOC_LITERAL(6, 73, 14), // "slot_moveRight"
QT_MOC_LITERAL(7, 88, 11), // "slot_moveUp"
QT_MOC_LITERAL(8, 100, 13) // "slot_moveDown"

    },
    "MyOldOpenGLWidget\0slot_recieveStl\0\0"
    "path\0slot_finishLoadStl\0slot_moveLeft\0"
    "slot_moveRight\0slot_moveUp\0slot_moveDown"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyOldOpenGLWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x0a /* Public */,
       4,    0,   47,    2, 0x0a /* Public */,
       5,    0,   48,    2, 0x0a /* Public */,
       6,    0,   49,    2, 0x0a /* Public */,
       7,    0,   50,    2, 0x0a /* Public */,
       8,    0,   51,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MyOldOpenGLWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MyOldOpenGLWidget *_t = static_cast<MyOldOpenGLWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slot_recieveStl((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->slot_finishLoadStl(); break;
        case 2: _t->slot_moveLeft(); break;
        case 3: _t->slot_moveRight(); break;
        case 4: _t->slot_moveUp(); break;
        case 5: _t->slot_moveDown(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MyOldOpenGLWidget::staticMetaObject = {
    { &QGLWidget::staticMetaObject, qt_meta_stringdata_MyOldOpenGLWidget.data,
      qt_meta_data_MyOldOpenGLWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MyOldOpenGLWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyOldOpenGLWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyOldOpenGLWidget.stringdata0))
        return static_cast<void*>(this);
    return QGLWidget::qt_metacast(_clname);
}

int MyOldOpenGLWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
