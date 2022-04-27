#include "engineclass.h"
#include <QIODevice>
#include <QSerialPortInfo>

EngineClass::EngineClass()
{
    serial = new QSerialPort(this);
    info = new QSerialPortInfo();
    serial->setPortName("COM4");
    serial->setBaudRate(QSerialPort::Baud9600);
    serial->setDataBits(QSerialPort::Data8);
    serial->setParity(QSerialPort::NoParity);
    serial->setFlowControl(QSerialPort::NoFlowControl);
    serial->setStopBits(QSerialPort::OneStop);
//    serial->open(QIODevice::ReadOnly);
    QObject::connect(serial, SIGNAL(readyRead()), this, SLOT(handleSignal()));
    qDebug()<< "ENGINE: " ;
    info->availablePorts();
    info->standardBaudRates();
    info->portName();
}

void EngineClass::handleSignal()
{
    //Lukee RFID-kortinlukijan avulla RFID-kortin ID numeron
    QString cardID = serial->readAll();
    qDebug() << "handleSignal: " << cardID;

    //Muokkaa luettua cardID:tä ja lähettää muokatun cardID:n eteenpäin
    cardID = cardID.simplified();
    cardID.replace("-","");
    cardID.replace(">","");
    cardID.replace(" ","");
    emit handle(cardID);
}

