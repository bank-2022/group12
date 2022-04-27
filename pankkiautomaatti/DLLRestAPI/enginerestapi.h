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
    void loginEngine(QString id_card, QString pinCode);
    QNetworkAccessManager *loginManager;
    QNetworkAccessManager *getManager;
    QNetworkReply *reply;
    QByteArray response_data;
    void fiveActions(QString id_account);
    void balance(QString id_card);
    void customerData(QString id_account);
    QString login;
    void lockCard(QString id_card);
    void isCardLocked(QString id_card);

private:

public slots:
    void loginSlot(QNetworkReply *reply);
    void fiveActionsSlot(QNetworkReply *reply);
    void balanceSlot(QNetworkReply *reply);
    void customerDataSlot(QNetworkReply *reply);
    void lockCardSlot(QNetworkReply *reply);
    void isCardLockedSlot(QNetworkReply *reply);

signals:
    void responseDataFromBalance(QString);
    void responseDataFromCustomer(QString);
    void responseDataFromFiveActions(QString);
    void loginData(QString);
    void cardLockedData(QString);
};

#endif // ENGINERESTAPI_H
