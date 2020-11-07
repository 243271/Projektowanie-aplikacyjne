#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QMessageBox>
#include <QtGui>

char po1, po2, po3, po4, po5, po6, po7, po8, po9;
char kto;

void sprawdz()
{

}



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
   po1='n';
   po2='n';
   po3='n';
   po4='n';
   po5='n';
   po6='n';
   po7='n';
   po8='n';
   po9='n';
   kto='x';
   ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    ui-> p1-> setEnabled(true);
    ui-> p2-> setEnabled(true);
    ui-> p3-> setEnabled(true);
    ui-> p4-> setEnabled(true);
    ui-> p5-> setEnabled(true);
    ui-> p6-> setEnabled(true);
    ui-> p7-> setEnabled(true);
    ui-> p8-> setEnabled(true);
    ui-> p9-> setEnabled(false);

    delete ui;
}


void MainWindow::on_b1_clicked()
{
    if (po1=='n')
        {
        if(kto=='x')
        ui-> p1 -> setPixmap(QPixmap(":/img/x/bmp"));
        po1='x';
        kto='o';
        ui -> Turagracza -> setPixmap(QPixmap(":/img/osmall.bmp"));
        }
    else
    {
        ui-> p1 ->setPixmap(QPixmap(":/img/o/bmp"));
        po1='o';
        kto='x';
        ui-> Turagracza -> setPixmap(QPixmap(":/img/xsmall.bmp"));
    }
    ui -> b1 -> setEnabled(false);
    sprawdz();
}
