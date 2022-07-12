#ifndef LISTE_AUSDAUER_H
#define LISTE_AUSDAUER_H

#include <QDialog>

namespace Ui {
class Liste_Ausdauer;
}

class Liste_Ausdauer : public QDialog
{
    Q_OBJECT

public:
    explicit Liste_Ausdauer(QWidget *parent = nullptr);
    ~Liste_Ausdauer();

private slots:
    void on_pushButton_Neu_clicked();

    void on_pushButton_Abbrechen_clicked();

    void on_pushButton_Hinzu_clicked();

    void on_pushButton_Del_clicked();

    void on_listWidget_currentRowChanged(int currentRow);

    void on_pushButton_Back_clicked();

private:
    Ui::Liste_Ausdauer *ui;
    int rowSelected_;
};

#endif // LISTE_AUSDAUER_H
