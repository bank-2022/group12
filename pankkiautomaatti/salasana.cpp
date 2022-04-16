#include "salasana.h"
#include "ui_salasana.h"
#include <QMessageBox>
#include <QLabel>
#include <QLineEdit>
#include <QString>


salasana::salasana(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::salasana)
{
    ui->setupUi(this);
    Mainmenu = new paavalikko;

}

salasana::~salasana()
{
    delete ui;
    delete Mainmenu;
}






/*void salasana::on_pushButton_kirjaudu_clicked()
{
    QString PIN = ui->lineEdit_PIN->text();
    if(PIN == "1234"){
    Mainmenu->exec();
    }
    else {
        QMessageBox::warning(this, "kirjaudu","Pin koodi on väärä");
    }
}
*/



/*void salasana::on_pushButton_1_clicked()
{
ui->lineEdit_PIN->setText(ui->lineEdit_PIN->text() + "1");


}
void salasana::on_pushButton_2_clicked()
{
    ui->lineEdit_PIN->setText(ui->lineEdit_PIN->text() + "2");
}


void salasana::on_pushButton_3_clicked()
{
   ui->lineEdit_PIN->setText(ui->lineEdit_PIN->text() + "3");
}


void salasana::on_pushButton_4_clicked()
{
    ui->lineEdit_PIN->setText(ui->lineEdit_PIN->text() + "4");
}


void salasana::on_pushButton_5_clicked()
{
   ui->lineEdit_PIN->setText(ui->lineEdit_PIN->text() + "5");
}


void salasana::on_pushButton_6_clicked()
{
    ui->lineEdit_PIN->setText(ui->lineEdit_PIN->text() + "6");
}


void salasana::on_pushButton_7_clicked()
{
    ui->lineEdit_PIN->setText(ui->lineEdit_PIN->text() + "7");
}


void salasana::on_pushButton_8_clicked()
{
    ui->lineEdit_PIN->setText(ui->lineEdit_PIN->text() + "8");
}


void salasana::on_pushButton_9_clicked()
{
    ui->lineEdit_PIN->setText(ui->lineEdit_PIN->text() + "9");
}


void salasana::on_pushButton_0_clicked()
{
    ui->lineEdit_PIN->setText(ui->lineEdit_PIN->text() + "0");
}


void salasana::on_pushButton_kumita_clicked()
{
  ui->lineEdit_PIN->clear();
}*/


