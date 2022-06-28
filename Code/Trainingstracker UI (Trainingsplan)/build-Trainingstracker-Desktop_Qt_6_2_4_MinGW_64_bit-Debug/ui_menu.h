/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QWidget *centralwidget;
    QLabel *Logo;
    QLabel *Titel;
    QPushButton *pushButton_MyProfile;
    QPushButton *pushButton_Training;
    QPushButton *pushButton_Kalorien;
    QPushButton *pushButton_Body;
    QPushButton *pushButton_Abmelden;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName(QString::fromUtf8("Menu"));
        Menu->resize(800, 600);
        Menu->setStyleSheet(QString::fromUtf8("*{\n"
"	color: white;\n"
"	font-family: \"Trebuchet MS\";\n"
"	text-align: center;\n"
"}\n"
"\n"
"#centralwidget{\n"
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
"#pushButton_MyProfile{\n"
"	font-size: 15pt;\n"
"	font-weight: bold;\n"
"	border-radius: 12px;\n"
"	color: white;\n"
"	background-color: #761811;\n"
"}\n"
"\n"
"#pushButton_Training{\n"
"	font-size: 15pt;\n"
"	font-weight: bold;\n"
"	border-radius: 12px;\n"
"	color: white;\n"
"	background-color: #761811;\n"
"}\n"
"\n"
"#pushButton_Kalorien{\n"
"	font-size: 15pt;\n"
"	font-weight: bold;\n"
"	border-radius: 12px;\n"
"	color: white;\n"
"	background-color: #761811;\n"
"}\n"
"\n"
"#pushButton_Abmelden{\n"
"	background-color: rgb(85,85,85);\n"
"	border: 2px solid rgb(56, 56, 56);\n"
"	border-radius:"
                        " 5px;\n"
"	font-size: 6pt;\n"
"	color: rgb(228,228,228);\n"
"}\n"
"\n"
"#pushButton_Body{\n"
"	font-size: 15pt;\n"
"	font-weight: bold;\n"
"	border-radius: 12px;\n"
"	color: white;\n"
"	background-color: #761811;\n"
"}\n"
"\n"
"#pushButton_MyProfile:hover{\n"
"	background-color: rgb(89,89,89);\n"
"	border: 5px solid #761811;\n"
"}\n"
"\n"
"#pushButton_Training:hover{\n"
"	background-color: rgb(89,89,89);\n"
"	border: 5px solid #761811;\n"
"}\n"
"\n"
"#pushButton_Kalorien:hover{\n"
"	background-color: rgb(89,89,89);\n"
"	border: 5px solid #761811;\n"
"}\n"
"\n"
"#pushButton_Body:hover{\n"
"	background-color: rgb(89,89,89);\n"
"	border: 5px solid #761811;\n"
"}\n"
"\n"
"\n"
"	"));
        centralwidget = new QWidget(Menu);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Logo = new QLabel(centralwidget);
        Logo->setObjectName(QString::fromUtf8("Logo"));
        Logo->setGeometry(QRect(360, 40, 61, 51));
        Titel = new QLabel(centralwidget);
        Titel->setObjectName(QString::fromUtf8("Titel"));
        Titel->setGeometry(QRect(310, 100, 151, 31));
        pushButton_MyProfile = new QPushButton(centralwidget);
        pushButton_MyProfile->setObjectName(QString::fromUtf8("pushButton_MyProfile"));
        pushButton_MyProfile->setGeometry(QRect(150, 190, 220, 100));
        pushButton_Training = new QPushButton(centralwidget);
        pushButton_Training->setObjectName(QString::fromUtf8("pushButton_Training"));
        pushButton_Training->setGeometry(QRect(410, 190, 220, 100));
        pushButton_Kalorien = new QPushButton(centralwidget);
        pushButton_Kalorien->setObjectName(QString::fromUtf8("pushButton_Kalorien"));
        pushButton_Kalorien->setGeometry(QRect(150, 360, 220, 100));
        pushButton_Body = new QPushButton(centralwidget);
        pushButton_Body->setObjectName(QString::fromUtf8("pushButton_Body"));
        pushButton_Body->setGeometry(QRect(410, 360, 220, 100));
        pushButton_Abmelden = new QPushButton(centralwidget);
        pushButton_Abmelden->setObjectName(QString::fromUtf8("pushButton_Abmelden"));
        pushButton_Abmelden->setGeometry(QRect(680, 20, 91, 31));
        Menu->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Menu);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 16));
        Menu->setMenuBar(menubar);
        statusbar = new QStatusBar(Menu);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Menu->setStatusBar(statusbar);

        retranslateUi(Menu);

        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QMainWindow *Menu)
    {
        Menu->setWindowTitle(QCoreApplication::translate("Menu", "MainWindow", nullptr));
        Logo->setText(QCoreApplication::translate("Menu", " TT", nullptr));
        Titel->setText(QCoreApplication::translate("Menu", "Trainingstracker", nullptr));
        pushButton_MyProfile->setText(QCoreApplication::translate("Menu", "Mein Profil", nullptr));
        pushButton_Training->setText(QCoreApplication::translate("Menu", "Trainingsplan", nullptr));
        pushButton_Kalorien->setText(QCoreApplication::translate("Menu", "Kalorienz\303\244hler", nullptr));
        pushButton_Body->setText(QCoreApplication::translate("Menu", "K\303\266rperangaben", nullptr));
        pushButton_Abmelden->setText(QCoreApplication::translate("Menu", "Abmelden", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
