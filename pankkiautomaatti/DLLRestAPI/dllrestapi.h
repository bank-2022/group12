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
    void interfaceLockCard(QString id_card);
    void interfaceIsCardLocked(QString id_card);

private:
    QByteArray l;
    QByteArray lock;


public slots:
    void receiveLogin(QString);
    void receiveLockStatus(QString);

signals:
    void sendToExeLogin(QString);
    void sendToExeLockStatus(QString);

};

#endif // DLLRESTAPI_H
