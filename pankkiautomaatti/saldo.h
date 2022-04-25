#ifndef SALDO_H
#define SALDO_H

#include <QDialog>
#include <QDebug>
#include <QWidget>
#include <QString>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include "DLLRestAPI/dllrestapi.h"
#include "DLLRestAPI/enginerestapi.h"

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
    void on_pushButton_takaisin_clicked();
    void balance();
    void recieveData(QString);
//    QString recieveData();
//    void customerData();
//    void customerDataSlot(QNetworkReply *reply);
//    void balance();
//    void balanceSlot(QNetworkReply *reply);
//    void fiveActions();
//    void fiveActionsSlot(QNetworkReply *reply);

private:
    Ui::saldo *ui;
    DLLRestAPI *oDLLRestAPI;
    QString a;
//    QNetworkAccessManager *getManager;
//    QNetworkReply *reply;
//    QByteArray response_data;



};

#endif // SALDO_H
