#include "menu.h"
#include "ui_menu.h"
#include "training.h"
#include "mainwindow.h"
#include "body.h"

Menu::Menu(int userId, QString token, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Menu)
{
    this->user.setUserId(userId);
    //TODO user setToken funktion
    this->user.token=token;

    ui->setupUi(this);
}

Menu::~Menu()
{
    delete ui;
}

//closes startmenu and opens Training dialog after User presses "Trainingsplan" button
void Menu::on_pushButton_Training_clicked()
{
    Menu::close();
    Training windowtraining(user.getUserId());
    windowtraining.setModal(true);
    windowtraining.exec();
}

//closes startmenu and opens MainWindow (Login) after User presses "Abmelden" button
void Menu::on_pushButton_Abmelden_clicked()
{
    this->close();
    MainWindow *nwindow = new MainWindow;
    nwindow->show();
}

//closes startmenu and opens "Koerperangaben" dialog after User presses "Koerperangaben" button
void Menu::on_pushButton_Body_clicked()
{
    Menu::close();
    Body window(user.getUserId(), user.token);
    //window.initUser();
    window.exec();
}

