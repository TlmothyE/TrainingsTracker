#include "neuestraining.h"
#include "ui_neuestraining.h"
#include "uebungsart.h"
#include "training.h"
#include <QTimer>
#include <QListWidget>

neuesTraining::neuesTraining(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::neuesTraining)
{
    ui->setupUi(this);
    //tries getting existing exercises if any by default
    //ui->listWidget->addItem(Trainingsplan::getUebungen(listWidget));
}

neuesTraining::~neuesTraining()
{
    delete ui;
}

//closes "Training" dialog after pressing "Zurueck" button
void neuesTraining::on_pushButton_Back_clicked()
{
    neuesTraining::close();
    //Training windowtraining();
    //windowtraining.exec();
}

//opens "neuesTraining" dialog after User presses "Uebungsliste öffnen"
void neuesTraining::on_pushButton_Uebungen_clicked()
{
    Uebungsart windowart;
    windowart.setModal(true);
    windowart.exec();
}

//starts timer after User presses "Training starten" button
void neuesTraining::on_pushButton_Start_clicked()
{
    //QTimer::start();
}

