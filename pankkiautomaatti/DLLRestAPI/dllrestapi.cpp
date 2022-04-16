#include "dllrestapi.h"

DLLRestAPI::DLLRestAPI()
{
    oGetPinEngine = new engineRestApi;
}

DLLRestAPI::~DLLRestAPI()
{
    delete oGetPinEngine;
}

QString DLLRestAPI::getPin()
{

}
