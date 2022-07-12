/********************************************************************************
** Form generated from reading UI file 'uebungsart.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UEBUNGSART_H
#define UI_UEBUNGSART_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Uebungsart
{
public:
    QLabel *Titel;
    QPushButton *pushButton_Kraft;
    QPushButton *pushButton_Ausdauer;
    QPushButton *pushButton_Back;

    void setupUi(QDialog *Uebungsart)
    {
        if (Uebungsart->objectName().isEmpty())
            Uebungsart->setObjectName(QString::fromUtf8("Uebungsart"));
        Uebungsart->resize(400, 300);
        Uebungsart->setStyleSheet(QString::fromUtf8("*{\n"
"	color: white;\n"
"	font-family: \"Trebuchet MS\";\n"
"}\n"
"\n"
"#Uebungsart{\n"
"	background-color: rgb(69, 69, 69);\n"
"}\n"
"\n"
"#Titel{\n"
"color: white;\n"
"	background-color: #761811;\n"
"	font-size: 10pt;\n"
"	font-weight: bold;\n"
"	text-align: center;\n"
"	padding: 2px;\n"
"	border-radius: 3px;\n"
"}\n"
"\n"
"#pushButton_Kraft{\n"
"	font-size: 12pt;\n"
"	font-weight: bold;\n"
"	border-radius: 8px;\n"
"	color: rgb(69, 69, 69);\n"
"	background-color: rgb(192, 192, 192);\n"
"}\n"
"\n"
"#pushButton_Ausdauer{\n"
"	font-size: 12pt;\n"
"	font-weight: bold;\n"
"	border-radius: 8px;\n"
"	color:  rgb(69, 69, 69);\n"
"	background-color: rgb(192, 192, 192);\n"
"}\n"
"\n"
"#pushButton_Back{\n"
"	background-color: #761811;\n"
"	font-size: 8pt;\n"
"   border-radius: 5px;\n"
"}\n"
"#pushButton_Kraft:hover{\n"
"	border: 5px solid #761811;\n"
"}\n"
"\n"
"#pushButton_Ausdauer:hover{\n"
"	border: 5px solid #761811;\n"
"}\n"
"\n"
""));
        Titel = new QLabel(Uebungsart);
        Titel->setObjectName(QString::fromUtf8("Titel"));
        Titel->setGeometry(QRect(140, 40, 141, 31));
        pushButton_Kraft = new QPushButton(Uebungsart);
        pushButton_Kraft->setObjectName(QString::fromUtf8("pushButton_Kraft"));
        pushButton_Kraft->setGeometry(QRect(50, 110, 150, 100));
        pushButton_Ausdauer = new QPushButton(Uebungsart);
        pushButton_Ausdauer->setObjectName(QString::fromUtf8("pushButton_Ausdauer"));
        pushButton_Ausdauer->setGeometry(QRect(210, 110, 150, 100));
        pushButton_Back = new QPushButton(Uebungsart);
        pushButton_Back->setObjectName(QString::fromUtf8("pushButton_Back"));
        pushButton_Back->setGeometry(QRect(170, 230, 80, 18));

        retranslateUi(Uebungsart);

        QMetaObject::connectSlotsByName(Uebungsart);
    } // setupUi

    void retranslateUi(QDialog *Uebungsart)
    {
        Uebungsart->setWindowTitle(QCoreApplication::translate("Uebungsart", "Dialog", nullptr));
        Titel->setText(QCoreApplication::translate("Uebungsart", "\303\234bungsart ausw\303\244hlen", nullptr));
        pushButton_Kraft->setText(QCoreApplication::translate("Uebungsart", "Kraft\303\274bungen", nullptr));
        pushButton_Ausdauer->setText(QCoreApplication::translate("Uebungsart", "Ausdauer\303\274bungen", nullptr));
        pushButton_Back->setText(QCoreApplication::translate("Uebungsart", "Zur\303\274ck", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Uebungsart: public Ui_Uebungsart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UEBUNGSART_H
