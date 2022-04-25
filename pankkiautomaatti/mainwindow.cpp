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
    , loggedIn("true")
    , attempts(0)
    , i(0)
{
    ui->setupUi(this);
    mainMenu = new paavalikko;
    oDllPinCode = new DLLPinCode;
    oDllRestApi = new DLLRestAPI;
    connect(oDllRestApi, SIGNAL(sendToExeLogin(QString)), this, SLOT(receiveDataLogin(QString)));


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

void MainWindow::tryToLogin()
{
    if(attempts==3 /*|| cardLocked == true*/){
        i++;
         oDllPinCode->wrongPin(3);
         //oDllRestApi->lockCard();     Ei vielä koodattu
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
           oDllPinCode->closePin();
           delete oDllPinCode;
           oDllPinCode = nullptr;
       }
       else
       {this->checkPin();}
}
}





