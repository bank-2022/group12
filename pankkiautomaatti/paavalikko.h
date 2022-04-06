#ifndef PAAVALIKKO_H
#define PAAVALIKKO_H
#include "saldo.h"
#include <QDialog>

namespace Ui {
class paavalikko;
}

class paavalikko : public QDialog
{
    Q_OBJECT

public:
    explicit paavalikko(QWidget *parent = nullptr);
    ~paavalikko();

private slots:
    void on_pushButton_showtotal_clicked();

    void on_pushButton_withdraw_clicked();

private:
    Ui::paavalikko *ui;
    saldo *Psaldo;
};

#endif // PAAVALIKKO_H
