#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QDebug>
#include <QFile>
#include <QStyle>
#include <QPushButton>
#include <QtWidgets/QApplication>
#include <QMessageBox>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <QThread>

QString MainWindow::cardIdStat = "0";
QString MainWindow::accountIdStat = "0";

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , attempts(0)
    , i(0)
{
    ui->setupUi(this);
    oDLLSerialPort = new DLLSerialPort;
    oDllPinCode = new DLLPinCode;
    oDllRestApi = new DLLRestAPI;
    connect(oDLLSerialPort, SIGNAL(passID(QString)), this, SLOT(getID(QString)));
    connect(oDllRestApi, SIGNAL(sendToExeLogin(QString)), this, SLOT(receiveDataLogin(QString)));
    connect(oDllRestApi, SIGNAL(sendToExeLockStatus(QString)), this, SLOT(receiveDataLockStatus(QString)));
    connect(oDllRestApi, SIGNAL(sendAccountIdToExe(QString)), this, SLOT(receiveAccountId(QString)));
}

MainWindow::~MainWindow()
{
    delete ui;
//    delete oDllPinCode;
//    oDllPinCode=nullptr;
    delete mainMenu;

}

void MainWindow::checkPin()
{
        oDllPinCode->startupPin();
        pin = oDllPinCode->returnPinCode();
        oDllRestApi->interfaceLogin(cardId, pin);
        oDllRestApi->interfaceIsCardLocked(cardId);
}

void MainWindow::receiveDataLogin(QString l)
{
    loggedIn = l;
    this->tryToLogin();
}

void MainWindow::receiveDataLockStatus(QString lock)
{
    cardLocked = lock;
}

void MainWindow::receiveAccountId(QString account)
{
    accountId=account;
    accountIdStat=account;
    checkPin();
}

void MainWindow::tryToLogin()
{

    if(attempts==3 || cardLocked == "1"){
        i++;
         oDllPinCode->wrongPin(3);
         oDllRestApi->interfaceLockCard(cardId);
         oDllPinCode->closePin();
//         delete oDllPinCode;
//         oDllPinCode = nullptr;
    }

    if(loggedIn == "true"){
       i++;
       oDllPinCode->closePin();
//       delete oDllPinCode;
//       oDllPinCode = nullptr;
       mainMenu = new paavalikko;
       mainMenu->exec();
   }
   else{
      attempts++;
       oDllPinCode->wrongPin(attempts);
       if (attempts==3){
           i++;
           oDllRestApi->interfaceLockCard(cardId);
           oDllPinCode->closePin();
//           delete oDllPinCode;
//           oDllPinCode = nullptr;
       }
       else
       {this->checkPin();}
}
}

void MainWindow::getID(QString id)
{
    qDebug()<< "ID: " << id;
    cardId = id;
    cardIdStat = id;
    qDebug()<< "cardID: " << cardId;
    oDllRestApi->interfaceAccountId(cardId);
}
