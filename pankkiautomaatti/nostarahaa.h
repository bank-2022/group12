#ifndef NOSTARAHAA_H
#define NOSTARAHAA_H

#include <QDialog>
#include <QTimer>
#include <QWidget>

#include "paavalikko.h"
#include "muusumma.h"

#include "DLLRestAPI/dllrestapi.h"
#include "DLLRestAPI/enginerestapi.h"

namespace Ui {
class nostarahaa;
}

class nostarahaa : public QDialog
{
    Q_OBJECT

public:
    explicit nostarahaa(QWidget *parent = nullptr);
    ~nostarahaa();

    void withdraw(int x, int total);

private slots:
    void LCDshow();
    void on_pushButton_takaisin1_clicked();
    void on_pushButton_3_Muusumma_clicked();
    void on_pushButton_withdraw20_clicked();
    void on_pushButton_withdraw40_clicked();
    void on_pushButton_withdraw60_clicked();
    void on_pushButton_withdraw80_clicked();
    void on_pushButton_withdraw100_clicked();
    void on_pushButton_200_clicked();
    void on_pushButton_500_clicked();

    void receiveDataFromBalance(QString);
    void receiveDataFromCustomer(QString);

private:
    Ui::nostarahaa *ui;
    DLLRestAPI *oDLLRestAPI;
    paavalikko *Pvalikko;
    QString a;
    QString b;
    QTimer *Timer;
    QTimer *LCDtimer;
    int time;
    int saldo;
    QString cardId;
    QString id_account;
};

#endif // NOSTARAHAA_H
