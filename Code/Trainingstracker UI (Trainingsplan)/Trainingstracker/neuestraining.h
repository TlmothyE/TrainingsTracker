#ifndef NEUESTRAINING_H
#define NEUESTRAINING_H

#include <QDialog>
#include "user.h"

namespace Ui {
class neuesTraining;
}

class neuesTraining : public QDialog
{
    Q_OBJECT

public:
    explicit neuesTraining(int userId, QWidget *parent = nullptr);
    ~neuesTraining();

private slots:
    void on_pushButton_Back_clicked();

    void on_pushButton_Uebungen_clicked();

    void on_pushButton_Start_clicked();

private:
    Ui::neuesTraining *ui;
    User user;
};

#endif // NEUESTRAINING_H
