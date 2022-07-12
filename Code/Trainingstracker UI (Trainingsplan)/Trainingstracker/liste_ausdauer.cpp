#include "liste_ausdauer.h"
#include "ui_liste_ausdauer.h"
#include "uebungsart.h"
#include "training.h"
#include "ausdaueruebparameter.h"
#include <QListWidgetItem>

Liste_Ausdauer::Liste_Ausdauer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Liste_Ausdauer)
{
    ui->setupUi(this);
}

Liste_Ausdauer::~Liste_Ausdauer()
{
    delete ui;
}

//adds new item on listWidget with name parameter
void Liste_Ausdauer::on_pushButton_Neu_clicked()
{
    QString str = ui->lineEdit->text();

    if(str == " ")
    {
        return;
    }

    ui->listWidget->addItem(str);
}

//closes dialog and opens "Uebungsart" window
void Liste_Ausdauer::on_pushButton_Abbrechen_clicked()
{
    this->close();
    Uebungsart window;
    window.setModal(true);
    window.exec();
}

//opens "AusdauerUebParameter" dialog if User selected item on list and pressed "hinzufuegen"
void Liste_Ausdauer::on_pushButton_Hinzu_clicked()
{
    if (QListWidgetItem *item = ui->listWidget->takeItem(rowSelected_))
    {
        ui->listWidget->currentItem();
        AusdauerUebParameter window;
        window.setModal(true);
        window.exec();
    }
}

//deletes item on list after User selects item and presses "Entfernen" button
void Liste_Ausdauer::on_pushButton_Del_clicked()
{
    QListWidgetItem *item = ui->listWidget->takeItem(rowSelected_);
    delete item;
}

//gets selected row (current)
void Liste_Ausdauer::on_listWidget_currentRowChanged(int currentRow)
{
    rowSelected_ = currentRow;
}


//closes dialog after User presses "Zurueck" button
void Liste_Ausdauer::on_pushButton_Back_clicked()
{
    Liste_Ausdauer::close();
}


