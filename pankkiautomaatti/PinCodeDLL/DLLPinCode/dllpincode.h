#ifndef DLLPINCODE_H
#define DLLPINCODE_H

#include "DLLPinCode_global.h"
#include "pinengineclass.h"
#include <QDebug>
#include <QString>
#include <QWidget>
#include <QApplication>

class DLLPINCODE_EXPORT DLLPinCode : public QWidget

{
public:
    DLLPinCode();
    ~DLLPinCode();
    void startupPin();
    void closePin();

private:
    PinEngineClass *oPinEngineClass;

public slots:
    void receivePinFromEngine(QString);

signals:
    void sendPinToExe(QString);

};

#endif // DLLPINCODE_H
