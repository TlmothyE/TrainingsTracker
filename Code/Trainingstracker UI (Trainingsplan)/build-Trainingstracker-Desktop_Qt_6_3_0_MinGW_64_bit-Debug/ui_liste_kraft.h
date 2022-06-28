/********************************************************************************
** Form generated from reading UI file 'liste_kraft.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTE_KRAFT_H
#define UI_LISTE_KRAFT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Liste_Kraft
{
public:
    QPushButton *pushButton_Hinzu;
    QPushButton *pushButton_Neu;
    QListWidget *listWidget;
    QLabel *Titel;
    QPushButton *pushButton_Back;
    QLineEdit *lineEdit;
    QPushButton *pushButton_Del;

    void setupUi(QDialog *Liste_Kraft)
    {
        if (Liste_Kraft->objectName().isEmpty())
            Liste_Kraft->setObjectName(QString::fromUtf8("Liste_Kraft"));
        Liste_Kraft->resize(450, 400);
        Liste_Kraft->setStyleSheet(QString::fromUtf8("*{\n"
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
"#pushButton_HInzu{\n"
"	background-color:  rgb(71,71,71);\n"
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
        pushButton_Hinzu = new QPushButton(Liste_Kraft);
        pushButton_Hinzu->setObjectName(QString::fromUtf8("pushButton_Hinzu"));
        pushButton_Hinzu->setGeometry(QRect(360, 160, 81, 18));
        pushButton_Neu = new QPushButton(Liste_Kraft);
        pushButton_Neu->setObjectName(QString::fromUtf8("pushButton_Neu"));
        pushButton_Neu->setGeometry(QRect(220, 342, 120, 20));
        listWidget = new QListWidget(Liste_Kraft);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(20, 60, 321, 261));
        Titel = new QLabel(Liste_Kraft);
        Titel->setObjectName(QString::fromUtf8("Titel"));
        Titel->setGeometry(QRect(180, 20, 101, 21));
        pushButton_Back = new QPushButton(Liste_Kraft);
        pushButton_Back->setObjectName(QString::fromUtf8("pushButton_Back"));
        pushButton_Back->setGeometry(QRect(390, 20, 41, 18));
        lineEdit = new QLineEdit(Liste_Kraft);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(20, 340, 180, 25));
        pushButton_Del = new QPushButton(Liste_Kraft);
        pushButton_Del->setObjectName(QString::fromUtf8("pushButton_Del"));
        pushButton_Del->setGeometry(QRect(360, 190, 81, 18));

        retranslateUi(Liste_Kraft);

        QMetaObject::connectSlotsByName(Liste_Kraft);
    } // setupUi

    void retranslateUi(QDialog *Liste_Kraft)
    {
        Liste_Kraft->setWindowTitle(QCoreApplication::translate("Liste_Kraft", "Dialog", nullptr));
        pushButton_Hinzu->setText(QCoreApplication::translate("Liste_Kraft", "hinzuf\303\274gen", nullptr));
        pushButton_Neu->setText(QCoreApplication::translate("Liste_Kraft", "neue \303\234bung erstellen", nullptr));
        Titel->setText(QCoreApplication::translate("Liste_Kraft", "Kraft\303\274bungen", nullptr));
        pushButton_Back->setText(QCoreApplication::translate("Liste_Kraft", "Zur\303\274ck", nullptr));
        pushButton_Del->setText(QCoreApplication::translate("Liste_Kraft", "entfernen", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Liste_Kraft: public Ui_Liste_Kraft {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTE_KRAFT_H
