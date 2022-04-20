#ifndef DLLPINCODE_H
#define DLLPINCODE_H
#include "DLLPinCode_global.h"
#include "pinengineclass.h"
#include <QDebug>
#include <QString>
#include <QWidget>

class DLLPINCODE_EXPORT DLLPinCode : public QWidget

{
public:
    DLLPinCode();
    ~DLLPinCode();
    void startupPin();
    void closePin();
    QString returnPinCode();
    void wrongPin(int attempts);

    const QString &getPinCode() const;
    void setPinCode(const QString &newPinCode);

private:
    PinEngineClass *oPinEngineClass;
    QString pinCode;



};

#endif // DLLPINCODE_H
