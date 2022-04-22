#ifndef NOSTARAHAA_H
#define NOSTARAHAA_H

#include <QDialog>
#include "paavalikko.h"
#include <QTimer>
#include <QWidget>
#include "muusumma.h"

namespace Ui {
class nostarahaa;
}

class nostarahaa : public QDialog
{
    Q_OBJECT

public:
    explicit nostarahaa(QWidget *parent = nullptr);
    ~nostarahaa();

private slots:
    void LCDshow();

    void on_pushButton_takaisin1_clicked();

    void on_pushButton_3_Muusumma_clicked();

private:
    Ui::nostarahaa *ui;
    QTimer *Timer;
    QTimer *LCDtimer;
    int time;
};

#endif // NOSTARAHAA_H
