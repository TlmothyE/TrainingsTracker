#include "ausdaueruebparameter.h"
#include "ui_ausdaueruebparameter.h"
#include "UebungHead.h" //Header-file from Uebungsplan

AusdauerUebParameter::AusdauerUebParameter(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AusdauerUebParameter)
{
    ui->setupUi(this);
}

AusdauerUebParameter::~AusdauerUebParameter()
{
    delete ui;
}

//creates endurance exercise, gets Users input and initialises parameters
void AusdauerUebParameter::on_buttonBox_accepted()
{
    float soll = ui->doubleSpinBox->value();
   //Uebungdauerhaft ausdauer{soll};
    //Trainingsplan::addAusdaueruebung(listWidget, ausdauer);
    //QMessageBox::information(this,tr("Parameter"), tr ("Parameter wurden gespeichert."));
}

//closes dialog after pressing "Abbruch" button
void AusdauerUebParameter::on_buttonBox_rejected()
{
    AusdauerUebParameter::close();
}


