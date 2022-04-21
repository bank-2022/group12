#include "nostarahaa.h"
#include "ui_nostarahaa.h"

nostarahaa::nostarahaa(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::nostarahaa)
{
    ui->setupUi(this);
    Timer = new QTimer(this);
    connect(Timer, SIGNAL(timeout()), this, SLOT(taimerout()));
    Timer->setInterval(1000);
    Timer->start(10000);

}

nostarahaa::~nostarahaa()
{
    delete ui;
}

void nostarahaa::taimerout()
{
    this->hide();
    paavalikko *Pvalikko = new paavalikko;
    this->~nostarahaa();
    Pvalikko->show();
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



