#include "uebungsliste_kraft.h"
#include "ui_uebungsliste.h"
#include "uebungsart.h"
#include "training.h"

Uebungsliste_Kraft::Uebungsliste_Kraft(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Uebungsliste_Kraft)
{
    ui->setupUi(this);
}

Uebungsliste_Kraft::~Uebungsliste_Kraft()
{
    delete ui;
}

void Uebungsliste_Kraft::on_pushButton_Neu_clicked()
{
    Uebungsliste_Kraft::close();
    Uebungsart window;
    window.setModal(true);
    window.exec();
}


void Uebungsliste_Kraft::on_pushButton_Abbrechen_clicked()
{
    this->close();
    Uebungsart window;
    window.show();
}
