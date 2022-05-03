#include "muusumma.h"
#include "ui_muusumma.h"

Muusumma::Muusumma(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Muusumma)
{
    ui->setupUi(this);
    timer = new QTimer(this);
    LCDtimer = new QTimer(this);
    connect(LCDtimer, SIGNAL(timeout()), this, SLOT(LCDshow()));
    LCDtimer->start();
    time=11;
    LCDshow();

    DLLRestAPI *oDLLRestAPI = new DLLRestAPI;
    oDLLRestAPI->interfaceBalance("1111");
    oDLLRestAPI->interfaceCustomerData("1");

    connect(oDLLRestAPI, SIGNAL(sendBalanceToExe(QString)), this, SLOT(receiveSaldo(QString)));
}

Muusumma::~Muusumma()
{
    delete ui;
    delete timer;
    delete LCDtimer;
}

void Muusumma::LCDshow()
{
    time--;
    LCDtimer->setInterval(1000);
    ui->lcdNumber_muusumma->display(time);
    if (time==0) {
    nostarahaa *Nrahaa = new nostarahaa;
    this->~Muusumma();
    Nrahaa->show();
}
}

//void Muusumma::on_pushButton_Ok_clicked()
//{
//    QString Muusumma = ui->lineEdit_Muusumma->text();
//    nostarahaa *oNostaRahaa = new nostarahaa;
//    int otherAmount=Muusumma.toInt();
//    oNostaRahaa->withdraw(otherAmount, raha);
//    this->close();
//    delete oNostaRahaa;
//    oNostaRahaa=nullptr;

//}


void Muusumma::on_pushButton_Ok_clicked()
{
    QString Muusumma = ui->lineEdit_Muusumma->text();
    int otherAmount=Muusumma.toInt();

    if (otherAmount % 10 != 0){
        LCDtimer->stop();
        time=11;
        QMessageBox::warning(this, "Valitse tasaluku","HUOM! Automaatista voi nostaa vain tasalukuja.");
        LCDtimer->start();
    }

    else
        {
        nostarahaa *oNostaRahaa = new nostarahaa;
        qDebug() << otherAmount << "clicked";
        oNostaRahaa->withdraw(otherAmount,raha);
        this->close();
        delete oNostaRahaa;
        oNostaRahaa=nullptr;
        }
}


void Muusumma::on_pushButton_1_clicked()
{
 LCDtimer->stop();
 time=11;
 ui->lineEdit_Muusumma->setText(ui->lineEdit_Muusumma->text() + "1");
 LCDtimer->start();
}


void Muusumma::on_pushButton_2_clicked()
{
    LCDtimer->stop();
    time=11;
    ui->lineEdit_Muusumma->setText(ui->lineEdit_Muusumma->text() + "2");
    LCDtimer->start();
}


void Muusumma::on_pushButton_3_clicked()
{
    LCDtimer->stop();
    time=11;
    ui->lineEdit_Muusumma->setText(ui->lineEdit_Muusumma->text() + "3");
    LCDtimer->start();
}


void Muusumma::on_pushButton_4_clicked()
{
    LCDtimer->stop();
    time=11;
    ui->lineEdit_Muusumma->setText(ui->lineEdit_Muusumma->text() + "4");
    LCDtimer->start();
}


void Muusumma::on_pushButton_5_clicked()
{
    LCDtimer->stop();
    time=11;
    ui->lineEdit_Muusumma->setText(ui->lineEdit_Muusumma->text() + "5");
    LCDtimer->start();
}


void Muusumma::on_pushButton_6_clicked()
{
    LCDtimer->stop();
    time=11;
    ui->lineEdit_Muusumma->setText(ui->lineEdit_Muusumma->text() + "6");
    LCDtimer->start();
}


void Muusumma::on_pushButton_7_clicked()
{
    LCDtimer->stop();
    time=11;
   ui->lineEdit_Muusumma->setText(ui->lineEdit_Muusumma->text() + "7");
   LCDtimer->start();
}


void Muusumma::on_pushButton_8_clicked()
{

    LCDtimer->stop();
    time=11;
   ui->lineEdit_Muusumma->setText(ui->lineEdit_Muusumma->text() + "8");
   LCDtimer->start();
}


void Muusumma::on_pushButton_9_clicked()
{
    LCDtimer->stop();
    time=11;
    ui->lineEdit_Muusumma->setText(ui->lineEdit_Muusumma->text() + "9");
    LCDtimer->start();
}


void Muusumma::on_pushButton_0_clicked()
{
    LCDtimer->stop();
    time=11;
    ui->lineEdit_Muusumma->setText(ui->lineEdit_Muusumma->text() + "0");
     LCDtimer->start();
}


void Muusumma::on_pushButton_kumita_clicked()
{
    LCDtimer->stop();
    ui->lineEdit_Muusumma->clear();
    time=11;
    LCDtimer->start();
}

void Muusumma::receiveSaldo(QString f)
{
    raha=f.toInt();
}
