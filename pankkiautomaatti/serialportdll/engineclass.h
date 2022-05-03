#ifndef ENGINECLASS_H
#define ENGINECLASS_H
#include <QString>
#include <QObject>
#include <QByteArray>
#include <QtSerialPort/QSerialPort>
#include <QDebug>
#include <QTextCodec>
#include <QSerialPort>
#include <QIODevice>

class EngineClass : public QObject
{
    Q_OBJECT
public:
    EngineClass(QObject *parent = nullptr);
    ~EngineClass();
    void openConnection();

private:
    QSerialPort *pQSerialPort;
    QByteArray *pQByteArray;
    QString *pQString;

public slots:
    void serialReceived();

signals:
   void sendString(QString);
};

#endif // ENGINECLASS_H
