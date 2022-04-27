#include "nostarahaa.h"
#include "ui_nostarahaa.h"

nostarahaa::nostarahaa(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::nostarahaa)
{
    ui->setupUi(this);

    Timer = new QTimer(this);
    LCDtimer = new QTimer(this);
    connect(LCDtimer, SIGNAL(timeout()), this, SLOT(LCDshow()));
    LCDtimer->start();
    time=11;
    LCDshow();

    oDLLRestAPI = new DLLRestAPI;
    oDLLRestAPI->interfaceBalance("1111");
    oDLLRestAPI->interfaceCustomerData("1");

    connect(oDLLRestAPI, SIGNAL(sendBalanceToExe(QString)), this, SLOT(receiveDataFromBalance(QString)));
    connect(oDLLRestAPI, SIGNAL(sendCustomerToExe(QString)), this, SLOT(receiveDataFromCustomer(QString)));

}

nostarahaa::~nostarahaa()
{
    delete ui;
    delete LCDtimer;
    delete Timer;
}



void nostarahaa::LCDshow()
{
    time--;
    LCDtimer->setInterval(1000);
    ui->lcdNumber_nostarahaa->display(time);
    if (time==0) {
    Pvalikko = new paavalikko;
    this->~nostarahaa();
    Pvalikko->show();
}
}

void nostarahaa::on_pushButton_takaisin1_clicked()
{
    this->hide();
    paavalikko *Pvalikko = new paavalikko;
    this->~nostarahaa();
    Pvalikko->show();
}

void nostarahaa::on_pushButton_3_Muusumma_clicked()
{
    this->hide();
    Muusumma *Msumma = new Muusumma;
    this->~nostarahaa();
    Msumma->show();
}

void nostarahaa::on_pushButton_withdraw20_clicked()
{
    LCDtimer->stop();
    time=11;
    LCDtimer->start();
}


void nostarahaa::on_pushButton_withdraw40_clicked()
{
    LCDtimer->stop();
    time=11;
    LCDtimer->start();
}

void nostarahaa::on_pushButton_withdraw60_clicked()
{
    LCDtimer->stop();
    time=11;
    LCDtimer->start();
}

void nostarahaa::on_pushButton_withdraw80_clicked()
{
    LCDtimer->stop();
    time=11;
    LCDtimer->start();
}

void nostarahaa::on_pushButton_withdraw100_clicked()
{
    LCDtimer->stop();
    time=11;
    LCDtimer->start();
}

void nostarahaa::on_pushButton_200_clicked()
{
    LCDtimer->stop();
    time=11;
    LCDtimer->start();
}

void nostarahaa::on_pushButton_500_clicked()
{
    LCDtimer->stop();
    time=11;
    LCDtimer->start();
}

void nostarahaa::receiveDataFromBalance(QString a)
{
    qDebug() << "Saldo: " + a;
    ui->lineEdit->setText(a);
}

void nostarahaa::receiveDataFromCustomer(QString b)
{
    qDebug() << "Asiakas: " + b;
    ui->textEdit->setText(b);
}
