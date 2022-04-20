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
}

