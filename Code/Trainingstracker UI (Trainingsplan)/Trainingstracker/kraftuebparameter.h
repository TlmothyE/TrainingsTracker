#ifndef KRAFTUEBPARAMETER_H
#define KRAFTUEBPARAMETER_H

#include <QDialog>

namespace Ui {
class KraftUebParameter;
}

class KraftUebParameter : public QDialog
{
    Q_OBJECT

public:
    explicit KraftUebParameter(QWidget *parent = nullptr);
    ~KraftUebParameter();

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::KraftUebParameter *ui;
};

#endif // KRAFTUEBPARAMETER_H
