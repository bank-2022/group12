#include "dllserialport.h"

DLLSerialPort::DLLSerialPort()
{
    pEngineClass = new EngineClass;
    QObject::connect(pEngineClass, SIGNAL(handle(QString)), this, SLOT(recieveSignal(QString)));
}

DLLSerialPort::~DLLSerialPort()
{
    delete pEngineClass;
}

void DLLSerialPort::recieveSignal(QString ID)
{
     emit passID(ID);
}

