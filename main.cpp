#include "mainwindow.h"
#include"database.h"
#include "datafetcher.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Database *db = new Database();
    //DataFetcher *fetcher = new DataFetcher(db);

    MainWindow w;
    w.show();
    return a.exec();
}
