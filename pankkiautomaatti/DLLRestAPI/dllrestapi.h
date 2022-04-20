#ifndef DLLRESTAPI_H
#define DLLRESTAPI_H


#include "DLLRestAPI_global.h"
#include "enginerestapi.h"


class DLLRESTAPI_EXPORT DLLRestAPI
{
public:
    DLLRestAPI();
    ~DLLRestAPI();
    void interfaceLogin(QString id_card, QString pinCode);
    engineRestApi *oEngineRestApi;

private:


public slots:

};

#endif // DLLRESTAPI_H
