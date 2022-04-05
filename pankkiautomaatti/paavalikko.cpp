#include "paavalikko.h"
#include "ui_paavalikko.h"

paavalikko::paavalikko(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::paavalikko)
{
    ui->setupUi(this);
}

paavalikko::~paavalikko()
{
    delete ui;
}
