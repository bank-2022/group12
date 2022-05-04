#include "saldo.h"
#include "ui_saldo.h"
#include "paavalikko.h"
#include "mainwindow.h"

saldo::saldo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::saldo)
{
    ui->setupUi(this);

    Timer = new QTimer(this);
    LCDtimer = new QTimer(this);
    connect(LCDtimer, SIGNAL(timeout()), this, SLOT(LCDshow()));
    LCDtimer->start();
    time=11;

    oDLLRestAPI = new DLLRestAPI;
    oDLLRestAPI->interfaceBalance(MainWindow::cardIdStat);
    oDLLRestAPI->interfaceCustomerData(MainWindow::accountIdStat);
    oDLLRestAPI->interfaceFiveActions(MainWindow::accountIdStat);

    connect(oDLLRestAPI, SIGNAL(sendBalanceToExe(QString)), this, SLOT(receiveDataFromBalance(QString)));
    connect(oDLLRestAPI, SIGNAL(sendCustomerToExe(QString)), this, SLOT(receiveDataFromCustomer(QString)));
    connect(oDLLRestAPI, SIGNAL(sendFiveActionsToExe(QString)), this, SLOT(receiveDataFromFiveActions(QString)));


}
saldo::~saldo()
{
    delete ui;
    delete Timer;
    delete LCDtimer;
}

void saldo::LCDshow()
{
    time--;
    LCDtimer->setInterval(1000);
    ui->lcdNumber_saldo->display(time);
    if (time==0) {
        paavalikko *Pvalikko = new paavalikko;
        this->~saldo();
        Pvalikko->show();
}
}

void saldo::on_pushButton_takaisin_clicked()
{
    this->hide();
    paavalikko *Pvalikko = new paavalikko();
    this->~saldo();
    Pvalikko->show();
}

void saldo::receiveDataFromBalance(QString a)
{
    ui->lineEdit_balance->setText(a +" €");
}

void saldo::receiveDataFromCustomer(QString b)
{
    ui->textEdit_customer->setText(b);
}

void saldo::receiveDataFromFiveActions(QString c)
{

    ui->textEdit_actions->setText(c);
}
