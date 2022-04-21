#include "dllpincode.h"



DLLPinCode::DLLPinCode()
{
    qDebug() << "Pincode luotu";
    oPinEngineClass = new PinEngineClass(this);

}

DLLPinCode::~DLLPinCode()
{
    qDebug() << "Pincode tuhottu";
    delete oPinEngineClass;
    oPinEngineClass = nullptr;

}

void DLLPinCode::startupPin()
{

    oPinEngineClass->exec();
    pinCode=oPinEngineClass->getPin();
}

void DLLPinCode::closePin()
{
    oPinEngineClass->closePinObject();
    this->close();
    qDebug() << "closepin";
}

QString DLLPinCode::returnPinCode()
{
    return pinCode;
}

void DLLPinCode::wrongPin(int attempts)
{
    oPinEngineClass->wrongPinCode(attempts);
}






