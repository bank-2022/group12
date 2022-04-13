#include "dllpincode.h"

DLLPinCode::DLLPinCode()
{
    qDebug() << "Pincode luotu";
    oPinEngineClass = new PinEngineClass;
    //QObject::connect(oPinEngineClass, &PinEngineClass::emitPin, this, &DLLPinCode::receivePinFromEngine);

}

DLLPinCode::~DLLPinCode()
{
    qDebug() << "Pincode tuhottu";
    delete oPinEngineClass;
    oPinEngineClass = nullptr;

}

void DLLPinCode::startupPin()
{
   // oPinEngineClass->show();
    oPinEngineClass->exec();
    pinCode=oPinEngineClass->getPin();
}

void DLLPinCode::closePin()
{
    oPinEngineClass->close();
}

QString DLLPinCode::returnPinCode()
{
    return pinCode;
}





