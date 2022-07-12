#ifndef LISTE_KRAFT_H
#define LISTE_KRAFT_H

#include <QDialog>

namespace Ui {
class Liste_Kraft;
}

class Liste_Kraft : public QDialog
{
    Q_OBJECT
public:
    explicit Liste_Kraft(QWidget *parent = nullptr);
    ~Liste_Kraft();

private slots:
    void on_pushButton_Neu_clicked();

    void on_pushButton_Abbrechen_clicked();

    void on_pushButton_Hinzu_clicked();

    void on_listWidget_currentRowChanged(int currentRow);

    void on_pushButton_Del_clicked();

    void on_pushButton_Back_clicked();

private:
    Ui::Liste_Kraft *ui;
    int rowSelected_;

};

#endif // LISTE_KRAFT_H
