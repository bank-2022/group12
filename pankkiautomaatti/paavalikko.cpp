#include "paavalikko.h"
#include "ui_paavalikko.h"


paavalikko::paavalikko(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::paavalikko)
{
    ui->setupUi(this);
    Psaldo = new saldo;
    withdraw = new nostarahaa;
    Transactions = new browseTransactions;
    timer = new QTimer(this);
    showTime = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(timerout()));
    connect(showTime, SIGNAL(timeout()),this, SLOT(showtime()));
    timer->start(30000);
    showTime->start();
    showtime();

}

paavalikko::~paavalikko()
{
    delete ui;
    delete Psaldo;
    delete withdraw;
    delete Transactions;
    delete timer;
    delete showTime;

}

void paavalikko::showtime()
{
    QTime time = QTime::currentTime();
    QString time_text = time.toString("hh : mm : ss");
    ui->label_aika->setText(time_text);
}

void paavalikko::timerout()
{
    this->close();
}




void paavalikko::on_pushButton_showtotal_clicked()
{

this->hide();
Psaldo->exec();
this->~paavalikko();

}


void paavalikko::on_pushButton_withdraw_clicked()
{
withdraw->exec();
}


void paavalikko::on_pushButton_logout_clicked()
{
    qApp->quit();
    QProcess::startDetached(qApp->arguments()[0], qApp->arguments());


}



void paavalikko::on_pushButton_actions_clicked()
{
    Transactions->exec();
}





