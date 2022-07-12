#ifndef UEBUNGSLISTE_KRAFT_H
#define UEBUNGSLISTE_KRAFT_H

#include <QDialog>

namespace Ui {
class Uebungsliste_Kraft;
}

class Uebungsliste_Kraft : public QDialog
{
    Q_OBJECT

public:
    explicit Uebungsliste_Kraft(QWidget *parent = nullptr);
    ~Uebungsliste_Kraft();

private slots:
    void on_pushButton_Neu_clicked();

    void on_pushButton_Abbrechen_clicked();

private:
    Ui::Uebungsliste_Kraft *ui;
};

#endif // UEBUNGSLISTE_KRAFT_H
