#ifndef SALDO_H
#define SALDO_H

#include <QDialog>
#include <QDebug>
#include <QWidget>
#include <QString>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <QTimer>
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

    void taimerout();
    void on_pushButton_takaisin_clicked();
    void customerData();
    void customerDataSlot(QNetworkReply *reply);
    void balance();
    void balanceSlot(QNetworkReply *reply);
    void fiveActions();
    void fiveActionsSlot(QNetworkReply *reply);

private:
    Ui::saldo *ui;
    QNetworkAccessManager *getManager;
    QNetworkReply *reply;
    QByteArray response_data;
    QTimer *Timer;



};

#endif // SALDO_H
