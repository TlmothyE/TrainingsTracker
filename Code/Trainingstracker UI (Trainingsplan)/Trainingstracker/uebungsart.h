#ifndef UEBUNGSART_H
#define UEBUNGSART_H

#include <QDialog>
#include "uebungsliste_kraft.h"
#include "uebungsliste_ausdauer.h"

namespace Ui {
class Uebungsart;
}

class Uebungsart : public QDialog
{
    Q_OBJECT

public:
    explicit Uebungsart(QWidget *parent = nullptr);
    ~Uebungsart();

private slots:
    void on_pushButton_Back_clicked();

    void on_pushButton_Kraft_clicked();

    void on_pushButton_Ausdauer_clicked();

private:
    Ui::Uebungsart *ui;
};

#endif // UEBUNGSART_H
