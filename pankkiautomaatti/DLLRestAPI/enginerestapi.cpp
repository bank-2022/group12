#include "enginerestapi.h"


engineRestApi::engineRestApi()
{

}

engineRestApi::~engineRestApi()
{

}

void engineRestApi::loginEngine(QString id_card, QString pinCode)
{

    QString site_url="http://localhost:3000/card";
    QNetworkRequest request((site_url));

    QJsonObject jsonObj;
    jsonObj.insert("id_card", id_card);
    jsonObj.insert("pin", pinCode);

    loginManager = new QNetworkAccessManager(this);

    connect(loginManager, SIGNAL(finished (QNetworkReply*)), this, SLOT(loginSlot(QNetworkReply*)));

    reply = loginManager->post(request, QJsonDocument(jsonObj).toJson());
}

void engineRestApi::loginSlot(QNetworkReply *reply)
{
    response_data=reply->readAll();
    qDebug() << response_data;
}
