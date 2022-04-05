#include "salasana.h"
#include "ui_salasana.h"
#include <QMessageBox>
salasana::salasana(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::salasana)
{
    ui->setupUi(this);
}

salasana::~salasana()
{
    delete ui;
}

void salasana::on_pushButton_kirjaudu_clicked()
{
    QString PIN = ui->lineEdit_PIN->text();
    if(PIN == "1234"){
        QMessageBox::warning(this, "kirjaudu","Pin koodi on oikein");
    }
    else {
        QMessageBox::warning(this, "kirjaudu","Pin koodi on väärä");
    }
}





