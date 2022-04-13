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

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    mainMenu = new paavalikko;
    //connect(oDllPinCode, SIGNAL(emitPin(QString)),
      //      this, SLOT
    //Pword = new salasana;
}

MainWindow::~MainWindow()
{
    delete ui;
    //delete Pword;
    delete oDllPinCode;
    oDllPinCode=nullptr;
    delete mainMenu;
}

void MainWindow::checkPin()
{
    int i=0;
    while (i == 0){
    oDllPinCode = new DLLPinCode;
    oDllPinCode->startupPin();
    qDebug() << "testi1";
    testipin = oDllPinCode->returnPinCode();
    qDebug() << testipin;
    qDebug() << "Pääsi tänne";

   if(testipin == "1234"){
       i++;
       qDebug() << "testi";
       oDllPinCode->closePin();
       mainMenu->exec();


   }
   else{
      attempts++;
      qDebug() << attempts;
       oDllPinCode->wrongPin();


       //if (attempts==3){
       //    lockCard();
       //    closePin();
       //}
  }
    }
}




void MainWindow::on_pushButton_clicked()
{
    checkPin();

}

