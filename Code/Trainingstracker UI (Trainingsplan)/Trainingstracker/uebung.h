#ifndef UEBUNG_H
#define UEBUNG_H

#include <QDialog>

namespace Ui {
class Uebung;
}

class Uebung : public QDialog
{
    Q_OBJECT

public:
    explicit Uebung(QWidget *parent = nullptr);
    ~Uebung();

private:
    Ui::Uebung *ui;
};

#endif // UEBUNG_H
