/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QLabel *Logo;
    QLineEdit *lineEdit_Username;
    QLineEdit *lineEdit_Password;
    QPushButton *pushButton_Login;
    QLabel *Titel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(833, 600);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setStyleSheet(QString::fromUtf8("*{\n"
"	font-family: \"Trebuchet MS\";\n"
"	text-align: center;\n"
"}\n"
"\n"
"#centralwidget{\n"
"	background-image: url(:/header-bild2.jpg);\n"
"}\n"
"\n"
"#Logo {\n"
"	color: white;\n"
"	background-color: rgb(118, 24, 17);\n"
"	font-size: 15pt;\n"
"	font-weight: bold;\n"
"	padding: 8px;\n"
"}\n"
"\n"
"#Titel\n"
"{\n"
"	color: white;\n"
"	font-size: 15pt;\n"
"	font-weight: bold;\n"
"	background: transparent;\n"
"}\n"
"\n"
"QFrame\n"
"{ \n"
"	border-radius: 12px;\n"
"	background-color: rgb(89,89,89);\n"
"}\n"
"\n"
"#pushButton_Login\n"
"{\n"
"	color: white;\n"
"	background-color: #761811;\n"
"	border-radius: 18px;\n"
"}\n"
"\n"
"#pushButton_Login:hover\n"
"{\n"
"	color: white;\n"
"	border-radius: 18px;\n"
"	background-color: rgb(212, 43, 31);\n"
"}\n"
"\n"
"QLineEdit\n"
"{\n"
"	font-size: 12pt;\n"
"    font-weight: normal;\n"
"	background: transparent;\n"
"	border: none;\n"
"	color: rgb(161, 161, 161);\n"
"	border-bottom: 1px solid rgb(161, 161, 161);\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(270, 100, 311, 341));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        Logo = new QLabel(frame);
        Logo->setObjectName(QString::fromUtf8("Logo"));
        Logo->setGeometry(QRect(130, 20, 51, 51));
        lineEdit_Username = new QLineEdit(frame);
        lineEdit_Username->setObjectName(QString::fromUtf8("lineEdit_Username"));
        lineEdit_Username->setGeometry(QRect(70, 140, 170, 25));
        lineEdit_Username->setAutoFillBackground(false);
        lineEdit_Username->setReadOnly(false);
        lineEdit_Username->setClearButtonEnabled(true);
        lineEdit_Password = new QLineEdit(frame);
        lineEdit_Password->setObjectName(QString::fromUtf8("lineEdit_Password"));
        lineEdit_Password->setGeometry(QRect(70, 200, 170, 25));
        lineEdit_Password->setAutoFillBackground(false);
        lineEdit_Password->setEchoMode(QLineEdit::Password);
        lineEdit_Password->setReadOnly(false);
        lineEdit_Password->setClearButtonEnabled(true);
        pushButton_Login = new QPushButton(frame);
        pushButton_Login->setObjectName(QString::fromUtf8("pushButton_Login"));
        pushButton_Login->setGeometry(QRect(110, 260, 91, 31));
        Titel = new QLabel(frame);
        Titel->setObjectName(QString::fromUtf8("Titel"));
        Titel->setGeometry(QRect(80, 80, 151, 31));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 833, 16));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Anmeldung", nullptr));
        Logo->setText(QCoreApplication::translate("MainWindow", "TT", nullptr));
        lineEdit_Username->setText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        lineEdit_Password->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        pushButton_Login->setText(QCoreApplication::translate("MainWindow", "Anmelden", nullptr));
        Titel->setText(QCoreApplication::translate("MainWindow", "Trainingstracker", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
