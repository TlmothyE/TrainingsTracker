#include "uebungsart.h"
#include "training.h"
#include "ui_uebungsart.h"
#include "liste_kraft.h"
#include "liste_ausdauer.h"
//#include "trainingsplan.h"

Uebungsart::Uebungsart(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Uebungsart)
{
    ui->setupUi(this);
}

Uebungsart::~Uebungsart()
{
    delete ui;
}

void Uebungsart::on_pushButton_Back_clicked()
{
    Uebungsart::close();
    //Training window;
    //window.show();

}


void Uebungsart::on_pushButton_Kraft_clicked()
{
    Liste_Kraft window;
    window.setModal(true);
    window.exec();
}


void Uebungsart::on_pushButton_Ausdauer_clicked()
{
    Liste_Ausdauer window;
    window.setModal(true);
    window.exec();
}

