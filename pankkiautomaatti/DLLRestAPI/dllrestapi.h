#ifndef DLLRESTAPI_H
#define DLLRESTAPI_H


#include "DLLRestAPI_global.h"
#include "enginerestapi.h"


class DLLRESTAPI_EXPORT DLLRestAPI
{
public:
    DLLRestAPI();
    ~DLLRestAPI();
    QString getPin();
private:
    engineRestApi *oGetPinEngine;
};

#endif // DLLRESTAPI_H
