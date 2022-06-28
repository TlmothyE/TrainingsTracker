/********************************************************************************
** Form generated from reading UI file 'uebung.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UEBUNG_H
#define UI_UEBUNG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Uebung
{
public:
    QDialogButtonBox *buttonBox;
    QTabWidget *tabWidget;
    QWidget *widget;
    QListWidget *listWidget;
    QPushButton *pushButton_KraftHinzu;
    QWidget *tab_2;
    QListWidget *listWidget_2;
    QPushButton *pushButton_AusdauerHinzu;

    void setupUi(QDialog *Uebung)
    {
        if (Uebung->objectName().isEmpty())
            Uebung->setObjectName(QString::fromUtf8("Uebung"));
        Uebung->resize(800, 600);
        Uebung->setStyleSheet(QString::fromUtf8("#Uebung {\n"
"	background-color: rgb(89,89,89);\n"
"}"));
        buttonBox = new QDialogButtonBox(Uebung);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(690, 280, 81, 51));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        tabWidget = new QTabWidget(Uebung);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(20, 30, 621, 541));
        tabWidget->setIconSize(QSize(16, 16));
        widget = new QWidget();
        widget->setObjectName(QString::fromUtf8("widget"));
        listWidget = new QListWidget(widget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(-5, 41, 621, 511));
        pushButton_KraftHinzu = new QPushButton(widget);
        pushButton_KraftHinzu->setObjectName(QString::fromUtf8("pushButton_KraftHinzu"));
        pushButton_KraftHinzu->setGeometry(QRect(230, 10, 151, 20));
        tabWidget->addTab(widget, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        listWidget_2 = new QListWidget(tab_2);
        listWidget_2->setObjectName(QString::fromUtf8("listWidget_2"));
        listWidget_2->setGeometry(QRect(0, 40, 621, 511));
        pushButton_AusdauerHinzu = new QPushButton(tab_2);
        pushButton_AusdauerHinzu->setObjectName(QString::fromUtf8("pushButton_AusdauerHinzu"));
        pushButton_AusdauerHinzu->setGeometry(QRect(230, 10, 151, 20));
        tabWidget->addTab(tab_2, QString());

        retranslateUi(Uebung);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Uebung, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Uebung, qOverload<>(&QDialog::reject));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Uebung);
    } // setupUi

    void retranslateUi(QDialog *Uebung)
    {
        Uebung->setWindowTitle(QCoreApplication::translate("Uebung", "Dialog", nullptr));
        pushButton_KraftHinzu->setText(QCoreApplication::translate("Uebung", "neue Kraft\303\274bung hinzuf\303\274gen", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(widget), QCoreApplication::translate("Uebung", "Kraft\303\274bungen", nullptr));
        pushButton_AusdauerHinzu->setText(QCoreApplication::translate("Uebung", "neue Ausdauer\303\274bung hinzuf\303\274gen", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Uebung", "Ausdauer\303\274bungen", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Uebung: public Ui_Uebung {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UEBUNG_H
