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
    void getPinEngine (QNetworkReply *reply);
    QNetworkAccessManager *getManager;
    QNetworkReply *reply;
    QByteArray response_data;
private:

public slots:

};




#endif // ENGINERESTAPI_H
