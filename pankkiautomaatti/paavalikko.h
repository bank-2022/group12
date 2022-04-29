#ifndef PAAVALIKKO_H
#define PAAVALIKKO_H

#include <QDialog>
#include <QProcess>
#include <QDebug>
#include <QTimer>
#include <QDateTime>

#include "DLLRestAPI/dllrestapi.h"
namespace Ui {
class paavalikko;
}

class paavalikko : public QDialog
{
    Q_OBJECT

public:
    explicit paavalikko(QWidget *parent = nullptr);
    ~paavalikko();

public slots:
    void showtime();
    void LCDshow();

private slots:
    void on_pushButton_showtotal_clicked();
    void on_pushButton_withdraw_clicked();
    void on_pushButton_logout_clicked();
    void on_pushButton_actions_clicked();
    void receiveDataFromCustomer(QString);

private:
    Ui::paavalikko *ui;
    DLLRestAPI *oDLLRestAPI;
    QTimer *timer;
    QTimer *showTime;
    QTimer *LCDtimer;
    int time;
    QString b;
};

#endif // PAAVALIKKO_H
