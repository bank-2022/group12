#include "muusumma.h"
#include "ui_muusumma.h"

Muusumma::Muusumma(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Muusumma)
{
    ui->setupUi(this);
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(timerout()));
    timer->setInterval(1000);
    timer->start(10000);


}

Muusumma::~Muusumma()
{
    delete ui;
    delete timer;
}

void Muusumma::timerout()
{
    this->hide();
    nostarahaa *Withdraw = new nostarahaa;
    this->~Muusumma();
    Withdraw->show();

}

void Muusumma::on_pushButton_Ok_clicked()
{
    QString Muusumma = ui->lineEdit_Muusumma->text();
}



void Muusumma::on_pushButton_1_clicked()
{
 ui->lineEdit_Muusumma->setText(ui->lineEdit_Muusumma->text() + "1");
}


void Muusumma::on_pushButton_2_clicked()
{
    ui->lineEdit_Muusumma->setText(ui->lineEdit_Muusumma->text() + "2");
}


void Muusumma::on_pushButton_3_clicked()
{
    ui->lineEdit_Muusumma->setText(ui->lineEdit_Muusumma->text() + "3");
}


void Muusumma::on_pushButton_4_clicked()
{
    ui->lineEdit_Muusumma->setText(ui->lineEdit_Muusumma->text() + "4");
}


void Muusumma::on_pushButton_5_clicked()
{
    ui->lineEdit_Muusumma->setText(ui->lineEdit_Muusumma->text() + "5");
}


void Muusumma::on_pushButton_6_clicked()
{
    ui->lineEdit_Muusumma->setText(ui->lineEdit_Muusumma->text() + "6");
}


void Muusumma::on_pushButton_7_clicked()
{
   ui->lineEdit_Muusumma->setText(ui->lineEdit_Muusumma->text() + "7");
}


void Muusumma::on_pushButton_8_clicked()
{
   ui->lineEdit_Muusumma->setText(ui->lineEdit_Muusumma->text() + "8");
}


void Muusumma::on_pushButton_9_clicked()
{
    ui->lineEdit_Muusumma->setText(ui->lineEdit_Muusumma->text() + "9");
}


void Muusumma::on_pushButton_0_clicked()
{
 ui->lineEdit_Muusumma->setText(ui->lineEdit_Muusumma->text() + "0");
}

