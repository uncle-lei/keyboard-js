#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "js.h"
#include "js_global.h"
#include "keyboard.h"
#include "keyboard_global.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void messegebox();

private:
    Ui::MainWindow *ui;
    Js *j = new Js(this);
};

#endif // MAINWINDOW_H
