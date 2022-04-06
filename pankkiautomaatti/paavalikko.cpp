#include "paavalikko.h"
#include "ui_paavalikko.h"

paavalikko::paavalikko(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::paavalikko)
{
    ui->setupUi(this);
    Psaldo = new saldo;
}

paavalikko::~paavalikko()
{
    delete ui;
    delete Psaldo;
}

void paavalikko::on_pushButton_showtotal_clicked()
{
Psaldo->exec();
}


void paavalikko::on_pushButton_withdraw_clicked()
{

}

