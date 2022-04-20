#ifndef DLLSERIALPORT_H
#define DLLSERIALPORT_H

#include "DLLSerialPort_global.h"
#include "engineclass.h"
#include <QString>

class DLLSERIALPORT_EXPORT DLLSerialPort : public QObject
{
    Q_OBJECT
public:
    DLLSerialPort();
    ~DLLSerialPort();
private:
    EngineClass *pEngineClass;

public slots:
    void recieveSignal(QString ID);

signals:
    passID(QString ID);

};

#endif // DLLSERIALPORT_H