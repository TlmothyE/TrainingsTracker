#ifndef BODY_H
#define BODY_H

#include <QDialog>
#include "user.h"
#include <QTimer>

namespace Ui {
class Body;
}

class Body : public QDialog
{
    Q_OBJECT

public:

    explicit Body(int userId, QString token, QWidget *parent = nullptr);
    ~Body();
    void initUser();

private slots:
    void on_pushButton_BMI_clicked();

    void on_pushButton_Speichern_clicked();

    void on_pushButton_Back_clicked();

    void setSpinBoxes();


private:
    Ui::Body *ui;
    User user;
    QTimer *timer;
    bool isSet=false;
};

#endif // BODY_H
