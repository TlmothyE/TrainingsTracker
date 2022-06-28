#include "body.h"
#include "ui_body.h"
#include "menu.h"
#include "QMessageBox"
#include "QString"
#include "../../client/source/user.h" //Header-file from Koerperangaben
#include <iostream>


Body::Body(int userId, QString token, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Body)
{
    this->user.setUserId(userId);
    //TODO user setToken funktion
    this->user.token=token;
    user.getUserHttp("http://192.168.178.53:6502/v1/tracker/api/users", QString::number(user.getUserId()));//QString::number(user.getUserId())


    timer= new QTimer(this);
    connect(timer, SIGNAL(timeout()),this, SLOT(setSpinBoxes()));
    timer->start(100);
    //connect(&user, SIGNAL(variableChanged()), this, SLOT(setSpinBoxes()));


    ui->setupUi(this);


   // setSpinBoxes();
    qInfo() << "User" << user.getName() << "was initialised";
   //
}


void Body::setSpinBoxes(){
    //user.getUserHttp("http://192.168.178.53:6502/v1/tracker/api/users");
    if(isSet==false){


    ui->doubleSpinBox_Weight->setValue(user.getWeight());
    ui->doubleSpinBox_Arm->setValue(user.getUpperArmCir());
    ui->doubleSpinBox_Brust->setValue(user.getChestCir());
    ui->doubleSpinBox_Height->setValue(user.getHeight());
    ui->doubleSpinBox_Huefte->setValue(user.getHipCir());
    ui->doubleSpinBox_Oberschenkel->setValue(user.getCalfCir());
    ui->doubleSpinBox_Waden->setValue(user.getTightCir());
/*
    ui->doubleSpinBox_Weight->update();
    ui->doubleSpinBox_Arm->update();
    ui->doubleSpinBox_Brust->update();
    ui->doubleSpinBox_Height->update();
    ui->doubleSpinBox_Huefte->update();
    ui->doubleSpinBox_Oberschenkel->update();
    ui->doubleSpinBox_Waden->update();*/

    isSet=true;
    }

}

Body::~Body()
{
    delete ui;
}

void Body::initUser()
{
    //this->user.getUserHttp("http://192.168.178.97:6502/v1/tracker/api/users");

}

void Body::on_pushButton_BMI_clicked()
{

    setSpinBoxes();


    float spin_h = ui->doubleSpinBox_Height->value();
    float spin_w = ui->doubleSpinBox_Weight->value();
    if(spin_h > 0 && spin_w > 0)
    {
        double bmi = spin_w / (spin_h * spin_h);
        QMessageBox::information(this, tr("Ergebnis"), tr("BMI: %1").arg(bmi));
    }

}

//gets Users input and initialises "Koerperangaben" object with parameters
void Body::on_pushButton_Speichern_clicked()
{


    user.PutUserHttp("http://192.168.178.53:6502/v1/tracker/api/users", user.getUserId(), user.getName(), user.getAge(), ui->doubleSpinBox_Weight->value(), ui->doubleSpinBox_Height->value(), ui->doubleSpinBox_Oberschenkel->value(),
                     ui->doubleSpinBox_Huefte->value(), ui->doubleSpinBox_Waden->value(), ui->doubleSpinBox_Brust->value(), ui->doubleSpinBox_Arm->value(), user.getBmi());


    QTime dieTime= QTime::currentTime().addMSecs(300);
        while (QTime::currentTime() < dieTime)
            QCoreApplication::processEvents(QEventLoop::AllEvents, 100);

    user.getUserHttp("http://192.168.178.53:6502/v1/tracker/api/users", QString::number(user.getUserId()));

    QTime dieTime2= QTime::currentTime().addMSecs(300);
        while (QTime::currentTime() < dieTime2)
            QCoreApplication::processEvents(QEventLoop::AllEvents, 100);

    isSet = false;
    //user koerper{gewicht, groesse, arm, brust, huefte, oberschenkel, waden};
}

//closes window after pressing "Zurueck" button and opens startmenu
void Body::on_pushButton_Back_clicked()
{
    Body::close();
    Menu *windowmenu = new Menu(user.getUserId(), nullptr);
    windowmenu->show();
}
