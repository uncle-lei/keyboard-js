#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Keyboard *k = new Keyboard(ui->centralWidget);
    k->Init();
    k->setGeometry(20,30,k->width(),k->height());
    k->bindWidget(ui->textEdit);
    connect(j,SIGNAL(mysignal()),this,SLOT(messegebox()));
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow ::messegebox()
{
    QMessageBox::information(NULL, "Warning", "Something Error", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
}

void MainWindow::on_pushButton_clicked()
{
//    j.calculator(ui->textEdit->toPlainText());
//    ui->lineEdit->setText(j.calculator("ans0"));
//    ui->lineEdit_2->setText(j.calculator("ans1"));
//    ui->lineEdit_3->setText(j.calculator("ans2"));

//    engine.inputScript("uuuuuyyyyy=33");
//    engine.process();
//    engine.getVariant("ans0");
//    engine.getVariant("ans1");
//    engine.getVariant("ans2");
       ui->lineEdit->setText(j->getVariant("ans0"));
       ui->lineEdit_2->setText(j->getVariant("ans1"));
       ui->lineEdit_3->setText(j->getVariant("ans2"));
}

void MainWindow::on_pushButton_2_clicked()
{
    j->inputscript(ui->textEdit->toPlainText());
    ui->textEdit_2->setText(j->getscript());
}

void MainWindow::on_pushButton_3_clicked()
{
    j->processing(j->getscript());
}



