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
{
    ui->setupUi(this);
    mainMenu = new paavalikko;


}

MainWindow::~MainWindow()
{
    delete ui;
    //delete Pword;
    delete oDllPinCode;
    oDllPinCode=nullptr;
    delete mainMenu;
    mainMenu=nullptr;
    delete oDllRestApi;
    oDllRestApi = nullptr;

}



    void MainWindow::checkPin()
    {
        int i=0;
        attempts=0;
        oDllPinCode = new DLLPinCode;
        oDllRestApi = new DLLRestAPI;
        while (i == 0){
        oDllPinCode->startupPin();
        testipin = oDllPinCode->returnPinCode();
        cardId="1111";
        oDllRestApi->interfaceLogin(cardId, testipin);
        QThread::msleep(1000);
        loggedIn=oDllRestApi->returnLogin();

        qDebug() << loggedIn;


        if(attempts==3 /*|| cardLocked == true*/){
            i++;
             oDllPinCode->wrongPin(3);
             //oDllRestApi->lockCard();     Ei vielä koodattu
        }

        else if(loggedIn == "true"){
           i++;
           oDllPinCode->closePin();
           mainMenu->exec();


       }
       else{
          attempts++;
           oDllPinCode->wrongPin(attempts);
           if (attempts==3){
               i++;
               oDllPinCode->closePin();

           }

      }
        }
    }

void MainWindow::on_pushButton_clicked()
{
    checkPin();

}



