#ifndef ENGINERESTAPI_H
#define ENGINERESTAPI_H

#include <QObject>
#include <QtSql/QSqlQuery>
#include <QFileInfo>
#include <QDebug>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <QString>

class engineRestApi : public QObject
{
    Q_OBJECT
public:
    engineRestApi();
    ~engineRestApi();

    QNetworkAccessManager *loginManager;
    QNetworkAccessManager *getManager;
    QNetworkReply *reply;
    QByteArray response_data;
    QString login;

    void actions(QString id_account);
    void fiveActions(QString id_account);
    void updateActions(QString id, QString date, QString action, QString total, QString id_account, QString id_card);
    void balance(QString id_card);
    void updateBalance(QString id_account, QString newBalance);
    void customerData(QString id_account);
    void loginEngine(QString id_card, QString pinCode);
    void lockCard(QString id_card);
    void isCardLocked(QString id_card);
    void getId();

private:

public slots:
    void loginSlot(QNetworkReply *reply);
    void actionsSlot(QNetworkReply *reply);
    void fiveActionsSlot(QNetworkReply *reply);
    void updateActionsSlot(QNetworkReply *reply);
    void balanceSlot(QNetworkReply *reply);
    void updateBalanceSlot(QNetworkReply *reply);
    void customerDataSlot(QNetworkReply *reply);
    void lockCardSlot(QNetworkReply *reply);
    void isCardLockedSlot(QNetworkReply *reply);
    void idSlot(QNetworkReply *reply);

signals:
    void responseDataFromActions(QString);
    void responseDataFromBalance(QString);
    void responseDataFromCustomer(QString);
    void responseDataFromFiveActions(QString);
    void responseDataFromId(QString);
    void loginData(QString);
    void cardLockedData(QString);
};

#endif // ENGINERESTAPI_H
