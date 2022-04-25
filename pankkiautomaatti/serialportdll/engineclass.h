#ifndef ENGINECLASS_H
#define ENGINECLASS_H
#include <QString>
#include <QtSerialPort/QSerialPort>


class EngineClass : public QObject
{
    Q_OBJECT
public:
    EngineClass();

private:
    QSerialPort *serial;

public slots:
    void handleSignal();

signals:
   void handle(QString ID);
};

#endif // ENGINECLASS_H
