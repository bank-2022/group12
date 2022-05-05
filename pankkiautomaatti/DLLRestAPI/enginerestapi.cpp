#include "enginerestapi.h"


engineRestApi::engineRestApi()
{

}

engineRestApi::~engineRestApi()
{

}

//Kirjautuminen ------------------------------------------------------

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
    QString loginFirst = QString(response_data);
    emit loginData(loginFirst);
}

//Kortin lukitus ------------------------------------------------------

void engineRestApi::lockCard(QString id_card)
{
    QJsonObject jsonObj;
    jsonObj.insert("locked","1");

    QString site_url="http://localhost:3000/locked/"+ id_card;
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    getManager = new QNetworkAccessManager(this);
    connect(getManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(lockCardSlot(QNetworkReply*)));
    reply = getManager->put(request, QJsonDocument(jsonObj).toJson());
}

void engineRestApi::lockCardSlot(QNetworkReply *reply)
{
    response_data=reply->readAll();
    reply->deleteLater();
    getManager->deleteLater();
}

//Kortin lukituksen tarkastus ------------------------------------------------------

void engineRestApi::isCardLocked(QString id_card)
{
    QString site_url="http://localhost:3000/locked/"+ id_card;
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
    emit cardLockedData(cardLocked);
    reply->deleteLater();
    getManager->deleteLater();
}


//Asiakkaan tiedot ------------------------------------------------------

void engineRestApi::customerData(QString id_account)
{
    QString site_url="http://localhost:3000/customer/"+id_account;
    QNetworkRequest request((site_url));
    getManager = new QNetworkAccessManager(this);
    connect(getManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(customerDataSlot(QNetworkReply*)));
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


    emit responseDataFromCustomer(customer);
}
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
    balance+=QString::number(json_obj["balance"].toInt());

    emit responseDataFromBalance(balance);

}
    reply->deleteLater();
    getManager->deleteLater();
}

//Asiakkaan viisi viimeistä tilitapahtumaa ------------------------------------------------------

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
    fiveActions+=json_obj["date_format(date, '%d.%m.%y %T')"].toString()+"   "+json_obj["action"].toString()+"   "+QString::number(json_obj["total"].toInt())+"\r";

    emit responseDataFromFiveActions(fiveActions);
}
    reply->deleteLater();
    getManager->deleteLater();
}

//Asiakkaan tilitapahtumat ------------------------------------------------------

void engineRestApi::actions(QString id_account)
{
    QString site_url="http://localhost:3000/actions/"+id_account;
    QNetworkRequest request((site_url));
    getManager = new QNetworkAccessManager(this);
    connect(getManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(actionsSlot(QNetworkReply*)));
    reply = getManager->get(request);
}

void engineRestApi::actionsSlot(QNetworkReply *reply)
{
    response_data=reply->readAll();
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();
    QString actions;
    foreach (const QJsonValue &value, json_array) {
    QJsonObject json_obj = value.toObject();
    actions+=json_obj["date_format(date, '%d.%m.%y %T')"].toString()+"   "+json_obj["action"].toString()+"   "+QString::number(json_obj["total"].toInt())+"\r";

    emit responseDataFromActions(actions);
}
    reply->deleteLater();
    getManager->deleteLater();
}

//Saldon päivitys ------------------------------------------------------

void engineRestApi::updateBalance(QString id_account, QString newBalance)
{
    QJsonObject jsonObj;
    jsonObj.insert("balance",newBalance);

    QString site_url="http://localhost:3000/balance/"+ id_account;
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    getManager = new QNetworkAccessManager(this);
    connect(getManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(updateBalanceSlot(QNetworkReply*)));
    reply = getManager->put(request, QJsonDocument(jsonObj).toJson());
}

void engineRestApi::updateBalanceSlot(QNetworkReply *reply)
{
    response_data=reply->readAll();
    reply->deleteLater();
    getManager->deleteLater();
}

//Tilitapahtumien päivitys ------------------------------------------------------

void engineRestApi::updateActions(QString id, QString date, QString action, QString total, QString id_account, QString id_card)
{
    QJsonObject jsonObj;
    jsonObj.insert("id_actions",id);
    jsonObj.insert("date",date);
    jsonObj.insert("action",action);
    jsonObj.insert("total",total);
    jsonObj.insert("id_account",id_account);
    jsonObj.insert("id_card",id_card);

    qDebug()<< "id actions" << id;
    qDebug()<< "date" << date;
    qDebug()<< "action" << action;
    qDebug()<< "total" << total;
    qDebug()<< "id account" << id_account;
    qDebug()<< "id card" << id_card;

    QString site_url="http://localhost:3000/actions/";
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    getManager = new QNetworkAccessManager(this);
    connect(getManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(updateActionsSlot(QNetworkReply*)));
    reply = getManager->post(request, QJsonDocument(jsonObj).toJson());
}

void engineRestApi::updateActionsSlot(QNetworkReply *reply)
{
    response_data=reply->readAll();
    qDebug() << response_data;
    reply->deleteLater();
    getManager->deleteLater();
}

void engineRestApi::getId()
{
    QString site_url="http://localhost:3000/actions/";
    QNetworkRequest request((site_url));
    getManager = new QNetworkAccessManager(this);
    connect(getManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(idSlot(QNetworkReply*)));
    reply = getManager->get(request);

}

void engineRestApi::idSlot(QNetworkReply *reply)
{
    response_data=reply->readAll();
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();
    QString id;
    foreach (const QJsonValue &value, json_array) {
    QJsonObject json_obj = value.toObject();
    id+=QString::number(json_obj["id_actions"].toInt());

    emit responseDataFromId(id);

}
    reply->deleteLater();
    getManager->deleteLater();
}

//Account id ---------------------------------------------------------------

void engineRestApi::getAccountId(QString id_card)
{
    QString site_url="http://localhost:3000/card/"+id_card;
    QNetworkRequest request((site_url));
    getManager = new QNetworkAccessManager(this);
    connect(getManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(accountIdSlot(QNetworkReply*)));
    reply = getManager->get(request);
}

void engineRestApi::accountIdSlot(QNetworkReply *reply)
{
    response_data=reply->readAll();
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();
    QString accountId;
    foreach (const QJsonValue &value, json_array) {
    QJsonObject json_obj = value.toObject();
    accountId+=QString::number(json_obj["id_account"].toInt());
    emit responseDataFromAccountId(accountId);

}
    reply->deleteLater();
    getManager->deleteLater();
}
