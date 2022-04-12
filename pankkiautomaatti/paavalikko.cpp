#include "paavalikko.h"
#include "ui_paavalikko.h"
#include <QDateTime>
#include <QDateTimeEdit>


paavalikko::paavalikko(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::paavalikko)
{
    ui->setupUi(this);
    Psaldo = new saldo;
    withdraw = new nostarahaa;
    Transactions = new browseTransactions;

}

paavalikko::~paavalikko()
{
    delete ui;
    delete Psaldo;
    delete withdraw;
    delete Transactions;

}



void paavalikko::on_pushButton_showtotal_clicked()
{
Psaldo->exec();
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





