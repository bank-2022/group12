#include "browsetransactions.h"
#include "ui_browsetransactions.h"
#include "paavalikko.h"

browseTransactions::browseTransactions(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::browseTransactions)
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
    oDLLRestAPI->interfaceActions("1");

    connect(oDLLRestAPI, SIGNAL(sendBalanceToExe(QString)), this, SLOT(receiveDataFromBalance(QString)));
    connect(oDLLRestAPI, SIGNAL(sendCustomerToExe(QString)), this, SLOT(receiveDataFromCustomer(QString)));
    connect(oDLLRestAPI, SIGNAL(sendActionsToExe(QString)), this, SLOT(receiveDataFromCustomer(QString)));
}

browseTransactions::~browseTransactions()
{
    delete ui;
    delete Timer;
    delete LCDtimer;
}

void browseTransactions::LCDshow()
{
    time--;
    LCDtimer->setInterval(1000);
    ui->lcdNumber_browse->display(time);
    if (time==0) {
    paavalikko *Pvalikko = new paavalikko;
    this->~browseTransactions();
    Pvalikko->show();
    }
}

void browseTransactions::on_pushButton_takaisin_transactions_clicked()
{
    this->hide();
    paavalikko *Pvalikko = new paavalikko;
    this->~browseTransactions();
    Pvalikko->show();
}

void browseTransactions::receiveDataFromBalance(QString a)
{
    qDebug() << "Saldo: " + a;
    ui->lineEdit_2->setText(a);
}

void browseTransactions::receiveDataFromCustomer(QString b)
{
    qDebug() << "Asiakas: " + b;
    ui->textEdit->setText(b);
}

void browseTransactions::receiveDataFromActions(QString d)
{
    qDebug() << "Tapahtumat: " + d;
    ui->textEdit_2->setText(d);
}

