#include "engineclass.h"
#include <QIODevice>

EngineClass::EngineClass()
{
    serial = new QSerialPort(this);
    serial->setPortName("COM11");
    serial->setBaudRate(QSerialPort::Baud9600);
    serial->setDataBits(QSerialPort::Data8);
    serial->setParity(QSerialPort::NoParity);
    serial->setFlowControl(QSerialPort::HardwareControl);
    serial->setStopBits(QSerialPort::OneStop);
    serial->open(QIODevice::ReadOnly);
    QObject::connect(serial, SIGNAL(readyRead()), this, SLOT(handleSignal()));
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

