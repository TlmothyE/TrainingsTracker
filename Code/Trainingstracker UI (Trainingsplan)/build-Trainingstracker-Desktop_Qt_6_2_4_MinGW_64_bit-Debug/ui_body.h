/********************************************************************************
** Form generated from reading UI file 'body.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BODY_H
#define UI_BODY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Body
{
public:
    QLabel *Titel;
    QFrame *frame;
    QLabel *Weight;
    QDoubleSpinBox *doubleSpinBox_Weight;
    QFrame *frame_2;
    QLabel *Height;
    QDoubleSpinBox *doubleSpinBox_Height;
    QFrame *frame_3;
    QLabel *Arm;
    QDoubleSpinBox *doubleSpinBox_Arm;
    QFrame *frame_4;
    QLabel *Brust;
    QDoubleSpinBox *doubleSpinBox_Brust;
    QFrame *frame_5;
    QLabel *Huefte;
    QDoubleSpinBox *doubleSpinBox_Huefte;
    QFrame *frame_6;
    QLabel *Oberschenkel;
    QDoubleSpinBox *doubleSpinBox_Oberschenkel;
    QFrame *frame_7;
    QLabel *Waden;
    QDoubleSpinBox *doubleSpinBox_Waden;
    QPushButton *pushButton_BMI;
    QPushButton *pushButton_Speichern;
    QPushButton *pushButton_Back;

    void setupUi(QDialog *Body)
    {
        if (Body->objectName().isEmpty())
            Body->setObjectName(QString::fromUtf8("Body"));
        Body->resize(800, 480);
        Body->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color: rgb(61,61,61);\n"
"	font-family: \"Trebuchet MS\";\n"
"	color: rgb(174, 174, 174);\n"
"	}\n"
"\n"
"#Titel {\n"
"	font-size: 12pt;\n"
"	background-color: #761811;\n"
"	font-weight: bold;\n"
"	padding: 1px;\n"
"	border-radius: 8px;\n"
"	color: white;\n"
"}\n"
"\n"
"#pushButton_BMI{\n"
"	background-color:  #761811;\n"
"	border-radius: 5px;\n"
"}\n"
"\n"
"#pushButton_Speichern{\n"
"	background-color: rgb(85,85,85);\n"
"	border: 2px solid rgb(43,43,43);\n"
"	border-radius: 5px;\n"
"   font-size: 6pt;\n"
"}\n"
"\n"
"#pushButton_Back{\n"
"	background-color:  #761811;\n"
"	border-radius: 5px;\n"
"}\n"
"\n"
"QdoubleSpinBox{\n"
"	color: rgb(174, 174, 174);\n"
"	background-color: rgb(59, 59, 59);\n"
"}"));
        Titel = new QLabel(Body);
        Titel->setObjectName(QString::fromUtf8("Titel"));
        Titel->setGeometry(QRect(320, 20, 131, 31));
        frame = new QFrame(Body);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(240, 60, 321, 41));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        Weight = new QLabel(frame);
        Weight->setObjectName(QString::fromUtf8("Weight"));
        Weight->setGeometry(QRect(20, 10, 81, 21));
        doubleSpinBox_Weight = new QDoubleSpinBox(frame);
        doubleSpinBox_Weight->setObjectName(QString::fromUtf8("doubleSpinBox_Weight"));
        doubleSpinBox_Weight->setGeometry(QRect(221, 10, 81, 22));
        frame_2 = new QFrame(Body);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(240, 110, 321, 41));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        Height = new QLabel(frame_2);
        Height->setObjectName(QString::fromUtf8("Height"));
        Height->setGeometry(QRect(20, 5, 91, 31));
        doubleSpinBox_Height = new QDoubleSpinBox(frame_2);
        doubleSpinBox_Height->setObjectName(QString::fromUtf8("doubleSpinBox_Height"));
        doubleSpinBox_Height->setGeometry(QRect(221, 10, 81, 22));
        frame_3 = new QFrame(Body);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(240, 160, 321, 41));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        Arm = new QLabel(frame_3);
        Arm->setObjectName(QString::fromUtf8("Arm"));
        Arm->setGeometry(QRect(20, 10, 81, 21));
        doubleSpinBox_Arm = new QDoubleSpinBox(frame_3);
        doubleSpinBox_Arm->setObjectName(QString::fromUtf8("doubleSpinBox_Arm"));
        doubleSpinBox_Arm->setGeometry(QRect(221, 10, 81, 22));
        frame_4 = new QFrame(Body);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setGeometry(QRect(240, 210, 321, 41));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        Brust = new QLabel(frame_4);
        Brust->setObjectName(QString::fromUtf8("Brust"));
        Brust->setGeometry(QRect(20, 5, 91, 31));
        doubleSpinBox_Brust = new QDoubleSpinBox(frame_4);
        doubleSpinBox_Brust->setObjectName(QString::fromUtf8("doubleSpinBox_Brust"));
        doubleSpinBox_Brust->setGeometry(QRect(221, 10, 81, 22));
        frame_5 = new QFrame(Body);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setGeometry(QRect(240, 260, 321, 41));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        Huefte = new QLabel(frame_5);
        Huefte->setObjectName(QString::fromUtf8("Huefte"));
        Huefte->setGeometry(QRect(20, 10, 91, 21));
        doubleSpinBox_Huefte = new QDoubleSpinBox(frame_5);
        doubleSpinBox_Huefte->setObjectName(QString::fromUtf8("doubleSpinBox_Huefte"));
        doubleSpinBox_Huefte->setGeometry(QRect(221, 10, 81, 22));
        frame_6 = new QFrame(Body);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setGeometry(QRect(240, 310, 321, 41));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        Oberschenkel = new QLabel(frame_6);
        Oberschenkel->setObjectName(QString::fromUtf8("Oberschenkel"));
        Oberschenkel->setGeometry(QRect(20, 10, 111, 21));
        doubleSpinBox_Oberschenkel = new QDoubleSpinBox(frame_6);
        doubleSpinBox_Oberschenkel->setObjectName(QString::fromUtf8("doubleSpinBox_Oberschenkel"));
        doubleSpinBox_Oberschenkel->setGeometry(QRect(221, 10, 81, 22));
        frame_7 = new QFrame(Body);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setGeometry(QRect(240, 360, 321, 41));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        Waden = new QLabel(frame_7);
        Waden->setObjectName(QString::fromUtf8("Waden"));
        Waden->setGeometry(QRect(20, 10, 81, 21));
        doubleSpinBox_Waden = new QDoubleSpinBox(frame_7);
        doubleSpinBox_Waden->setObjectName(QString::fromUtf8("doubleSpinBox_Waden"));
        doubleSpinBox_Waden->setGeometry(QRect(221, 10, 81, 22));
        pushButton_BMI = new QPushButton(Body);
        pushButton_BMI->setObjectName(QString::fromUtf8("pushButton_BMI"));
        pushButton_BMI->setGeometry(QRect(349, 417, 101, 21));
        pushButton_Speichern = new QPushButton(Body);
        pushButton_Speichern->setObjectName(QString::fromUtf8("pushButton_Speichern"));
        pushButton_Speichern->setGeometry(QRect(360, 450, 71, 21));
        pushButton_Back = new QPushButton(Body);
        pushButton_Back->setObjectName(QString::fromUtf8("pushButton_Back"));
        pushButton_Back->setGeometry(QRect(710, 10, 71, 20));

        retranslateUi(Body);

        QMetaObject::connectSlotsByName(Body);
    } // setupUi

    void retranslateUi(QDialog *Body)
    {
        Body->setWindowTitle(QCoreApplication::translate("Body", "Dialog", nullptr));
        Titel->setText(QCoreApplication::translate("Body", "K\303\266rperangaben", nullptr));
        Weight->setText(QCoreApplication::translate("Body", "Gewicht:", nullptr));
        doubleSpinBox_Weight->setSuffix(QCoreApplication::translate("Body", " kg", nullptr));
        Height->setText(QCoreApplication::translate("Body", "K\303\266rpergr\303\266\303\237e:", nullptr));
        doubleSpinBox_Height->setSuffix(QCoreApplication::translate("Body", " m", nullptr));
        Arm->setText(QCoreApplication::translate("Body", "Oberarmumfang:", nullptr));
        doubleSpinBox_Arm->setSuffix(QCoreApplication::translate("Body", " cm", nullptr));
        Brust->setText(QCoreApplication::translate("Body", "Brustumfang:", nullptr));
        doubleSpinBox_Brust->setSuffix(QCoreApplication::translate("Body", " cm", nullptr));
        Huefte->setText(QCoreApplication::translate("Body", "H\303\274ftumfang:", nullptr));
        doubleSpinBox_Huefte->setSuffix(QCoreApplication::translate("Body", " cm", nullptr));
        Oberschenkel->setText(QCoreApplication::translate("Body", "Oberschenkelumfang:", nullptr));
        doubleSpinBox_Oberschenkel->setSuffix(QCoreApplication::translate("Body", " cm", nullptr));
        Waden->setText(QCoreApplication::translate("Body", "Wadenumfang:", nullptr));
        doubleSpinBox_Waden->setSuffix(QCoreApplication::translate("Body", " cm", nullptr));
        pushButton_BMI->setText(QCoreApplication::translate("Body", "BMI berechnen", nullptr));
        pushButton_Speichern->setText(QCoreApplication::translate("Body", "Speichern", nullptr));
        pushButton_Back->setText(QCoreApplication::translate("Body", "Zur\303\274ck", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Body: public Ui_Body {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BODY_H
