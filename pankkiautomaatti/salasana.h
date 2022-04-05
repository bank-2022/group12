#ifndef SALASANA_H
#define SALASANA_H

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

private:
    Ui::salasana *ui;




};

#endif // SALASANA_H
