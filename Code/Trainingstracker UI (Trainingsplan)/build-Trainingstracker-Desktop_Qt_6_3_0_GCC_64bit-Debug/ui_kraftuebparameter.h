/********************************************************************************
** Form generated from reading UI file 'kraftuebparameter.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KRAFTUEBPARAMETER_H
#define UI_KRAFTUEBPARAMETER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_KraftUebParameter
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *Gewicht;
    QLabel *Saetze;
    QLabel *Soll;
    QDoubleSpinBox *doubleSpinBox_Gewicht;
    QSpinBox *spinBox_Saetze;
    QSpinBox *spinBox_Soll;

    void setupUi(QDialog *KraftUebParameter)
    {
        if (KraftUebParameter->objectName().isEmpty())
            KraftUebParameter->setObjectName(QString::fromUtf8("KraftUebParameter"));
        KraftUebParameter->resize(230, 185);
        KraftUebParameter->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color: rgb(69, 69, 69);\n"
"	font-family: \"Trebuchet MS\";\n"
"	text-align: center;\n"
"}\n"
"\n"
""));
        buttonBox = new QDialogButtonBox(KraftUebParameter);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(50, 145, 130, 30));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        Gewicht = new QLabel(KraftUebParameter);
        Gewicht->setObjectName(QString::fromUtf8("Gewicht"));
        Gewicht->setGeometry(QRect(30, 25, 81, 31));
        Saetze = new QLabel(KraftUebParameter);
        Saetze->setObjectName(QString::fromUtf8("Saetze"));
        Saetze->setGeometry(QRect(30, 70, 37, 12));
        Soll = new QLabel(KraftUebParameter);
        Soll->setObjectName(QString::fromUtf8("Soll"));
        Soll->setGeometry(QRect(30, 100, 91, 16));
        doubleSpinBox_Gewicht = new QDoubleSpinBox(KraftUebParameter);
        doubleSpinBox_Gewicht->setObjectName(QString::fromUtf8("doubleSpinBox_Gewicht"));
        doubleSpinBox_Gewicht->setGeometry(QRect(150, 30, 62, 22));
        spinBox_Saetze = new QSpinBox(KraftUebParameter);
        spinBox_Saetze->setObjectName(QString::fromUtf8("spinBox_Saetze"));
        spinBox_Saetze->setGeometry(QRect(150, 60, 61, 22));
        spinBox_Soll = new QSpinBox(KraftUebParameter);
        spinBox_Soll->setObjectName(QString::fromUtf8("spinBox_Soll"));
        spinBox_Soll->setGeometry(QRect(150, 90, 61, 22));

        retranslateUi(KraftUebParameter);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, KraftUebParameter, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, KraftUebParameter, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(KraftUebParameter);
    } // setupUi

    void retranslateUi(QDialog *KraftUebParameter)
    {
        KraftUebParameter->setWindowTitle(QCoreApplication::translate("KraftUebParameter", "Dialog", nullptr));
        Gewicht->setText(QCoreApplication::translate("KraftUebParameter", "Gewicht:", nullptr));
        Saetze->setText(QCoreApplication::translate("KraftUebParameter", "S\303\244tze:", nullptr));
        Soll->setText(QCoreApplication::translate("KraftUebParameter", "Soll Wiederholungen:", nullptr));
        doubleSpinBox_Gewicht->setSuffix(QCoreApplication::translate("KraftUebParameter", " kg", nullptr));
    } // retranslateUi

};

namespace Ui {
    class KraftUebParameter: public Ui_KraftUebParameter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KRAFTUEBPARAMETER_H
