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
    void interfaceCustomerData(QString id_account);
    void interfaceBalance(QString id_card);
    void interfaceFiveActions(QString id_account);
    QString returnLogin();
    QString loggedIn;

private:


public slots:

};

#endif // DLLRESTAPI_H
