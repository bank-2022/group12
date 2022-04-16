#ifndef PAAVALIKKO_H
#define PAAVALIKKO_H
#include "saldo.h"
#include <QDialog>
#include <nostarahaa.h>
#include <browsetransactions.h>
#include <QProcess>
namespace Ui {
class paavalikko;
}

class paavalikko : public QDialog
{
    Q_OBJECT

public:
    explicit paavalikko(QWidget *parent = nullptr);
    ~paavalikko();
    void kello();


private slots:
    void on_pushButton_showtotal_clicked();

    void on_pushButton_withdraw_clicked();

    void on_pushButton_logout_clicked();

    void on_pushButton_actions_clicked();

    //void on_dateTimeEdit_dateTimeChanged(const QDateTime &dateTime);

private:
    Ui::paavalikko *ui;
    saldo *Psaldo;
    nostarahaa *withdraw;
    browseTransactions *Transactions;



};

#endif // PAAVALIKKO_H
