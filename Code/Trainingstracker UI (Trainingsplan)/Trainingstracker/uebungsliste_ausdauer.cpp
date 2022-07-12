#include "uebungsliste_ausdauer.h"
#include "ui_uebungsliste.h"
#include "uebungsart.h"
#include "training.h"

Uebungsliste_Ausdauer::Uebungsliste_Ausdauer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Uebungsliste_Ausdauer)
{
    ui->setupUi(this);
}

Uebungsliste_Ausdauer::~Uebungsliste_Ausdauer()
{
    delete ui;
}

void Uebungsliste_Ausdauer::on_pushButton_Neu_clicked()
{
    Uebungsliste_Ausdauer::close();
    Uebungsart window;
    window.setModal(true);
    window.exec();
}


void Uebungsliste_Ausdauer::on_pushButton_Abbrechen_clicked()
{
    this->close();
    Training window;
    window.show();
}
