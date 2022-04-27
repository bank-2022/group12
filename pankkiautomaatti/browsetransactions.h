#ifndef BROWSETRANSACTIONS_H
#define BROWSETRANSACTIONS_H

#include <QDialog>
#include <QTimer>

#include "DLLRestAPI/dllrestapi.h"
#include "DLLRestAPI/enginerestapi.h"

namespace Ui {
class browseTransactions;
}

class browseTransactions : public QDialog
{
    Q_OBJECT

public:
    explicit browseTransactions(QWidget *parent = nullptr);
    ~browseTransactions();

private slots:
    void LCDshow();
    void on_pushButton_takaisin_transactions_clicked();
    void receiveDataFromBalance(QString);
    void receiveDataFromCustomer(QString);

private:
    Ui::browseTransactions *ui;
    DLLRestAPI *oDLLRestAPI;
    QString a;
    QString b;
    QTimer *LCDtimer;
    int time;
    QTimer *Timer;
};

#endif // BROWSETRANSACTIONS_H
