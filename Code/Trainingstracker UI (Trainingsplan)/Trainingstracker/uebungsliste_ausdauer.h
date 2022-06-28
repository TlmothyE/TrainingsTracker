#ifndef UEBUNGSLISTE_AUSDAUER_H
#define UEBUNGSLISTE_AUSDAUER_H

#include <QDialog>

namespace Ui {
class Uebungsliste_Ausdauer;
}

class Uebungsliste_Ausdauer : public QDialog
{
    Q_OBJECT

public:
    explicit Uebungsliste_Ausdauer(QWidget *parent = nullptr);
    ~Uebungsliste_Ausdauer();

private slots:
    void on_pushButton_Neu_clicked();

    void on_pushButton_Abbrechen_clicked();

private:
    Ui::Uebungsliste_Ausdauer *ui;
};

#endif // UEBUNGSLISTE_AUSDAUER_H
