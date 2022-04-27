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
}

MainWindow::~MainWindow()
{
    delete ui;
    delete oDllPinCode;
    oDllPinCode=nullptr;
    delete mainMenu;

}

void MainWindow::checkPin()
{
        oDllPinCode->startupPin();
        pin = oDllPinCode->returnPinCode();
        cardId="1111";
        oDllRestApi->interfaceLogin(cardId, pin);
        oDllRestApi->interfaceIsCardLocked(cardId);
        qDebug() << cardLocked << "testin jälkeen";
}

void MainWindow::receiveDataLogin(QString l)
{
    loggedIn = l;
    qDebug() << loggedIn << "Receivedata";
    this->tryToLogin();
}

void MainWindow::receiveDataLockStatus(QString lock)
{
    cardLocked = lock;
    qDebug() << cardLocked << "Receivecarddata";
}

void MainWindow::tryToLogin()
{

    if(attempts==3 || cardLocked == "1"){
        i++;
         oDllPinCode->wrongPin(3);
         oDllRestApi->interfaceLockCard(cardId);
         oDllPinCode->closePin();
         delete oDllPinCode;
         oDllPinCode = nullptr;
    }

    if(loggedIn == "true"){
       i++;
       oDllPinCode->closePin();
       delete oDllPinCode;
       oDllPinCode = nullptr;
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
           delete oDllPinCode;
           oDllPinCode = nullptr;
       }
       else
       {this->checkPin();}
}
}

//    void MainWindow::checkPin()
//    {
//        int i=0;
//        oDllPinCode = new DLLPinCode;
//        while (i == 0){
//        oDllPinCode->startupPin();
//        testipin = oDllPinCode->returnPinCode();
//        cardId="1111";
////        oDllRestApi->interfaceLogin(testipin, cardId);


//        if(attempts==3 || cardLocked == true){
//            i++;
//             oDllPinCode->wrongPin(3);
//             //oDllRestApi->lockCard();     Ei vielä koodattu
//        }

//        else if(testipin == "1234"){
//           i++;
//           oDllPinCode->closePin();
//
//           mainMenu->exec();


//       }
//       else{
//          attempts++;
//           oDllPinCode->wrongPin(attempts);
//           if (attempts==3){
//               i++;
//               oDllPinCode->closePin();

//           }

//      }
//        }
//    }

void MainWindow::on_pushButton_clicked()
{
    checkPin();
}

void MainWindow::getID(QString id)
{
    qDebug()<< "ID: " << id;
    cardId = id;
    qDebug()<< "cardID: " << cardId;
    checkPin();
}
