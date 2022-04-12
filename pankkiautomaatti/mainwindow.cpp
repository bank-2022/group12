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

    //Pword = new salasana;
    oDllPinCode = new DLLPinCode;
}

MainWindow::~MainWindow()
{
    delete ui;
    //delete Pword;
    delete oDllPinCode;
}




void MainWindow::on_pushButton_clicked()
{
    oDllPinCode = new DLLPinCode;
    oDllPinCode->startupPin();

}

