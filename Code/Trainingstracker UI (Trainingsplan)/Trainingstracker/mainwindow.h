#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "menu.h"
#include "../../client/source/user.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    MainWindow *objmain;
    Menu *objmenu;
    ~MainWindow();

private slots:
    void on_pushButton_Login_clicked();
    void button_action();

private:
    Ui::MainWindow *ui;
    user user;
};
#endif // MAINWINDOW_H
