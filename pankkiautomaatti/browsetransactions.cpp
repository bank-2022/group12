#include "browsetransactions.h"
#include "ui_browsetransactions.h"

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

/*void browseTransactions::taimerout()
{
    this->hide();
    paavalikko *Pvalikko = new paavalikko;
    this->~browseTransactions();
    Pvalikko->show();
}*/

void browseTransactions::on_pushButton_takaisin_transactions_clicked()
{
    this->hide();
    paavalikko *Pvalikko = new paavalikko;
    this->~browseTransactions();
    Pvalikko->show();
}

