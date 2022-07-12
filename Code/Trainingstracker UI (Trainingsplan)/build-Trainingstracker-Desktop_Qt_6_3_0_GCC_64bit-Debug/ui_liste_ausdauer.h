/********************************************************************************
** Form generated from reading UI file 'liste_ausdauer.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTE_AUSDAUER_H
#define UI_LISTE_AUSDAUER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Liste_Ausdauer
{
public:
    QLabel *Titel;
    QListWidget *listWidget;
    QPushButton *pushButton_Hinzu;
    QPushButton *pushButton_Neu;
    QPushButton *pushButton_Back;
    QPushButton *pushButton_Del;
    QLineEdit *lineEdit;

    void setupUi(QDialog *Liste_Ausdauer)
    {
        if (Liste_Ausdauer->objectName().isEmpty())
            Liste_Ausdauer->setObjectName(QString::fromUtf8("Liste_Ausdauer"));
        Liste_Ausdauer->resize(450, 400);
        Liste_Ausdauer->setStyleSheet(QString::fromUtf8("*{\n"
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
"\n"
"#pushButton_Hinzu{\n"
"	background-color: rgb(71,71,71);\n"
"}\n"
"\n"
"#pushButton_Back{\n"
"	background-color: #761811;\n"
"}\n"
"\n"
"#pushButton_Del{\n"
"	background-color: rgb(71,71,71);\n"
"}\n"
"\n"
"#lineEdit{\n"
"	background-color: rgb(255, 255, 255);\n"
"	font-size: 6pt;\n"
"}"));
        Titel = new QLabel(Liste_Ausdauer);
        Titel->setObjectName(QString::fromUtf8("Titel"));
        Titel->setGeometry(QRect(180, 20, 121, 21));
        listWidget = new QListWidget(Liste_Ausdauer);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(20, 60, 321, 261));
        pushButton_Hinzu = new QPushButton(Liste_Ausdauer);
        pushButton_Hinzu->setObjectName(QString::fromUtf8("pushButton_Hinzu"));
        pushButton_Hinzu->setGeometry(QRect(360, 150, 71, 18));
        pushButton_Neu = new QPushButton(Liste_Ausdauer);
        pushButton_Neu->setObjectName(QString::fromUtf8("pushButton_Neu"));
        pushButton_Neu->setGeometry(QRect(220, 342, 120, 20));
        pushButton_Back = new QPushButton(Liste_Ausdauer);
        pushButton_Back->setObjectName(QString::fromUtf8("pushButton_Back"));
        pushButton_Back->setGeometry(QRect(400, 10, 41, 18));
        pushButton_Del = new QPushButton(Liste_Ausdauer);
        pushButton_Del->setObjectName(QString::fromUtf8("pushButton_Del"));
        pushButton_Del->setGeometry(QRect(360, 180, 71, 18));
        lineEdit = new QLineEdit(Liste_Ausdauer);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(20, 340, 180, 25));

        retranslateUi(Liste_Ausdauer);

        QMetaObject::connectSlotsByName(Liste_Ausdauer);
    } // setupUi

    void retranslateUi(QDialog *Liste_Ausdauer)
    {
        Liste_Ausdauer->setWindowTitle(QCoreApplication::translate("Liste_Ausdauer", "Dialog", nullptr));
        Titel->setText(QCoreApplication::translate("Liste_Ausdauer", "Ausdauer\303\274bungen", nullptr));
        pushButton_Hinzu->setText(QCoreApplication::translate("Liste_Ausdauer", "hinzuf\303\274gen", nullptr));
        pushButton_Neu->setText(QCoreApplication::translate("Liste_Ausdauer", "neue \303\234bung erstellen", nullptr));
        pushButton_Back->setText(QCoreApplication::translate("Liste_Ausdauer", "Zur\303\274ck", nullptr));
        pushButton_Del->setText(QCoreApplication::translate("Liste_Ausdauer", "entfernen", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Liste_Ausdauer: public Ui_Liste_Ausdauer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTE_AUSDAUER_H
