#include "paavalikko.h"
#include "ui_paavalikko.h"


paavalikko::paavalikko(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::paavalikko)
{

    ui->setupUi(this);   
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

    qDebug() << "moro";

}

paavalikko::~paavalikko()
{
    delete ui;
    delete timer;
    delete showTime;

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
        this->~paavalikko();
        QProcess::startDetached(qApp->arguments()[0], qApp->arguments());

}
}

void paavalikko::timerout()
{
    qApp->quit();
   QProcess::startDetached(qApp->arguments()[0], qApp->arguments());
}




void paavalikko::on_pushButton_showtotal_clicked()
{
timer->stop();
this->hide();
saldo *Psaldo = new saldo;
Psaldo->show();
this->~paavalikko();


}


void paavalikko::on_pushButton_withdraw_clicked()
{
timer->stop();
this->hide();
nostarahaa *withdraw = new nostarahaa;
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
timer->stop();
this->hide();
browseTransactions *Transactions = new browseTransactions;
Transactions->show();
this->~paavalikko();
}







