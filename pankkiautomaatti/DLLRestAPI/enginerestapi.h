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
};




#endif // ENGINERESTAPI_H
