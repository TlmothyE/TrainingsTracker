#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "menu.h"
#include <QDesktopServices>
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//gets username and password and controls Users Access to Traininstracker (Login)
//after User presses "Anmelden" button
void MainWindow::on_pushButton_Login_clicked()
{
    QString username = ui->lineEdit_Username->text();
    QString password = ui->lineEdit_Password->text();
    QString location = "http://192.168.178.53:6502/v1/tracker/api/auth";

    user.authUser(location , username, password);

    bool skipLogin = false;

    if (username == "test") skipLogin = true;
    //wait for http response
    QTime dieTime= QTime::currentTime().addMSecs(100);
        while (QTime::currentTime() < dieTime)
            QCoreApplication::processEvents(QEventLoop::AllEvents, 100);


    if(!skipLogin && user.token.isNull())
    {
        QMessageBox::warning(this, "Login", "Username and/or Password is not correct!");
    }
    else
    {
        MainWindow::button_action();
    }
}

//closes MainWindow and opens startmenu
void MainWindow::button_action() {
    MainWindow::close();
    objmenu = new Menu(user.getUserId(), user.token);
    objmenu->show();
}
