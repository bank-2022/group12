#include "pinengineclass.h"
#include "ui_pinengineclass.h"
#include <QDebug>
#include "dllpincode.h"
#include <QTimer>

PinEngineClass::PinEngineClass(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PinEngineClass)
{
    ui->setupUi(this);
    ui->lineEdit_Pincode->setMaxLength(4);
    LCDtimer = new QTimer;
    connect(LCDtimer, SIGNAL(timeout()), this, SLOT(LCDshow()));
    LCDtimer->start();
    time=11;
    LCDshow();
}


PinEngineClass::~PinEngineClass()
{
    delete ui;
    ui = nullptr;
}



void PinEngineClass::on_pushButton_1_clicked()
{
    time=11;
    ui->lineEdit_Pincode->setText(ui->lineEdit_Pincode->text() + "1");
    LCDtimer->start();
}


void PinEngineClass::on_pushButton_2_clicked()
{
    time=11;
    ui->lineEdit_Pincode->setText(ui->lineEdit_Pincode->text() + "2");
    LCDtimer->start();
}


void PinEngineClass::on_pushButton_3_clicked()
{
    time=11;
    ui->lineEdit_Pincode->setText(ui->lineEdit_Pincode->text() + "3");
    LCDtimer->start();
}


void PinEngineClass::on_pushButton_4_clicked()
{
    time=11;
    ui->lineEdit_Pincode->setText(ui->lineEdit_Pincode->text() + "4");
    LCDtimer->start();
}


void PinEngineClass::on_pushButton_5_clicked()
{
    time=11;
    ui->lineEdit_Pincode->setText(ui->lineEdit_Pincode->text() + "5");
    LCDtimer->start();
}


void PinEngineClass::on_pushButton_6_clicked()
{
    time=11;
    ui->lineEdit_Pincode->setText(ui->lineEdit_Pincode->text() + "6");
    LCDtimer->start();
}


void PinEngineClass::on_pushButton_7_clicked()
{
    time=11;
    ui->lineEdit_Pincode->setText(ui->lineEdit_Pincode->text() + "7");
    LCDtimer->start();
}


void PinEngineClass::on_pushButton_8_clicked()
{
    time=11;
    ui->lineEdit_Pincode->setText(ui->lineEdit_Pincode->text() + "8");
    LCDtimer->start();
}


void PinEngineClass::on_pushButton_9_clicked()
{
    time=11;
    ui->lineEdit_Pincode->setText(ui->lineEdit_Pincode->text() + "9");
    LCDtimer->start();
}


void PinEngineClass::on_pushButton_0_clicked()
{
    time=11;
    ui->lineEdit_Pincode->setText(ui->lineEdit_Pincode->text() + "0");
    LCDtimer->start();
}


void PinEngineClass::on_pushButton_Clear_clicked()
{
    time=11;
    ui->lineEdit_Pincode->clear();
    LCDtimer->start();
}


void PinEngineClass::on_pushButton_Sign_clicked()
{
    QString pinCode = ui->lineEdit_Pincode->text();
    this->setPin(pinCode);
    ui->lineEdit_Pincode->clear();
    this->close();

}

const QString &PinEngineClass::getPin() const
{
    return pin;
}

void PinEngineClass::setPin(const QString &newPin)
{
    pin = newPin;
}

void PinEngineClass::closePinObject()
{
    this->close();
}

void PinEngineClass::wrongPinCode(int attempts)
{
    if (attempts == 3){
        QMessageBox::warning(this, "Kirjaudu","Kortti lukittu, ota yhteyttä järjestelmänvalvojaan");
    }
    else{
    int i = 3-attempts;
    QString s = QString::number(i);
     QMessageBox::warning(this, "Kirjaudu","Pin koodi on väärä, " + s + " yritystä jäljellä.");
    }
}

void PinEngineClass::LCDshow()
{
    time--;
    LCDtimer->setInterval(1000);
    ui->lcdNumber->display(time);
        if (time==0) {
            this->~PinEngineClass();
    }
}

