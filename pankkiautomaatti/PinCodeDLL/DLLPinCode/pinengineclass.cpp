#include "pinengineclass.h"
#include "ui_pinengineclass.h"


PinEngineClass::PinEngineClass(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PinEngineClass)
{
    ui->setupUi(this);
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


void PinEngineClass::on_pushButton_clear_clicked()
{
    pin = ui->lineEdit_Pincode->text();
    ui->lineEdit_Pincode->clear();
    emit emitPin(pin);
}


void PinEngineClass::on_pushButton_login_2_clicked()
{
    QString PIN = ui->lineEdit_Pincode->text();
    if(PIN == "1234"){

    }
    else {
        QMessageBox::warning(this, "kirjaudu","Pin koodi on väärä");
    }
}

