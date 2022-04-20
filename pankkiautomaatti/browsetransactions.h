#ifndef BROWSETRANSACTIONS_H
#define BROWSETRANSACTIONS_H

#include <QDialog>

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
    void on_pushButton_takaisin_transactions_clicked();

private:
    Ui::browseTransactions *ui;
};

#endif // BROWSETRANSACTIONS_H
