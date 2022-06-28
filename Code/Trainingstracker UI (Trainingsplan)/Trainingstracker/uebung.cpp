#include "uebung.h"
#include "ui_uebung.h"

Uebung::Uebung(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Uebung)
{
    ui->setupUi(this);
}

Uebung::~Uebung()
{
    delete ui;
}
