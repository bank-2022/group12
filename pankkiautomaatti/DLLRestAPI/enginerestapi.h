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
    QNetworkReply *reply;
    QByteArray response_data;

private:

public slots:
    void loginSlot(QNetworkReply *reply);

};




#endif // ENGINERESTAPI_H
