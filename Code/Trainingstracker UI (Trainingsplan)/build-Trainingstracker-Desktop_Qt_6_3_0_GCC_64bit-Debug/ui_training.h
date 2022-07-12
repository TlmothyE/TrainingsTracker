/********************************************************************************
** Form generated from reading UI file 'training.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRAINING_H
#define UI_TRAINING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Training
{
public:
    QLabel *Logo;
    QLabel *Titel;
    QPushButton *pushButton_newTraining;
    QPushButton *pushButton_oldTraining;
    QPushButton *pushButton_Back;

    void setupUi(QDialog *Training)
    {
        if (Training->objectName().isEmpty())
            Training->setObjectName(QString::fromUtf8("Training"));
        Training->resize(800, 600);
        Training->setStyleSheet(QString::fromUtf8("*{\n"
"	color: white;\n"
"	font-family: \"Trebuchet MS\";\n"
"	text-align: center;\n"
"}\n"
"\n"
"#Training{\n"
"	background-image: url(:/background_menu.jpg);\n"
"}\n"
"\n"
"#Logo {\n"
"	background-color: #761811;\n"
"	border-radius: 12px;\n"
"	padding: 8px;\n"
"	font-weight: bold;\n"
"	font-size: 15pt;\n"
"}\n"
"\n"
"#Titel{\n"
"	font-weight: bold;\n"
"	font-size: 15pt;\n"
"	background: transparent;\n"
"}\n"
"\n"
"#pushButton_newTraining{\n"
"	font-size: 15pt;\n"
"	font-weight: bold;\n"
"	border-radius: 12px;\n"
"	color: white;\n"
"	background-color: #761811;\n"
"}\n"
"\n"
"#pushButton_oldTraining{\n"
"	font-size: 15pt;\n"
"	font-weight: bold;\n"
"	border-radius: 12px;\n"
"	color: white;\n"
"	background-color: #761811;\n"
"}\n"
"\n"
"#pushButton_Back{\n"
"	background-color: #761811;\n"
"	font-size: 12pt;\n"
"   border-radius: 8px;\n"
"	color:white;\n"
"}\n"
"\n"
"#pushButton_newTraining:hover{\n"
"	background-color: rgb(89,89,89);\n"
"	border: 5px solid #761811;\n"
"}\n"
"\n"
"#pushButton_oldTraining:hover{\n"
""
                        "	background-color: rgb(89,89,89);\n"
"	border: 5px solid #761811;\n"
"}"));
        Logo = new QLabel(Training);
        Logo->setObjectName(QString::fromUtf8("Logo"));
        Logo->setGeometry(QRect(360, 40, 61, 51));
        Titel = new QLabel(Training);
        Titel->setObjectName(QString::fromUtf8("Titel"));
        Titel->setGeometry(QRect(310, 100, 151, 31));
        pushButton_newTraining = new QPushButton(Training);
        pushButton_newTraining->setObjectName(QString::fromUtf8("pushButton_newTraining"));
        pushButton_newTraining->setGeometry(QRect(190, 210, 400, 100));
        pushButton_oldTraining = new QPushButton(Training);
        pushButton_oldTraining->setObjectName(QString::fromUtf8("pushButton_oldTraining"));
        pushButton_oldTraining->setGeometry(QRect(190, 380, 400, 100));
        pushButton_Back = new QPushButton(Training);
        pushButton_Back->setObjectName(QString::fromUtf8("pushButton_Back"));
        pushButton_Back->setGeometry(QRect(700, 20, 80, 21));

        retranslateUi(Training);

        QMetaObject::connectSlotsByName(Training);
    } // setupUi

    void retranslateUi(QDialog *Training)
    {
        Training->setWindowTitle(QCoreApplication::translate("Training", "Dialog", nullptr));
        Logo->setText(QCoreApplication::translate("Training", " TT", nullptr));
        Titel->setText(QCoreApplication::translate("Training", "Trainingstracker", nullptr));
        pushButton_newTraining->setText(QCoreApplication::translate("Training", "Neuen Trainingsplan erstellen", nullptr));
        pushButton_oldTraining->setText(QCoreApplication::translate("Training", "Vorhandene Trainingspl\303\244ne", nullptr));
        pushButton_Back->setText(QCoreApplication::translate("Training", "Zur\303\274ck", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Training: public Ui_Training {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRAINING_H
