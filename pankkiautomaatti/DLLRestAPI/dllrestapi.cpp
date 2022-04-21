#include "dllrestapi.h"

DLLRestAPI::DLLRestAPI()
{
    oEngineRestApi = new engineRestApi;
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
}

void DLLRestAPI::interfaceFiveActions(QString id_account)
{
    oEngineRestApi->fiveActions(id_account);
}

QString DLLRestAPI::returnLogin()
{
    return loggedIn;
}

