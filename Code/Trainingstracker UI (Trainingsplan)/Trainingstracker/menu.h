#ifndef MENU_H
#define MENU_H

#include <QMainWindow>
#include "training.h"
#include "../../client/source/user.h"

namespace Ui {
class Menu;
}

class Menu : public QMainWindow
{
    Q_OBJECT

public:
    explicit Menu(int userId, QString token, QWidget *parent = nullptr);
    Menu *objmenu;
    Training *objtraining;
    ~Menu();

private slots:
    void on_pushButton_Training_clicked();

    void on_pushButton_Abmelden_clicked();

    void on_pushButton_Body_clicked();

private:
    Ui::Menu *ui;
    user user;


};

#endif // MENU_H
