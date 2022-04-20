#include "dllserialport.h"

DLLSerialPort::DLLSerialPort()
{
    pEngineClass = new EngineClass;
    QObject::connect(pEngineClass, SIGNAL(handled(QString)), this, SLOT(recieveSignal(QString)));
}

DLLSerialPort::~DLLSerialPort()
{
    delete pEngineClass;
    pEngineClass = nullptr;
}

void DLLSerialPort::recieveSignal(QString ID)
{
     emit passID(ID);
}

