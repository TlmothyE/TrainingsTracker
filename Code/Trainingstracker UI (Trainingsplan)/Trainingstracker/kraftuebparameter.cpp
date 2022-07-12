#include "kraftuebparameter.h"
#include "ui_kraftuebparameter.h"
#include "liste_kraft.h"
#include "UebungHead.h" //Header-file from Uebungsplan
#include <QMessageBox>

KraftUebParameter::KraftUebParameter(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::KraftUebParameter)
{
    ui->setupUi(this);
}

KraftUebParameter::~KraftUebParameter()
{
    delete ui;
}

//creates strength exercise, gets Users input and initialises parameters
void KraftUebParameter::on_buttonBox_accepted()
{

    float weight = ui->doubleSpinBox_Gewicht->value();
    int saetze = ui->spinBox_Saetze->value();
    int soll = ui->spinBox_Soll->value();
   // Uebung kraft{saetze, gewicht,soll};
    //Trainingsplan::addKraftuebung(listWidget, kraft);
    QMessageBox::information(this,tr("Parameter"), tr ("Parameter wurden gespeichert."));


}

//closes dialog after pressing "Abbruch" button
void KraftUebParameter::on_buttonBox_rejected()
{
    KraftUebParameter::close();
}



