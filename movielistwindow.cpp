#include "movielistwindow.h"
#include "infomoviewindow.h"
#include "ui_movielistwindow.h"
#include <QTableView>
#include <QSqlTableModel>
#include <QSqlDatabase>
#include <QSqlError>
#include <QStatusBar>
#include "database.h"

void movieListWindow::onRowSelected(const QModelIndex index){
    struct Movie selectedMovie;
    int row = index.row();
    QSqlTableModel *model = qobject_cast<QSqlTableModel *>(ui->moviesTable->model());


    selectedMovie.id = model->data(model->index(row, 0)).toInt();
    selectedMovie.name = model->data(model->index(row, 1)).toString();
    selectedMovie.year = model->data(model->index(row, 2)).toInt();
    selectedMovie.duration = model->data(model->index(row, 3)).toInt();
    selectedMovie.rating  = model->data(model->index(row, 4)).toDouble();
    selectedMovie.genre = model->data(model->index(row, 5)).toString();
    selectedMovie.original_language = model->data(model->index(row, 6)).toString();
    selectedMovie.description = model->data(model->index(row,7)).toString();
    this->hide();
    window = new infoMovieWindow(selectedMovie);
    //connect(this, movieListWindow::windowClosed(), window, infoMovieWindow::hide);
    window->show();
    window->exec();





}

movieListWindow::movieListWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::movieListWindow)
{
    ui->setupUi(this);
    moviesHeader header;

    Database *db = new Database();
    QSqlTableModel *model = new QSqlTableModel(this, db->database);
    model->setTable("movies");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    if (!model->select()) {
        qDebug() << "Select query failed:" << model->lastError().text();
    }
    model->setHeaderData(1, Qt::Horizontal, (header.name));
    model->setHeaderData(2, Qt::Horizontal, (header.year));
    model->setHeaderData(3, Qt::Horizontal, (header.duration));
    model->setHeaderData(4, Qt::Horizontal, (header.rating));
    model->setHeaderData(5, Qt::Horizontal, (header.genre));
    model->setHeaderData(6, Qt::Horizontal, (header.original_language));

    ui->moviesTable->setModel(model);
    ui->moviesTable->hideColumn(0);
    ui->moviesTable->hideColumn(6);
    ui->moviesTable->hideColumn(7);
    ui->moviesTable->resizeColumnsToContents();
    connect(ui->moviesTable, &QTableView::clicked, this, &movieListWindow::onRowSelected);


}

movieListWindow::~movieListWindow()
{
    moviesHeader header;
    delete ui;
}



