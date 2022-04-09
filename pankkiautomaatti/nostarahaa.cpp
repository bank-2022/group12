#include "nostarahaa.h"
#include "ui_nostarahaa.h"

nostarahaa::nostarahaa(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::nostarahaa)
{
    ui->setupUi(this);
}

nostarahaa::~nostarahaa()
{
    delete ui;
}



void nostarahaa::on_pushButton_takaisin1_clicked()
{
   this->close();
}

