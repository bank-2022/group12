#ifndef MUUSUMMA_H
#define MUUSUMMA_H
#include <QDialog>
#include <QMessageBox>
#include <QLabel>
#include <QLineEdit>
#include <QString>
#include "nostarahaa.h"
#include <QTimer>
namespace Ui {
class Muusumma;
}

class Muusumma : public QDialog
{
    Q_OBJECT

public:
    explicit Muusumma(QWidget *parent = nullptr);
    ~Muusumma();

private slots:
    void LCDshow();

    void on_pushButton_Ok_clicked();

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

    void on_pushButton_kumita_clicked();

private:
    Ui::Muusumma *ui;
    QTimer *timer;
    QTimer *LCDtimer;
    int time;
};

#endif // MUUSUMMA_H
