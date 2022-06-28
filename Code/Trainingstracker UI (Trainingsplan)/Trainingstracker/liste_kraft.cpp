#include "liste_kraft.h"
#include "ui_liste_kraft.h"
#include "uebungsart.h"
#include "kraftuebparameter.h"


Liste_Kraft::Liste_Kraft(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Liste_Kraft)
{
    ui->setupUi(this);
    //ui->listWidget = Traininsplan::getUebungen(listWidget);
}

Liste_Kraft::~Liste_Kraft()
{
    delete ui;
}

//adds new item on listWidget with name parameter
void Liste_Kraft::on_pushButton_Neu_clicked()
{
    QString str = ui->lineEdit->text();

    if(str == " ")
    {
        return;
    }
    ui->listWidget->addItem(str);
}

//closes dialog and opens "Uebungsart" window
void Liste_Kraft::on_pushButton_Abbrechen_clicked()
{
    this->close();
    Uebungsart window;
    window.setModal(true);
    window.exec();
}

//opens "KraftUebParameter" dialog if User selected item on list and pressed "hinzufuegen"
void Liste_Kraft::on_pushButton_Hinzu_clicked()
{
    if (QListWidgetItem *item = ui->listWidget->takeItem(rowSelected_))
    {
        ui->listWidget->currentItem();
        KraftUebParameter window;
        window.setModal(true);
        window.exec();
    }
}


//gets selected row (current)
void Liste_Kraft::on_listWidget_currentRowChanged(int currentRow)
{
    rowSelected_ = currentRow;
}

//deletes item on list after User selects item and presses "Entfernen" button
void Liste_Kraft::on_pushButton_Del_clicked()
{
    QListWidgetItem *item = ui->listWidget->takeItem(rowSelected_);
    delete item;
}

//closes dialog after User presses "Zurueck" button
void Liste_Kraft::on_pushButton_Back_clicked()
{
    Liste_Kraft::close();

}


