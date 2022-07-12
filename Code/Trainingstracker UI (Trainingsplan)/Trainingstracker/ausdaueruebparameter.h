#ifndef AUSDAUERUEBPARAMETER_H
#define AUSDAUERUEBPARAMETER_H

#include <QDialog>

namespace Ui {
class AusdauerUebParameter;
}

class AusdauerUebParameter : public QDialog
{
    Q_OBJECT

public:
    explicit AusdauerUebParameter(QWidget *parent = nullptr);
    ~AusdauerUebParameter();

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::AusdauerUebParameter *ui;
};

#endif // AUSDAUERUEBPARAMETER_H
