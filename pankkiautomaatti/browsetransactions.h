#ifndef BROWSETRANSACTIONS_H
#define BROWSETRANSACTIONS_H
#include <QDialog>
#include "paavalikko.h"
#include <QTimer>
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
    //void taimerout();
    void on_pushButton_takaisin_transactions_clicked();

private:
    Ui::browseTransactions *ui;
    QTimer *LCDtimer;
    int time;
    QTimer *Timer;
};
#endif // BROWSETRANSACTIONS_H
