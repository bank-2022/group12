#include "enginerestapi.h"


engineRestApi::engineRestApi()
{

}

engineRestApi::~engineRestApi()
{

}

void engineRestApi::loginEngine(QString id_card, QString pinCode)
{

    QString site_url="http://localhost:3000/login";
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    QJsonObject jsonObj;
    jsonObj.insert("id_card", id_card);
    jsonObj.insert("pin", pinCode);

    loginManager = new QNetworkAccessManager(this);

    connect(loginManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(loginSlot(QNetworkReply*)));

    reply = loginManager->post(request, QJsonDocument(jsonObj).toJson());
}

void engineRestApi::loginSlot(QNetworkReply *reply)
{
    response_data=reply->readAll();

    qDebug() << response_data << "dll";
    QString loginFirst = QString(response_data);
    emit loginData(loginFirst);
}


//Asiakkaan tiedot ------------------------------------------------------

void engineRestApi::customerData(QString id_account)
{
    QString site_url="http://localhost:3000/customer/"+id_account;
    QNetworkRequest request((site_url));
    getManager = new QNetworkAccessManager(this);
    connect(getManager, SIGNAL(finished (QNetworkReply*)), this, SLOT(customerDataSlot(QNetworkReply*)));
    reply = getManager->get(request);
}

void engineRestApi::customerDataSlot(QNetworkReply *reply)
{
    response_data=reply->readAll();
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();
    QString customer;
    foreach (const QJsonValue &value, json_array) {
    QJsonObject json_obj = value.toObject();
    customer+=(json_obj["name"].toString())+"\n"+json_obj["adress"].toString()+"\n" + json_obj["phone_number"].toString()+"\r";

}
    qDebug() << customer;
    reply->deleteLater();
    getManager->deleteLater();
}

//Asiakkaan saldo ------------------------------------------------------


void engineRestApi::balance(QString id_card)
{
    QString site_url="http://localhost:3000/balance/"+ id_card;
    QNetworkRequest request((site_url));
    getManager = new QNetworkAccessManager(this);
    connect(getManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(balanceSlot(QNetworkReply*)));
    reply = getManager->get(request);
}

void engineRestApi::balanceSlot(QNetworkReply *reply)
{
    response_data=reply->readAll();
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();
    QString balance;
    foreach (const QJsonValue &value, json_array) {
    QJsonObject json_obj = value.toObject();
    balance+=QString::number(json_obj["balance"].toInt())+"\r";

}
    qDebug() << balance;
    reply->deleteLater();
    getManager->deleteLater();
}

//Asiakkaan tilitapahtumat ------------------------------------------------------

void engineRestApi::fiveActions(QString id_account)
{
    QString site_url="http://localhost:3000/getfive/"+id_account;
    QNetworkRequest request((site_url));
    getManager = new QNetworkAccessManager(this);
    connect(getManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(fiveActionsSlot(QNetworkReply*)));
    reply = getManager->get(request);
}

void engineRestApi::fiveActionsSlot(QNetworkReply *reply)
{
    response_data=reply->readAll();
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();
    QString fiveActions;
    foreach (const QJsonValue &value, json_array) {
    QJsonObject json_obj = value.toObject();
    fiveActions+=json_obj["date"].toString()+"   "+json_obj["action"].toString()+"   "+QString::number(json_obj["total"].toInt())+"\r";

}
    qDebug() << fiveActions;
    reply->deleteLater();
    getManager->deleteLater();
}

void engineRestApi::lockCard(QString id_card)
{
    QJsonObject jsonObj;
    jsonObj.insert("locked","1");

    QString site_url="http://localhost:3000/locked/"+ id_card;  //Onko oikein?
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    getManager = new QNetworkAccessManager(this);
    connect(getManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(lockCardSlot(QNetworkReply*)));
    reply = getManager->put(request, QJsonDocument(jsonObj).toJson());
}

void engineRestApi::lockCardSlot(QNetworkReply *reply)
{
    response_data=reply->readAll();
    qDebug() << response_data;
    reply->deleteLater();
    getManager->deleteLater();
}

void engineRestApi::isCardLocked(QString id_card)
{
    QString site_url="http://localhost:3000/locked/"+ id_card;  //Onko oikein?
    QNetworkRequest request((site_url));
    getManager = new QNetworkAccessManager(this);
    connect(getManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(isCardLockedSlot(QNetworkReply*)));
    reply = getManager->get(request);
}

void engineRestApi::isCardLockedSlot(QNetworkReply *reply)
{
    response_data=reply->readAll();
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();
    QString lockStatus;
    foreach (const QJsonValue &value, json_array) {
    QJsonObject json_obj = value.toObject();
    lockStatus+=QString::number(json_obj["locked"].toInt());

}
    QString cardLocked = QString(lockStatus);
    qDebug() << cardLocked << "isCardLockedSlot";
    emit cardLockedData(cardLocked);
    reply->deleteLater();
    getManager->deleteLater();
}
