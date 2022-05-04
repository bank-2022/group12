#ifndef SALDO_H
#define SALDO_H

#include <QDialog>
#include "DLLRestAPI/dllrestapi.h"
#include "DLLRestAPI/enginerestapi.h"
#include "paavalikko.h"

namespace Ui {
class saldo;
}

class saldo : public QDialog
{
    Q_OBJECT

public:
    explicit saldo(QWidget *parent = nullptr);
    ~saldo();


private slots:
    void LCDshow();
    void on_pushButton_takaisin_clicked();
    void receiveDataFromBalance(QString);
    void receiveDataFromCustomer(QString);
    void receiveDataFromFiveActions(QString);

private:
    Ui::saldo *ui;
    DLLRestAPI *oDLLRestAPI;
    QString a;
    QString b;
    QString c;
    QTimer *Timer;
    int time;
    QTimer *LCDtimer;


};

#endif // SALDO_H
