#include "saldo.h"
#include "ui_saldo.h"
#include "paavalikko.h" 



saldo::saldo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::saldo)
{
    ui->setupUi(this);
    oDLLRestAPI = new DLLRestAPI;
    oDLLRestAPI->interfaceBalance("1111");
//    engineRestApi *eRestApi = new engineRestApi;

    connect(oDLLRestAPI, SIGNAL(sendToExe(QString)), this, SLOT(recieveData(QString)));


}
saldo::~saldo()
{
    delete ui;

}

void saldo::on_pushButton_takaisin_clicked()
{
    this->close();
}

void saldo::balance()
{

//    eRestApi->balance("1111");

}

void saldo::recieveData(QString a)
{
    qDebug() << "Saldo" + a;
    ui->lineEdit_balance->setText(a);
}

////Asiakkaan tiedot ------------------------------------------------------

//void saldo::customerData()
//{
//    QString site_url="http://localhost:3000/customer/2";
//    QNetworkRequest request((site_url));
//    getManager = new QNetworkAccessManager(this);
//    connect(getManager, SIGNAL(finished (QNetworkReply*)), this, SLOT(customerDataSlot(QNetworkReply*)));
//    reply = getManager->get(request);
//}

//void saldo::customerDataSlot(QNetworkReply *reply)
//{
//    response_data=reply->readAll();
//    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
//    QJsonArray json_array = json_doc.array();
//    QString customer;
//    foreach (const QJsonValue &value, json_array) {
//    QJsonObject json_obj = value.toObject();
//    customer+=(json_obj["name"].toString())+"\n"+json_obj["adress"].toString()+"\n" + json_obj["phone_number"].toString()+"\r";

//}
//    ui->textEdit_customer->setText(customer);
//    reply->deleteLater();
//    getManager->deleteLater();
//}

////Asiakkaan saldo ------------------------------------------------------


//void saldo::balance()
//{
//    QString site_url="http://localhost:3000/balance/"+id_card;
//    QNetworkRequest request((site_url));
//    getManager = new QNetworkAccessManager(this);
//    connect(getManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(balanceSlot(QNetworkReply*)));
//    reply = getManager->get(request);
//}

//void saldo::balanceSlot(QNetworkReply *reply)
//{
//    response_data=reply->readAll();
//    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
//    QJsonArray json_array = json_doc.array();
//    QString balance;
//    foreach (const QJsonValue &value, json_array) {
//    QJsonObject json_obj = value.toObject();
//    balance+=QString::number(json_obj["balance"].toInt())+"€ \r";

//}
//    qDebug() << balance;
//    ui->lineEdit_balance->setText(balance);
//    reply->deleteLater();
//    getManager->deleteLater();
//}

////Asiakkaan tilitapahtumat ------------------------------------------------------

//void saldo::fiveActions()
//{
//    QString site_url="http://localhost:3000/getfive/2";
//    QNetworkRequest request((site_url));
//    getManager = new QNetworkAccessManager(this);
//    connect(getManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(fiveActionsSlot(QNetworkReply*)));
//    reply = getManager->get(request);
//}

//void saldo::fiveActionsSlot(QNetworkReply *reply)
//{
//    response_data=reply->readAll();
//    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
//    QJsonArray json_array = json_doc.array();
//    QString fiveActions;
//    foreach (const QJsonValue &value, json_array) {
//    QJsonObject json_obj = value.toObject();
//    fiveActions+=json_obj["date"].toString()+"   "+json_obj["action"].toString()+"   "+QString::number(json_obj["total"].toInt())+"\r";

//}
//    qDebug() << fiveActions;
//    ui->textEdit_actions->setText(fiveActions);
//    reply->deleteLater();
//    getManager->deleteLater();
//}
