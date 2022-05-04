#include "engineclass.h"
#include <QIODevice>
#include <QSerialPortInfo>

EngineClass::EngineClass()
{
    serial = new QSerialPort(this);
    info = new QSerialPortInfo();
    serial->setPortName("COM5");
    serial->setBaudRate(QSerialPort::Baud9600);
    serial->setDataBits(QSerialPort::Data8);
    serial->setParity(QSerialPort::NoParity);
    serial->setFlowControl(QSerialPort::HardwareControl);
    serial->setStopBits(QSerialPort::OneStop);
    serial->open(QIODevice::ReadOnly);
    QObject::connect(serial, SIGNAL(readyRead()), this, SLOT(handleSignal()));
    info->availablePorts();
    info->standardBaudRates();
    info->portName();
}

void EngineClass::handleSignal()
{
    //Lukee RFID-kortinlukijan avulla RFID-kortin ID numeron
    QString cardID = serial->readAll();

    //Muokkaa luettua cardID:tä ja lähettää muokatun cardID:n eteenpäin
    cardID = cardID.simplified();
    cardID.replace("-","");
    cardID.replace(">","");
    cardID.replace(" ","");
    emit handle(cardID);
}

