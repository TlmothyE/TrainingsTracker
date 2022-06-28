/********************************************************************************
** Form generated from reading UI file 'neuestraining.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEUESTRAINING_H
#define UI_NEUESTRAINING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_neuesTraining
{
public:
    QLabel *Titel;
    QListWidget *listWidget;
    QPushButton *pushButton_Uebungen;
    QPushButton *pushButton_Start;
    QPushButton *pushButton_Back;

    void setupUi(QDialog *neuesTraining)
    {
        if (neuesTraining->objectName().isEmpty())
            neuesTraining->setObjectName(QString::fromUtf8("neuesTraining"));
        neuesTraining->resize(450, 400);
        neuesTraining->setStyleSheet(QString::fromUtf8("*{\n"
"	color: white;\n"
"	font-family: \"Trebuchet MS\";\n"
"}\n"
"\n"
"#neuesTraining{\n"
"	background-color: rgb(69, 69, 69);\n"
"}\n"
"\n"
"#listWidget{\n"
"	background-color: rgb(192,192,192);\n"
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
"#pushButton_Start{\n"
"	font-size: 6pt;\n"
"	font-weight: bold;\n"
"	border-radius: 3px;\n"
"	color: rgb(69, 69, 69);\n"
"	background-color: rgb(192, 192, 192);\n"
"}\n"
"\n"
"#pushButton_Uebungen{\n"
"	font-size: 6pt;\n"
"	font-weight: bold;\n"
"	border-radius: 3px;\n"
"	color: rgb(69, 69, 69);\n"
"	background-color: rgb(192, 192, 192);\n"
"}\n"
"\n"
"#pushButton_Back{\n"
"	background-color: rgb(98, 98, 98);\n"
"	font-size: 6pt;\n"
"   border-radius: 3px;\n"
"	border: 2px solid rgb(45,45,45);\n"
"	color: rgb(228,228,228);\n"
"}\n"
"\n"
""));
        Titel = new QLabel(neuesTraining);
        Titel->setObjectName(QString::fromUtf8("Titel"));
        Titel->setGeometry(QRect(190, 30, 91, 20));
        listWidget = new QListWidget(neuesTraining);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(45, 70, 361, 251));
        pushButton_Uebungen = new QPushButton(neuesTraining);
        pushButton_Uebungen->setObjectName(QString::fromUtf8("pushButton_Uebungen"));
        pushButton_Uebungen->setGeometry(QRect(170, 340, 101, 18));
        pushButton_Start = new QPushButton(neuesTraining);
        pushButton_Start->setObjectName(QString::fromUtf8("pushButton_Start"));
        pushButton_Start->setGeometry(QRect(170, 370, 101, 18));
        pushButton_Back = new QPushButton(neuesTraining);
        pushButton_Back->setObjectName(QString::fromUtf8("pushButton_Back"));
        pushButton_Back->setGeometry(QRect(380, 10, 51, 18));

        retranslateUi(neuesTraining);

        QMetaObject::connectSlotsByName(neuesTraining);
    } // setupUi

    void retranslateUi(QDialog *neuesTraining)
    {
        neuesTraining->setWindowTitle(QCoreApplication::translate("neuesTraining", "Dialog", nullptr));
        Titel->setText(QCoreApplication::translate("neuesTraining", "Trainingsplan", nullptr));
        pushButton_Uebungen->setText(QCoreApplication::translate("neuesTraining", "\303\234bungsliste \303\266ffnen", nullptr));
        pushButton_Start->setText(QCoreApplication::translate("neuesTraining", "Training starten", nullptr));
        pushButton_Back->setText(QCoreApplication::translate("neuesTraining", "Zur\303\274ck", nullptr));
    } // retranslateUi

};

namespace Ui {
    class neuesTraining: public Ui_neuesTraining {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEUESTRAINING_H
