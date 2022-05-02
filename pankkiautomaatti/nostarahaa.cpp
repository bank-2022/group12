#include "nostarahaa.h"
#include "ui_nostarahaa.h"
#include <QDateTime>

nostarahaa::nostarahaa(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::nostarahaa)
{
    ui->setupUi(this);

    cardId="1111";
    id_account="1";

    Timer = new QTimer(this);
    LCDtimer = new QTimer(this);
    connect(LCDtimer, SIGNAL(timeout()), this, SLOT(LCDshow()));
    LCDtimer->start();
    time=11;
    LCDshow();

    oDLLRestAPI = new DLLRestAPI;
    oDLLRestAPI->interfaceBalance(cardId);
    oDLLRestAPI->interfaceCustomerData("1");
    oDLLRestAPI->interfaceId();

    connect(oDLLRestAPI, SIGNAL(sendBalanceToExe(QString)), this, SLOT(receiveDataFromBalance(QString)));
    connect(oDLLRestAPI, SIGNAL(sendCustomerToExe(QString)), this, SLOT(receiveDataFromCustomer(QString)));
    connect(oDLLRestAPI, SIGNAL(sendIdToExe(QString)), this, SLOT(receiveDataFromId(QString)));

}

nostarahaa::~nostarahaa()
{
    delete ui;
    delete LCDtimer;
    delete Timer;
}



void nostarahaa::LCDshow()
{
    time--;
    LCDtimer->setInterval(1000);
    ui->lcdNumber_nostarahaa->display(time);
    if (time==0) {
    Pvalikko = new paavalikko;
    this->~nostarahaa();
    Pvalikko->show();
}
}


void nostarahaa::withdraw(int x, int total)
{
    total=total-x;
    QString otto = "Otto";
    QDateTime date = QDateTime::currentDateTime();
    QString aika = date.toString("yyyy-MM-ddThh:mm:ss");
    QString y = QString::number(x);
    QString z = QString::number(total);
    id = "16";
    qDebug() << "id 1: " << id;
    if (total >= 0){
        qDebug() << "id 2: " << id;
        oDLLRestAPI->interfaceUpdateBalance(id_account,z);
        oDLLRestAPI->interfaceUpdateActions(id, aika, otto, y, id_account, cardId);
        QMessageBox::information(this, "Veloitus","Tililtäsi on veloitettu " + y + "€, ja kate on " + z + "€. Kiitos ja näkemiin!");

    }
    else{
        QMessageBox::warning(this, "Ei katetta","Tilisi kate ei riitä");
    }

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

void nostarahaa::on_pushButton_withdraw20_clicked()
{
    LCDtimer->stop();
    time=11;
    LCDtimer->start();
    withdraw(20,saldo);
}


void nostarahaa::on_pushButton_withdraw40_clicked()
{
    LCDtimer->stop();
    time=11;
    LCDtimer->start();
    withdraw(40,saldo);
}

void nostarahaa::on_pushButton_withdraw60_clicked()
{
    LCDtimer->stop();
    time=11;
    LCDtimer->start();
    withdraw(60,saldo);
}

void nostarahaa::on_pushButton_withdraw80_clicked()
{
    LCDtimer->stop();
    time=11;
    LCDtimer->start();
    withdraw(80,saldo);
}

void nostarahaa::on_pushButton_withdraw100_clicked()
{
    LCDtimer->stop();
    time=11;
    LCDtimer->start();
    withdraw(100,saldo);
}

void nostarahaa::on_pushButton_200_clicked()
{
    LCDtimer->stop();
    time=11;
    LCDtimer->start();
    withdraw(200,saldo);
}

void nostarahaa::on_pushButton_500_clicked()
{
    LCDtimer->stop();
    time=11;
    LCDtimer->start();
    withdraw(500,saldo);
}

void nostarahaa::receiveDataFromBalance(QString a)
{
    ui->lineEdit->setText(a + "€");
    saldo=a.toInt();

}

void nostarahaa::receiveDataFromCustomer(QString b)
{
    ui->textEdit->setText(b);
}

void nostarahaa::receiveDataFromId(QString f)
{
    QString id = f;
    qDebug() << "id f: " << id;
}
