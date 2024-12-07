#include "myfilmswindow.h"
#include "ui_myfilmswindow.h"
#include "sublistwindow.h"
#include"database.h"

myFilmsWindow::myFilmsWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::myFilmsWindow)
{
    ui->setupUi(this);
}

myFilmsWindow::~myFilmsWindow()
{
    delete ui;
}




void myFilmsWindow::on_favouriteButton_clicked()
{
    sublistWindow window(DBType::favouriteDb);
    window.exec();
}


void myFilmsWindow::on_willWatchButton_clicked()
{
    sublistWindow window(DBType::willWatchDb);
    window.exec();
}



void myFilmsWindow::on_watchedButton_clicked()
{
    sublistWindow window(DBType::watchedDb);
    window.exec();
}


