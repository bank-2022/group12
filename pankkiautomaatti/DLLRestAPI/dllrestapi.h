#ifndef DLLRESTAPI_H
#define DLLRESTAPI_H


#include "DLLRestAPI_global.h"
#include "enginerestapi.h"


class DLLRESTAPI_EXPORT DLLRestAPI : public QObject
{
    Q_OBJECT

public:
    DLLRestAPI(QObject * parent = nullptr);
    ~DLLRestAPI();
    void interfaceLogin(QString id_card, QString pinCode);
    engineRestApi *oEngineRestApi;
    void interfaceCustomerData(QString id_account);
    void interfaceBalance(QString id_card);
    void interfaceFiveActions(QString id_account);
    QString returnLogin();
    QString loggedIn;

private:
    QByteArray l;


public slots:
    void receiveLogin(QString);

signals:
    void sendToExeLogin(QString);

};

#endif // DLLRESTAPI_H
