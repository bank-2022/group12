#ifndef ENGINERESTAPI_H
#define ENGINERESTAPI_H

#include <QObject>
#include <QtSql/QSqlQuery>
#include <QFileInfo>
#include <QDebug>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>

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
    QString getBalance;


    const QString &getLogin() const;
    void setLogin(const QString &newLogin);

    const QString &getGetBalance() const;
    void setGetBalance(const QString &newGetBalance);

private:

public slots:
    void loginSlot(QNetworkReply *reply);
    void fiveActionsSlot(QNetworkReply *reply);
    void balanceSlot(QNetworkReply *reply);
    void customerDataSlot(QNetworkReply *reply);

signals:
    void responseData(QString);

};

#endif // ENGINERESTAPI_H
