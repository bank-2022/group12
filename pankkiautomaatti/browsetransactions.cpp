#include "browsetransactions.h"
#include "ui_browsetransactions.h"

browseTransactions::browseTransactions(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::browseTransactions)
{
    ui->setupUi(this);
}

browseTransactions::~browseTransactions()
{
    delete ui;
}

void browseTransactions::on_pushButton_takaisin_transactions_clicked()
{
    this->close();
}

