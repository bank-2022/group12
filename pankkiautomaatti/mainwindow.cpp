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

#include <memory>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , attempts(0)
    , i(0)
{
    ui->setupUi(this);
    mainMenu = new paavalikko;
    oDllPinCode = new DLLPinCode;
    oDllRestApi = new DLLRestAPI;
    connect(oDllRestApi, SIGNAL(sendToExeLogin(QString)), this, SLOT(receiveDataLogin(QString)));
    connect(oDllRestApi, SIGNAL(sendToExeLockStatus(QString)), this, SLOT(receiveDataLockStatus(QString)));


}

MainWindow::~MainWindow()
{
    delete ui;
    //delete Pword;
    delete mainMenu;
    mainMenu=nullptr;
    delete oDllRestApi;
    oDllRestApi = nullptr;

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

void MainWindow::on_pushButton_clicked()
{
    checkPin();
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





