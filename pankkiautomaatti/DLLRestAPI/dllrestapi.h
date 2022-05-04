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
    void interfaceUpdateBalance(QString id_card, QString newBalance);
    void interfaceFiveActions(QString id_account);
    void interfaceActions(QString id_account);
    void interfaceUpdateActions(QString id, QString date, QString action, QString total, QString id_account, QString id_card);
    void interfaceLockCard(QString id_card);
    void interfaceIsCardLocked(QString id_card);
    void interfaceId();
    void interfaceAccountId(QString);

private:
    QString a;
    QString b;
    QString c;
    QString d;
    QByteArray l;
    QByteArray lock;

public slots:
    void receiveBalance(QString);
    void receiveCustomer(QString);
    void receiveFiveActions(QString);
    void receiveActions(QString);
    void receiveLogin(QString);
    void receiveLockStatus(QString);
    void receiveId(QString);
    void receiveAccountId(QString);

signals:
    void sendBalanceToExe(QString);
    void sendCustomerToExe(QString);
    void sendFiveActionsToExe(QString);
    void sendActionsToExe(QString);
    void sendIdToExe(QString);
    void sendToExeLogin(QString);
    void sendToExeLockStatus(QString);
    void sendAccountIdToExe(QString);
};

#endif // DLLRESTAPI_H
