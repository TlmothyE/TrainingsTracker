/********************************************************************************
** Form generated from reading UI file 'uebungsliste_ausdauer.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UEBUNGSLISTE_AUSDAUER_H
#define UI_UEBUNGSLISTE_AUSDAUER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Uebungsliste
{
public:
    QListWidget *listWidget;
    QLabel *Titel;
    QPushButton *pushButton_Neu;
    QPushButton *pushButton_Abbrechen;

    void setupUi(QDialog *Uebungsliste)
    {
        if (Uebungsliste->objectName().isEmpty())
            Uebungsliste->setObjectName(QString::fromUtf8("Uebungsliste"));
        Uebungsliste->resize(450, 380);
        Uebungsliste->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color: rgb(69, 69, 69);\n"
"	text-align: center;\n"
"}\n"
"\n"
"#listWidget{\n"
"	background-color: rgb(192, 192, 192);\n"
"}\n"
"\n"
"#Titel{\n"
"	color: white;\n"
"	background-color: #761811;\n"
"	font-size: 10pt;\n"
"	font-weight: bold;\n"
"	text-align: center;\n"
"	padding: 2px;\n"
"	border-radius: 3px;\n"
"}\n"
"\n"
"#pushButton_Neu{\n"
"	background-color: #761811;\n"
"}\n"
"\n"
"#pushButton_Abbrechen{\n"
"	background-color: #761811;\n"
"}"));
        listWidget = new QListWidget(Uebungsliste);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(60, 60, 331, 231));
        Titel = new QLabel(Uebungsliste);
        Titel->setObjectName(QString::fromUtf8("Titel"));
        Titel->setGeometry(QRect(180, 20, 101, 21));
        pushButton_Neu = new QPushButton(Uebungsliste);
        pushButton_Neu->setObjectName(QString::fromUtf8("pushButton_Neu"));
        pushButton_Neu->setGeometry(QRect(170, 320, 101, 18));
        pushButton_Abbrechen = new QPushButton(Uebungsliste);
        pushButton_Abbrechen->setObjectName(QString::fromUtf8("pushButton_Abbrechen"));
        pushButton_Abbrechen->setGeometry(QRect(180, 350, 85, 18));

        retranslateUi(Uebungsliste);

        QMetaObject::connectSlotsByName(Uebungsliste);
    } // setupUi

    void retranslateUi(QDialog *Uebungsliste)
    {
        Uebungsliste->setWindowTitle(QCoreApplication::translate("Uebungsliste", "Dialog", nullptr));
        Titel->setText(QCoreApplication::translate("Uebungsliste", "Ausdauer\303\274bungen", nullptr));
        pushButton_Neu->setText(QCoreApplication::translate("Uebungsliste", "\303\234bung hinzuf\303\274gen", nullptr));
        pushButton_Abbrechen->setText(QCoreApplication::translate("Uebungsliste", "Abbrechen", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Uebungsliste: public Ui_Uebungsliste {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UEBUNGSLISTE_AUSDAUER_H
