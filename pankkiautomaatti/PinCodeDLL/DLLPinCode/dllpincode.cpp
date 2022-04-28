#include "dllpincode.h"

DLLPinCode::DLLPinCode()
{
    oPinEngineClass = new PinEngineClass(this);
}

DLLPinCode::~DLLPinCode()
{
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
}

QString DLLPinCode::returnPinCode()
{
    return pinCode;
}

void DLLPinCode::wrongPin(int attempts)
{
    oPinEngineClass->wrongPinCode(attempts);
}





