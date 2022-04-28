#include "paavalikko.h"
#include "ui_paavalikko.h"

#include "saldo.h"
#include "nostarahaa.h"
#include "browsetransactions.h"


paavalikko::paavalikko(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::paavalikko)
{
    ui->setupUi(this);
    oDLLRestAPI = new DLLRestAPI();
    oDLLRestAPI->interfaceCustomerData("1");
    connect(oDLLRestAPI, SIGNAL(sendCustomerToExe(QString)), this, SLOT(receiveDataFromCustomer(QString)));

    timer = new QTimer(this);
    showTime = new QTimer(this);
    LCDtimer = new QTimer(this);
    connect(LCDtimer, SIGNAL(timeout()),this, SLOT(LCDshow()));
    connect(timer, SIGNAL(timeout()), this, SLOT(showtime()));
    timer->start();
    LCDtimer->start();
    time=31;
    showtime();
    LCDshow();
}

paavalikko::~paavalikko()
{
    delete ui;
    delete timer;
    delete showTime;
    delete oDLLRestAPI;

}

void paavalikko::showtime()
{
    QTime time = QTime::currentTime();
    QString time_text = time.toString("hh : mm : ss");
    ui->label_aika->setText(time_text);
}

void paavalikko::LCDshow()
{
    time--;
    LCDtimer->setInterval(1000);
    ui->lcdNumber->display(time);
    if (time==0) {
        qDebug() << "moro";
        this->~paavalikko();
}
}

void paavalikko::on_pushButton_showtotal_clicked()
{
    LCDtimer->stop();
    this->hide();
    saldo *Psaldo = new saldo();
    Psaldo->show();
}

void paavalikko::on_pushButton_withdraw_clicked()
{
    LCDtimer->stop();
    this->hide();
    nostarahaa *withdraw = new nostarahaa();
    withdraw->show();
    this->~paavalikko();
}

void paavalikko::on_pushButton_logout_clicked()
{
    qApp->quit();
    QProcess::startDetached(qApp->arguments()[0], qApp->arguments());


}

void paavalikko::on_pushButton_actions_clicked()
{
    LCDtimer->stop();
    this->hide();
    browseTransactions *Transactions = new browseTransactions();
    Transactions->show();
    this->~paavalikko();
}

void paavalikko::receiveDataFromCustomer(QString b)
{
    ui->textEdit->setText(b);
}





