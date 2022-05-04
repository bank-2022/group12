#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QMessageBox>
#include <QTimer>

#include "PinCodeDLL/DLLPinCode/dllpincode.h"
#include "serialportdll/dllserialport.h"
#include "DLLRestAPI/dllrestapi.h"
#include "paavalikko.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void checkPin();
    QString cardId;
    static QString cardIdStat;
    QString accountId;
    static QString accountIdStat;

private slots:
    void on_pushButton_clicked();
    void getID(QString);



public slots:
    void receiveDataLogin(QString l);
    void receiveDataLockStatus(QString lock);
    void receiveAccountId(QString);

private:
    Ui::MainWindow *ui;
    DLLPinCode *oDllPinCode;
    DLLSerialPort *oDLLSerialPort;
    DLLRestAPI *oDllRestApi;
    paavalikko *mainMenu;
    QString testipin;
    QString pin;
    QString loggedIn;
    int attempts;
    QString cardLocked;
    int i;
    void tryToLogin();



};
#endif // MAINWINDOW_H
