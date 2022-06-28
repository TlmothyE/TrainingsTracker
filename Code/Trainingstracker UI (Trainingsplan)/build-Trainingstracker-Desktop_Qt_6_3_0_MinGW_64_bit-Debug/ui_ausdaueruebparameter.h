/********************************************************************************
** Form generated from reading UI file 'ausdaueruebparameter.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUSDAUERUEBPARAMETER_H
#define UI_AUSDAUERUEBPARAMETER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_AusdauerUebParameter
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *Soll;
    QDoubleSpinBox *doubleSpinBox;

    void setupUi(QDialog *AusdauerUebParameter)
    {
        if (AusdauerUebParameter->objectName().isEmpty())
            AusdauerUebParameter->setObjectName(QString::fromUtf8("AusdauerUebParameter"));
        AusdauerUebParameter->resize(230, 185);
        AusdauerUebParameter->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color: rgb(69, 69, 69);\n"
"	font-family: \"Trebuchet MS\";\n"
"	text-align: center;\n"
"}\n"
"\n"
""));
        buttonBox = new QDialogButtonBox(AusdauerUebParameter);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(50, 145, 130, 30));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        Soll = new QLabel(AusdauerUebParameter);
        Soll->setObjectName(QString::fromUtf8("Soll"));
        Soll->setGeometry(QRect(45, 75, 51, 16));
        doubleSpinBox = new QDoubleSpinBox(AusdauerUebParameter);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setGeometry(QRect(130, 71, 62, 22));

        retranslateUi(AusdauerUebParameter);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, AusdauerUebParameter, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, AusdauerUebParameter, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(AusdauerUebParameter);
    } // setupUi

    void retranslateUi(QDialog *AusdauerUebParameter)
    {
        AusdauerUebParameter->setWindowTitle(QCoreApplication::translate("AusdauerUebParameter", "Dialog", nullptr));
        Soll->setText(QCoreApplication::translate("AusdauerUebParameter", "Soll-Dauer:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AusdauerUebParameter: public Ui_AusdauerUebParameter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUSDAUERUEBPARAMETER_H
