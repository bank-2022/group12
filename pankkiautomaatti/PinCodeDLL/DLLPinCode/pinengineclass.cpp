#include "pinengineclass.h"
#include "ui_pinengineclass.h"
#include <QDebug>
#include "dllpincode.h"


PinEngineClass::PinEngineClass(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PinEngineClass)
{
    ui->setupUi(this);
    ui->lineEdit_Pincode->setMaxLength(4);
}


PinEngineClass::~PinEngineClass()
{
    delete ui;
    ui = nullptr;

}



void PinEngineClass::on_pushButton_1_clicked()
{
    ui->lineEdit_Pincode->setText(ui->lineEdit_Pincode->text() + "1");
}


void PinEngineClass::on_pushButton_2_clicked()
{
    ui->lineEdit_Pincode->setText(ui->lineEdit_Pincode->text() + "2");
}


void PinEngineClass::on_pushButton_3_clicked()
{
    ui->lineEdit_Pincode->setText(ui->lineEdit_Pincode->text() + "3");
}


void PinEngineClass::on_pushButton_4_clicked()
{
    ui->lineEdit_Pincode->setText(ui->lineEdit_Pincode->text() + "4");
}


void PinEngineClass::on_pushButton_5_clicked()
{
    ui->lineEdit_Pincode->setText(ui->lineEdit_Pincode->text() + "5");
}


void PinEngineClass::on_pushButton_6_clicked()
{
    ui->lineEdit_Pincode->setText(ui->lineEdit_Pincode->text() + "6");
}


void PinEngineClass::on_pushButton_7_clicked()
{
    ui->lineEdit_Pincode->setText(ui->lineEdit_Pincode->text() + "7");
}


void PinEngineClass::on_pushButton_8_clicked()
{
    ui->lineEdit_Pincode->setText(ui->lineEdit_Pincode->text() + "8");
}


void PinEngineClass::on_pushButton_9_clicked()
{
    ui->lineEdit_Pincode->setText(ui->lineEdit_Pincode->text() + "9");
}


void PinEngineClass::on_pushButton_0_clicked()
{
    ui->lineEdit_Pincode->setText(ui->lineEdit_Pincode->text() + "0");
}


void PinEngineClass::on_pushButton_Clear_clicked()
{
    ui->lineEdit_Pincode->clear();
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
     qDebug() << "closepinobject";
    this->close();

}

void PinEngineClass::wrongPinCode()
{
     QMessageBox::warning(this, "kirjaudu","Pin koodi on väärä");
}

