#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QMessageBox>
#include "PinCodeDLL/DLLPinCode/dllpincode.h"
#include "paavalikko.h"
#include "DLLRestAPI/dllrestapi.h"
#include <QTimer>

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


private slots:
    void on_pushButton_clicked();


public slots:

private:
    Ui::MainWindow *ui;
    DLLPinCode *oDllPinCode;
    DLLRestAPI *oDllRestApi;
    paavalikko *mainMenu;
    QString testipin;
    QString cardId;
    int attempts=0;

};
#endif // MAINWINDOW_H
