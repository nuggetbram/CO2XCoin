/****************************************************************************
** Meta object code from reading C++ file 'bitcoingui.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/bitcoingui.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bitcoingui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BitcoinGUI[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      42,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   12,   11,   11, 0x0a,
      60,   41,   11,   11, 0x0a,
      89,   82,   11,   11, 0x0a,
     141,  114,   11,   11, 0x0a,
     199,  179,   11,   11, 0x2a,
     249,  229,   11,   11, 0x0a,
     277,  270,   11,   11, 0x0a,
     296,   11,   11,   11, 0x08,
     315,   11,   11,   11, 0x08,
     333,   11,   11,   11, 0x08,
     355,   11,   11,   11, 0x08,
     378,   11,   11,   11, 0x08,
     412,  398,   11,   11, 0x08,
     438,   11,   11,   11, 0x28,
     462,  457,   11,   11, 0x08,
     490,   11,   11,   11, 0x28,
     511,  457,   11,   11, 0x08,
     541,   11,   11,   11, 0x28,
     564,   11,   11,   11, 0x08,
     581,   11,   11,   11, 0x08,
     596,   11,   11,   11, 0x08,
     616,   11,   11,   11, 0x08,
     634,   11,   11,   11, 0x08,
     658,   11,   11,   11, 0x08,
     686,  679,   11,   11, 0x08,
     756,  739,   11,   11, 0x08,
     797,   82,   11,   11, 0x08,
     817,   11,   11,   11, 0x08,
     831,   11,   11,   11, 0x08,
     846,   11,   11,   11, 0x08,
     859,   11,   11,   11, 0x08,
     874,   11,   11,   11, 0x08,
     889,   11,   11,   11, 0x08,
     908,   11,   11,   11, 0x08,
     923,   11,   11,   11, 0x08,
     945,   11,   11,   11, 0x08,
     958,   11,   11,   11, 0x08,
     978,  457,   11,   11, 0x08,
    1002,   11,   11,   11, 0x28,
    1033, 1019,   11,   11, 0x08,
    1061,   11,   11,   11, 0x28,
    1085,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_BitcoinGUI[] = {
    "BitcoinGUI\0\0count\0setNumConnections(int)\0"
    "count,nTotalBlocks\0setNumBlocks(int,int)\0"
    "status\0setEncryptionStatus(int)\0"
    "title,message,style,detail\0"
    "message(QString,QString,uint,QString)\0"
    "title,message,style\0message(QString,QString,uint)\0"
    "nFeeRequired,payFee\0askFee(qint64,bool*)\0"
    "strURI\0handleURI(QString)\0gotoOverviewPage()\0"
    "gotoHistoryPage()\0gotoAddressBookPage()\0"
    "gotoReceiveCoinsPage()\0gotoSendCoinsPage()\0"
    "transactionId\0gotoBlockBrowser(QString)\0"
    "gotoBlockBrowser()\0addr\0"
    "gotoSignMessageTab(QString)\0"
    "gotoSignMessageTab()\0gotoVerifyMessageTab(QString)\0"
    "gotoVerifyMessageTab()\0optionsClicked()\0"
    "aboutClicked()\0blocksIconClicked()\0"
    "lockIconClicked()\0connectionIconClicked()\0"
    "stakingIconClicked()\0reason\0"
    "trayIconActivated(QSystemTrayIcon::ActivationReason)\0"
    "parent,start,end\0"
    "incomingTransaction(QModelIndex,int,int)\0"
    "encryptWallet(bool)\0checkWallet()\0"
    "repairWallet()\0dumpWallet()\0importWallet()\0"
    "backupWallet()\0changePassphrase()\0"
    "unlockWallet()\0unlockWalletForMint()\0"
    "lockWallet()\0updateStakingIcon()\0"
    "savingsClicked(QString)\0savingsClicked()\0"
    "fToggleHidden\0showNormalIfMinimized(bool)\0"
    "showNormalIfMinimized()\0toggleHidden()\0"
};

void BitcoinGUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BitcoinGUI *_t = static_cast<BitcoinGUI *>(_o);
        switch (_id) {
        case 0: _t->setNumConnections((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setNumBlocks((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->setEncryptionStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->message((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 4: _t->message((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 5: _t->askFee((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool*(*)>(_a[2]))); break;
        case 6: _t->handleURI((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->gotoOverviewPage(); break;
        case 8: _t->gotoHistoryPage(); break;
        case 9: _t->gotoAddressBookPage(); break;
        case 10: _t->gotoReceiveCoinsPage(); break;
        case 11: _t->gotoSendCoinsPage(); break;
        case 12: _t->gotoBlockBrowser((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->gotoBlockBrowser(); break;
        case 14: _t->gotoSignMessageTab((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 15: _t->gotoSignMessageTab(); break;
        case 16: _t->gotoVerifyMessageTab((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 17: _t->gotoVerifyMessageTab(); break;
        case 18: _t->optionsClicked(); break;
        case 19: _t->aboutClicked(); break;
        case 20: _t->blocksIconClicked(); break;
        case 21: _t->lockIconClicked(); break;
        case 22: _t->connectionIconClicked(); break;
        case 23: _t->stakingIconClicked(); break;
        case 24: _t->trayIconActivated((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 25: _t->incomingTransaction((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 26: _t->encryptWallet((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 27: _t->checkWallet(); break;
        case 28: _t->repairWallet(); break;
        case 29: _t->dumpWallet(); break;
        case 30: _t->importWallet(); break;
        case 31: _t->backupWallet(); break;
        case 32: _t->changePassphrase(); break;
        case 33: _t->unlockWallet(); break;
        case 34: _t->unlockWalletForMint(); break;
        case 35: _t->lockWallet(); break;
        case 36: _t->updateStakingIcon(); break;
        case 37: _t->savingsClicked((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 38: _t->savingsClicked(); break;
        case 39: _t->showNormalIfMinimized((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 40: _t->showNormalIfMinimized(); break;
        case 41: _t->toggleHidden(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData BitcoinGUI::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BitcoinGUI::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_BitcoinGUI,
      qt_meta_data_BitcoinGUI, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BitcoinGUI::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BitcoinGUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BitcoinGUI::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BitcoinGUI))
        return static_cast<void*>(const_cast< BitcoinGUI*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int BitcoinGUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 42)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 42;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
