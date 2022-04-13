#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QMessageBox>
#include "salasana.h"
#include "PinCodeDLL/DLLPinCode/dllpincode.h"
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

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    //salasana *Pword;
    DLLPinCode *oDllPinCode;
    paavalikko *mainMenu;
    QString testipin;
    int attempts=0;

};
#endif // MAINWINDOW_H
