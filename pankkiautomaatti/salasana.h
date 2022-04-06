#ifndef SALASANA_H
#define SALASANA_H
#include "paavalikko.h"
#include <QDialog>

namespace Ui {
class salasana;
}

class salasana : public QDialog
{
    Q_OBJECT

public:
    explicit salasana(QWidget *parent = nullptr);
    ~salasana();

private slots:


    void on_pushButton_kirjaudu_clicked();

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
    Ui::salasana *ui;
    paavalikko *Mainmenu;
    void connectKeys();
    void keywasClicked();




};

#endif // SALASANA_H
