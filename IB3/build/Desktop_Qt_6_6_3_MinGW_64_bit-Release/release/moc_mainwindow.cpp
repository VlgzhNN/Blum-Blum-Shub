/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "onrashifrButtonClicked",
    "",
    "onzashifrButtonClicked",
    "createkeyButtonClicked",
    "downopentextButtonClicked",
    "downlocktextButtonClicked",
    "downkeyButtonClicked",
    "uplopentextButtonClicked",
    "upllocktextButtonClicked",
    "uplkeyButtonClicked",
    "generateRandomKey",
    "length",
    "keyiinbinary",
    "QList<bool>",
    "key",
    "leftShift",
    "input",
    "shiftCount",
    "generateSubkeys",
    "keyText",
    "QList<QList<bool>>&",
    "subkeys",
    "DES_encrypt",
    "QList<QList<bool>>",
    "OpenText",
    "IP",
    "QList<bool>&",
    "block",
    "IP_toblocks",
    "block64",
    "Expand",
    "halfblock",
    "ExpandBlocks",
    "half_blocks",
    "S",
    "afterxor",
    "P",
    "IP_1",
    "L",
    "R",
    "DES_decrypt",
    "cipherText"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[86];
    char stringdata0[11];
    char stringdata1[23];
    char stringdata2[1];
    char stringdata3[23];
    char stringdata4[23];
    char stringdata5[26];
    char stringdata6[26];
    char stringdata7[21];
    char stringdata8[25];
    char stringdata9[25];
    char stringdata10[20];
    char stringdata11[18];
    char stringdata12[7];
    char stringdata13[13];
    char stringdata14[12];
    char stringdata15[4];
    char stringdata16[10];
    char stringdata17[6];
    char stringdata18[11];
    char stringdata19[16];
    char stringdata20[8];
    char stringdata21[20];
    char stringdata22[8];
    char stringdata23[12];
    char stringdata24[19];
    char stringdata25[9];
    char stringdata26[3];
    char stringdata27[13];
    char stringdata28[6];
    char stringdata29[12];
    char stringdata30[8];
    char stringdata31[7];
    char stringdata32[10];
    char stringdata33[13];
    char stringdata34[12];
    char stringdata35[2];
    char stringdata36[9];
    char stringdata37[2];
    char stringdata38[5];
    char stringdata39[2];
    char stringdata40[2];
    char stringdata41[12];
    char stringdata42[11];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 22),  // "onrashifrButtonClicked"
        QT_MOC_LITERAL(34, 0),  // ""
        QT_MOC_LITERAL(35, 22),  // "onzashifrButtonClicked"
        QT_MOC_LITERAL(58, 22),  // "createkeyButtonClicked"
        QT_MOC_LITERAL(81, 25),  // "downopentextButtonClicked"
        QT_MOC_LITERAL(107, 25),  // "downlocktextButtonClicked"
        QT_MOC_LITERAL(133, 20),  // "downkeyButtonClicked"
        QT_MOC_LITERAL(154, 24),  // "uplopentextButtonClicked"
        QT_MOC_LITERAL(179, 24),  // "upllocktextButtonClicked"
        QT_MOC_LITERAL(204, 19),  // "uplkeyButtonClicked"
        QT_MOC_LITERAL(224, 17),  // "generateRandomKey"
        QT_MOC_LITERAL(242, 6),  // "length"
        QT_MOC_LITERAL(249, 12),  // "keyiinbinary"
        QT_MOC_LITERAL(262, 11),  // "QList<bool>"
        QT_MOC_LITERAL(274, 3),  // "key"
        QT_MOC_LITERAL(278, 9),  // "leftShift"
        QT_MOC_LITERAL(288, 5),  // "input"
        QT_MOC_LITERAL(294, 10),  // "shiftCount"
        QT_MOC_LITERAL(305, 15),  // "generateSubkeys"
        QT_MOC_LITERAL(321, 7),  // "keyText"
        QT_MOC_LITERAL(329, 19),  // "QList<QList<bool>>&"
        QT_MOC_LITERAL(349, 7),  // "subkeys"
        QT_MOC_LITERAL(357, 11),  // "DES_encrypt"
        QT_MOC_LITERAL(369, 18),  // "QList<QList<bool>>"
        QT_MOC_LITERAL(388, 8),  // "OpenText"
        QT_MOC_LITERAL(397, 2),  // "IP"
        QT_MOC_LITERAL(400, 12),  // "QList<bool>&"
        QT_MOC_LITERAL(413, 5),  // "block"
        QT_MOC_LITERAL(419, 11),  // "IP_toblocks"
        QT_MOC_LITERAL(431, 7),  // "block64"
        QT_MOC_LITERAL(439, 6),  // "Expand"
        QT_MOC_LITERAL(446, 9),  // "halfblock"
        QT_MOC_LITERAL(456, 12),  // "ExpandBlocks"
        QT_MOC_LITERAL(469, 11),  // "half_blocks"
        QT_MOC_LITERAL(481, 1),  // "S"
        QT_MOC_LITERAL(483, 8),  // "afterxor"
        QT_MOC_LITERAL(492, 1),  // "P"
        QT_MOC_LITERAL(494, 4),  // "IP_1"
        QT_MOC_LITERAL(499, 1),  // "L"
        QT_MOC_LITERAL(501, 1),  // "R"
        QT_MOC_LITERAL(503, 11),  // "DES_decrypt"
        QT_MOC_LITERAL(515, 10)   // "cipherText"
    },
    "MainWindow",
    "onrashifrButtonClicked",
    "",
    "onzashifrButtonClicked",
    "createkeyButtonClicked",
    "downopentextButtonClicked",
    "downlocktextButtonClicked",
    "downkeyButtonClicked",
    "uplopentextButtonClicked",
    "upllocktextButtonClicked",
    "uplkeyButtonClicked",
    "generateRandomKey",
    "length",
    "keyiinbinary",
    "QList<bool>",
    "key",
    "leftShift",
    "input",
    "shiftCount",
    "generateSubkeys",
    "keyText",
    "QList<QList<bool>>&",
    "subkeys",
    "DES_encrypt",
    "QList<QList<bool>>",
    "OpenText",
    "IP",
    "QList<bool>&",
    "block",
    "IP_toblocks",
    "block64",
    "Expand",
    "halfblock",
    "ExpandBlocks",
    "half_blocks",
    "S",
    "afterxor",
    "P",
    "IP_1",
    "L",
    "R",
    "DES_decrypt",
    "cipherText"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  146,    2, 0x08,    1 /* Private */,
       3,    0,  147,    2, 0x08,    2 /* Private */,
       4,    0,  148,    2, 0x08,    3 /* Private */,
       5,    0,  149,    2, 0x08,    4 /* Private */,
       6,    0,  150,    2, 0x08,    5 /* Private */,
       7,    0,  151,    2, 0x08,    6 /* Private */,
       8,    0,  152,    2, 0x08,    7 /* Private */,
       9,    0,  153,    2, 0x08,    8 /* Private */,
      10,    0,  154,    2, 0x08,    9 /* Private */,
      11,    1,  155,    2, 0x08,   10 /* Private */,
      13,    1,  158,    2, 0x08,   12 /* Private */,
      16,    2,  161,    2, 0x08,   14 /* Private */,
      19,    2,  166,    2, 0x08,   17 /* Private */,
      23,    2,  171,    2, 0x08,   20 /* Private */,
      26,    1,  176,    2, 0x08,   23 /* Private */,
      29,    1,  179,    2, 0x08,   25 /* Private */,
      31,    1,  182,    2, 0x08,   27 /* Private */,
      33,    1,  185,    2, 0x08,   29 /* Private */,
      35,    1,  188,    2, 0x08,   31 /* Private */,
      37,    1,  191,    2, 0x08,   33 /* Private */,
      38,    2,  194,    2, 0x08,   35 /* Private */,
      41,    2,  199,    2, 0x08,   38 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QString, QMetaType::Int,   12,
    0x80000000 | 14, QMetaType::QString,   15,
    0x80000000 | 14, 0x80000000 | 14, QMetaType::Int,   17,   18,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 21,   20,   22,
    0x80000000 | 24, QMetaType::QString, QMetaType::QString,   25,   20,
    0x80000000 | 14, 0x80000000 | 27,   28,
    0x80000000 | 24, 0x80000000 | 21,   30,
    0x80000000 | 14, 0x80000000 | 27,   32,
    0x80000000 | 24, 0x80000000 | 21,   34,
    0x80000000 | 14, 0x80000000 | 14,   36,
    0x80000000 | 14, 0x80000000 | 14,   17,
    0x80000000 | 14, 0x80000000 | 14, 0x80000000 | 14,   39,   40,
    QMetaType::QString, QMetaType::QString, QMetaType::QString,   42,   20,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'onrashifrButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onzashifrButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'createkeyButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'downopentextButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'downlocktextButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'downkeyButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'uplopentextButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'upllocktextButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'uplkeyButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'generateRandomKey'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'keyiinbinary'
        QtPrivate::TypeAndForceComplete<QVector<bool>, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'leftShift'
        QtPrivate::TypeAndForceComplete<QVector<bool>, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<bool> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'generateSubkeys'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<QVector<bool>> &, std::false_type>,
        // method 'DES_encrypt'
        QtPrivate::TypeAndForceComplete<QVector<QVector<bool>>, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'IP'
        QtPrivate::TypeAndForceComplete<QVector<bool>, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<bool> &, std::false_type>,
        // method 'IP_toblocks'
        QtPrivate::TypeAndForceComplete<QVector<QVector<bool>>, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<QVector<bool>> &, std::false_type>,
        // method 'Expand'
        QtPrivate::TypeAndForceComplete<QVector<bool>, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<bool> &, std::false_type>,
        // method 'ExpandBlocks'
        QtPrivate::TypeAndForceComplete<QVector<QVector<bool>>, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<QVector<bool>> &, std::false_type>,
        // method 'S'
        QtPrivate::TypeAndForceComplete<QVector<bool>, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<bool> &, std::false_type>,
        // method 'P'
        QtPrivate::TypeAndForceComplete<QVector<bool>, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<bool> &, std::false_type>,
        // method 'IP_1'
        QtPrivate::TypeAndForceComplete<QVector<bool>, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<bool> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<bool> &, std::false_type>,
        // method 'DES_decrypt'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onrashifrButtonClicked(); break;
        case 1: _t->onzashifrButtonClicked(); break;
        case 2: _t->createkeyButtonClicked(); break;
        case 3: _t->downopentextButtonClicked(); break;
        case 4: _t->downlocktextButtonClicked(); break;
        case 5: _t->downkeyButtonClicked(); break;
        case 6: _t->uplopentextButtonClicked(); break;
        case 7: _t->upllocktextButtonClicked(); break;
        case 8: _t->uplkeyButtonClicked(); break;
        case 9: { QString _r = _t->generateRandomKey((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 10: { QList<bool> _r = _t->keyiinbinary((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<bool>*>(_a[0]) = std::move(_r); }  break;
        case 11: { QList<bool> _r = _t->leftShift((*reinterpret_cast< std::add_pointer_t<QList<bool>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QList<bool>*>(_a[0]) = std::move(_r); }  break;
        case 12: _t->generateSubkeys((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<QList<bool>>&>>(_a[2]))); break;
        case 13: { QList<QList<bool>> _r = _t->DES_encrypt((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QList<QList<bool>>*>(_a[0]) = std::move(_r); }  break;
        case 14: { QList<bool> _r = _t->IP((*reinterpret_cast< std::add_pointer_t<QList<bool>&>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<bool>*>(_a[0]) = std::move(_r); }  break;
        case 15: { QList<QList<bool>> _r = _t->IP_toblocks((*reinterpret_cast< std::add_pointer_t<QList<QList<bool>>&>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QList<bool>>*>(_a[0]) = std::move(_r); }  break;
        case 16: { QList<bool> _r = _t->Expand((*reinterpret_cast< std::add_pointer_t<QList<bool>&>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<bool>*>(_a[0]) = std::move(_r); }  break;
        case 17: { QList<QList<bool>> _r = _t->ExpandBlocks((*reinterpret_cast< std::add_pointer_t<QList<QList<bool>>&>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QList<bool>>*>(_a[0]) = std::move(_r); }  break;
        case 18: { QList<bool> _r = _t->S((*reinterpret_cast< std::add_pointer_t<QList<bool>>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<bool>*>(_a[0]) = std::move(_r); }  break;
        case 19: { QList<bool> _r = _t->P((*reinterpret_cast< std::add_pointer_t<QList<bool>>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<bool>*>(_a[0]) = std::move(_r); }  break;
        case 20: { QList<bool> _r = _t->IP_1((*reinterpret_cast< std::add_pointer_t<QList<bool>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<bool>>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QList<bool>*>(_a[0]) = std::move(_r); }  break;
        case 21: { QString _r = _t->DES_decrypt((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<bool> >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<bool> >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<bool> >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<bool> >(); break;
            }
            break;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    return _id;
}
QT_WARNING_POP
