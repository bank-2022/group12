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

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

     oDllPinCode = new DLLPinCode;
    //Pword = new salasana;
}

MainWindow::~MainWindow()
{
    delete ui;
    delete oDllPinCode;
    //delete Pword;
}




void MainWindow::on_pushButton_clicked()
{

    oDllPinCode->startupPin();
    //Pword->exec();
}

