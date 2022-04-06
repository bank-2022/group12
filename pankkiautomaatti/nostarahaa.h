#ifndef NOSTARAHAA_H
#define NOSTARAHAA_H

#include <QDialog>

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
    void on_pushButton_muusumma_clicked();

private:
    Ui::nostarahaa *ui;
};

#endif // NOSTARAHAA_H
