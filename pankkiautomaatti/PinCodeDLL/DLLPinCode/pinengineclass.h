#ifndef PINENGINECLASS_H
#define PINENGINECLASS_H

#include <QDialog>
#include <QLineEdit>
#include <QWidget>


namespace Ui {
class PinEngineClass;
}

class PinEngineClass : public QDialog
{
    Q_OBJECT

public:
    explicit PinEngineClass(QWidget *parent = nullptr);
    ~PinEngineClass();

signals:
    void emitPin(QString);

private slots:
    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_0_clicked();

    void on_pushButton_Clear_clicked();

    void on_pushButton_Sign_clicked();

private:
    Ui::PinEngineClass *ui;
    QString pin;
};

#endif // PINENGINECLASS_H
