#ifndef PAAVALIKKO_H
#define PAAVALIKKO_H

#include <QDialog>

namespace Ui {
class paavalikko;
}

class paavalikko : public QDialog
{
    Q_OBJECT

public:
    explicit paavalikko(QWidget *parent = nullptr);
    ~paavalikko();

private:
    Ui::paavalikko *ui;
};

#endif // PAAVALIKKO_H
