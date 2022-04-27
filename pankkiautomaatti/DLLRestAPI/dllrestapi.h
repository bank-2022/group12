#ifndef DLLRESTAPI_H
#define DLLRESTAPI_H


#include "DLLRestAPI_global.h"
#include "enginerestapi.h"
#include <QObject>

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
    QString a;
    QString b;
    QString c;
    QByteArray l;
    QByteArray lock;

public slots:
    void receiveBalance(QString);
    void receiveCustomer(QString);
    void receiveFiveActions(QString);
    void receiveLogin(QString);
    void receiveLockStatus(QString);

signals:
    void sendBalanceToExe(QString);
    void sendCustomerToExe(QString);
    void sendFiveActionsToExe(QString);
    void sendToExeLogin(QString);
    void sendToExeLockStatus(QString);
};

#endif // DLLRESTAPI_H
