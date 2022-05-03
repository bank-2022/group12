#include "dllserialport.h"

DLLSerialPort::DLLSerialPort()
{
    pEngineClass = new EngineClass;
    QObject::connect(pEngineClass, &EngineClass::sendString, this, &DLLSerialPort::receiveValue);

DLLSerialPort::~DLLSerialPort()
{
    delete pEngineClass;
    pEngineClass = NULL;
}

void DLLSerialPort::receiveValue(QString returnString)
{
    emit returnValue(returnString);
}

void DLLSerialPort::interfaceFuctionOpenConnection()
{
    pEngineClass->openConnection();
}
