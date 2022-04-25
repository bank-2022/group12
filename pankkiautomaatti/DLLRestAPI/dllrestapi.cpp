#include "dllrestapi.h"


DLLRestAPI::DLLRestAPI(QObject * parent) : QObject(parent)
{
    oEngineRestApi = new engineRestApi;
    connect(oEngineRestApi, SIGNAL(responseData(QString)), this, SLOT(recieveBalance(QString)));
}

DLLRestAPI::~DLLRestAPI()
{
    delete oEngineRestApi;
    oEngineRestApi=nullptr;
}

void DLLRestAPI::interfaceLogin(QString id_card, QString pinCode)
{
    oEngineRestApi->loginEngine(id_card, pinCode);
    loggedIn=oEngineRestApi->getLogin();
}

void DLLRestAPI::interfaceCustomerData(QString id_account)
{
    oEngineRestApi->customerData(id_account);
}

void DLLRestAPI::interfaceBalance(QString id_card)
{
    oEngineRestApi->balance(id_card);
    balanceGot=oEngineRestApi->getGetBalance();
}

void DLLRestAPI::interfaceFiveActions(QString id_account)
{
//    oEngineRestApi->fiveActions(id_account);
}

QString DLLRestAPI::returnLogin()
{
    return loggedIn;
}

QString DLLRestAPI::returnBalance()
{
    return balanceGot;
    qDebug()<< "balanceGot:" + balanceGot;
}

void DLLRestAPI::recieveBalance(QString a)
{
    emit sendToExe(a);
}

