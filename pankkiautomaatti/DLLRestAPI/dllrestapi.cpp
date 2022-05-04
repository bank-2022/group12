#include "dllrestapi.h"


DLLRestAPI::DLLRestAPI(QObject * parent) : QObject(parent)
{
    oEngineRestApi = new engineRestApi;

    connect(oEngineRestApi, SIGNAL(responseDataFromBalance(QString)), this, SLOT(receiveBalance(QString)));
    connect(oEngineRestApi, SIGNAL(responseDataFromCustomer(QString)), this, SLOT(receiveCustomer(QString)));
    connect(oEngineRestApi, SIGNAL(responseDataFromFiveActions(QString)), this, SLOT(receiveFiveActions(QString)));
    connect(oEngineRestApi, SIGNAL(responseDataFromActions(QString)), this, SLOT(receiveActions(QString)));
    connect(oEngineRestApi, SIGNAL(responseDataFromId(QString)), this, SLOT(receiveId(QString)));
    connect(oEngineRestApi, SIGNAL(responseDataFromAccountId(QString)), this, SLOT(receiveAccountId(QString)));
    connect(oEngineRestApi, SIGNAL(loginData(QString)), this, SLOT(receiveLogin(QString)));
    connect(oEngineRestApi, SIGNAL(cardLockedData(QString)), this, SLOT(receiveLockStatus(QString)));
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

void DLLRestAPI::interfaceCustomerData(QString id_account)
{
    oEngineRestApi->customerData(id_account);
}

void DLLRestAPI::interfaceBalance(QString id_card)
{
    oEngineRestApi->balance(id_card);
}

void DLLRestAPI::interfaceUpdateBalance(QString id_account, QString newBalance)
{
    oEngineRestApi->updateBalance(id_account,newBalance);
}

void DLLRestAPI::interfaceFiveActions(QString id_account)
{
    oEngineRestApi->fiveActions(id_account);
}

void DLLRestAPI::interfaceActions(QString id_account)
{
    oEngineRestApi->actions(id_account);
}

void DLLRestAPI::interfaceUpdateActions(QString id, QString date, QString action, QString total, QString id_account, QString id_card)
{
    oEngineRestApi->updateActions(id,date,action,total,id_account,id_card);
}

void DLLRestAPI::interfaceLockCard(QString id_card)
{
    oEngineRestApi->lockCard(id_card);
}

void DLLRestAPI::interfaceIsCardLocked(QString id_card)
{
    oEngineRestApi->isCardLocked(id_card);
}

void DLLRestAPI::interfaceId()
{
    oEngineRestApi->getId();
}

void DLLRestAPI::interfaceAccountId(QString id_card)
{
    oEngineRestApi->getAccountId(id_card);
}

void DLLRestAPI::receiveLogin(QString l)
{
    emit sendToExeLogin(l);
}

void DLLRestAPI::receiveLockStatus(QString lock)
{
    emit sendToExeLockStatus(lock);
}

void DLLRestAPI::receiveBalance(QString a)
{
    emit sendBalanceToExe(a);
}

void DLLRestAPI::receiveCustomer(QString b)
{
    emit sendCustomerToExe(b);
}

void DLLRestAPI::receiveFiveActions(QString c)
{
    emit sendFiveActionsToExe(c);
}

void DLLRestAPI::receiveActions(QString d)
{
    emit sendActionsToExe(d);
}

void DLLRestAPI::receiveId(QString f)
{
    emit sendIdToExe(f);
}

void DLLRestAPI::receiveAccountId(QString g)
{
    qDebug() << "sendAccountId" << g;
    emit sendAccountIdToExe(g);
}
