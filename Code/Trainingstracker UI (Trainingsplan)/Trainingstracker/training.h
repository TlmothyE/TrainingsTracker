#ifndef TRAINING_H
#define TRAINING_H

#include "uebungsliste_ausdauer.h"
#include <QDialog>
#include "../../client/source/user.h"

namespace Ui {
class Training;
}

class Training : public QDialog
{
    Q_OBJECT

public:
    explicit Training(int userId, QWidget *parent = nullptr);


    ~Training();

private slots:
    void on_pushButton_newTraining_clicked();

    void on_pushButton_Back_clicked();


private:
    Ui::Training *ui;
    user user;
};

#endif // TRAINING_H
