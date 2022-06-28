#include "training.h"
#include "menu.h"
#include "ui_training.h"
#include "neuestraining.h"

Training::Training(int userId,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Training)
{
    user.setUserId(userId);
    ui->setupUi(this);
}

Training::~Training()
{
    delete ui;
}

//closes "Training" dialog and opens "neuesTraining" dialog after User presses "neuen Trainingsplan erstellen" button
void Training::on_pushButton_newTraining_clicked()
{
    Training::close();
    neuesTraining windowneu;
    windowneu.setModal(true);
    windowneu.exec();
}

//closes "Training" dialog and opens startmenu window
void Training::on_pushButton_Back_clicked()
{
    this->close();
    Menu *windowmenu = new Menu(user.getUserId(), nullptr);
    windowmenu->show();
}

