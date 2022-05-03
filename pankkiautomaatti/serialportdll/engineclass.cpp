#include "engineclass.h"
#include <QIODevice>
#include <QSerialPortInfo>

EngineClass::EngineClass(QObject *parent) : QObject(parent)
{
    pQSerialPort = new QSerialPort(this);
    pQSerialPort->setPortName("COM4");
    pQSerialPort->setBaudRate(QSerialPort::Baud9600);
    pQSerialPort->setDataBits(QSerialPort::Data8);
    pQSerialPort->setParity(QSerialPort::NoParity);
    pQSerialPort->setStopBits(QSerialPort::OneStop);
    pQSerialPort->setFlowControl(QSerialPort::NoFlowControl);
    //pQSerialPort->open(QIODevice::ReadOnly);
    QObject::connect(pQSerialPort, SIGNAL(readyRead()), this, SLOT(serialReceived()));
}

EngineClass::~EngineClass()
{
    pQSerialPort->close();
    delete pQSerialPort;
    pQSerialPort = NULL;
}

void EngineClass::serialReceived()
{
    //Lukee RFID-kortinlukijan avulla RFID-kortin ID numeron
    QByteArray = pQSerialPort->readAll();

    //Muokkaa luettua cardID:tä ja lähettää muokatun cardID:n eteenpäin
    pQString = QTextCodec::codecForMib(106)->toUnicode(pQByteArray);

    pQString->remove("\r\n");
    pQString->remove("-");
    pQString->remove(">");
    emit sendString(pQString);
}

void EngineClass::openConnection()
{
    pQSerialPort->open(QIODevice::ReadOnly);
    pQSerialPort->clear(QSerialPort::AllDirections);
}
