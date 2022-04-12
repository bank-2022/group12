#include "pinengineclass.h"
#include "ui_pinengineclass.h"


PinEngineClass::PinEngineClass(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PinEngineClass)
{
    ui->setupUi(this);
    ui->lineEdit_pin->setMaxLength(4);
}

PinEngineClass::~PinEngineClass()
{
    delete ui;
    ui = nullptr;
}

void PinEngineClass::on_pushButton_1_clicked()
{
    ui->lineEdit_pin->setText(ui->lineEdit_pin->text() + "1");
}


void PinEngineClass::on_pushButton_2_clicked()
{
    ui->lineEdit_pin->setText(ui->lineEdit_pin->text() + "2");
}


void PinEngineClass::on_pushButton_3_clicked()
{
    ui->lineEdit_pin->setText(ui->lineEdit_pin->text() + "3");
}


void PinEngineClass::on_pushButton_4_clicked()
{
    ui->lineEdit_pin->setText(ui->lineEdit_pin->text() + "4");
}


void PinEngineClass::on_pushButton_5_clicked()
{
    ui->lineEdit_pin->setText(ui->lineEdit_pin->text() + "5");
}


void PinEngineClass::on_pushButton_6_clicked()
{
    ui->lineEdit_pin->setText(ui->lineEdit_pin->text() + "6");
}


void PinEngineClass::on_pushButton_7_clicked()
{
    ui->lineEdit_pin->setText(ui->lineEdit_pin->text() + "7");
}


void PinEngineClass::on_pushButton_8_clicked()
{
    ui->lineEdit_pin->setText(ui->lineEdit_pin->text() + "8");
}


void PinEngineClass::on_pushButton_9_clicked()
{
    ui->lineEdit_pin->setText(ui->lineEdit_pin->text() + "9");
}


void PinEngineClass::on_pushButton_0_clicked()
{
    ui->lineEdit_pin->setText(ui->lineEdit_pin->text() + "0");
}


void PinEngineClass::on_pushButton_Clear_clicked()
{
    ui->lineEdit_pin->clear();
}


void PinEngineClass::on_pushButton_Sign_clicked()
{
    pin = ui->lineEdit_pin->text();
    ui->lineEdit_pin->clear();
    emit emitPin(pin);
}

