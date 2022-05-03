#ifndef DLLSERIALPORT_H
#define DLLSERIALPORT_H

#include "DLLSerialPort_global.h"
#include "engineclass.h"
#include <QString>
#include <QDebug>

class DLLSERIALPORT_EXPORT DLLSerialPort : public QObject
{
Q_OBJECT
public:
    DLLSerialPort();
    ~DLLSerialPort();
    void interfaceFuctionOpenConnection();
private:
    EngineClass *pEngineClass;

public slots:
    void receiveValue(QString);

signals:
    void returnValue(QString);

};

#endif // DLLSERIALPORT_H
