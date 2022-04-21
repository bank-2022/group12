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

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);



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
        int i=0;
        oDllPinCode = new DLLPinCode;
        while (i == 0){
        oDllPinCode->startupPin();
        testipin = oDllPinCode->returnPinCode();
        cardId="1111";
        //oDllRestApi->interfaceLogin(testipin, cardId); //Ei toimi


        if(attempts==3 || cardLocked == true){
            i++;
             oDllPinCode->wrongPin(3);
             //oDllRestApi->lockCard();     Ei vielä koodattu
        }

        else if(testipin == "1234"){
           i++;
           oDllPinCode->closePin();
           this->hide();
           oDllPinCode->~DLLPinCode();
           mainMenu = new paavalikko;
           mainMenu->show();



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



