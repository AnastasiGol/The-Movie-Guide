#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "myfilmswindow.h"
#include "movielistwindow.h"
#include<QPixmap>
//#include"database.cpp"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap tapePix(":/images/tape2.png");
    QPixmap tape2Pix(":/images/tape1.png");
    QPixmap titlePix(":/images/mainTitle.png");
    ui->tapeImage->setPixmap(tapePix);
    ui->titleImage->setPixmap(titlePix);
    ui->tape2Image->setPixmap(tape2Pix);





}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    myFilmsWindow window;
    //window.setModel(true);
    window.exec();

}




void MainWindow::on_findButton_clicked()
{
    movieListWindow window;
    window.exec();
}

