#include "sublistwindow.h"
#include "ui_sublistwindow.h"
#include <QSqlTableModel>
#include <QSqlDatabase>
#include"database.h"
#include "movielistwindow.h"



sublistWindow::sublistWindow(DBType type, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::sublistWindow),
    m_dbtype(type)
{
    ui->setupUi(this);
    QString tableName = DBName[static_cast<int>(type)];
    if(type == DBType::favouriteDb){
        ui->nameLabel->setText("Your favourite movies");
    }else if(type == DBType::willWatchDb){
        ui->nameLabel->setText("Movies that you plan to watch: ");
    }
    else if(type == DBType::watchedDb){
        ui->nameLabel->setText("Movies that you have already watched: ");
    }
    Database *db = new Database();
    QSqlTableModel *model = new QSqlTableModel(this, db->database);
    model->setTable("movies");
    model->setFilter(QString("id IN (SELECT main_id FROM %1);").arg(tableName));
    if(!model->select()){
        qDebug()<<model->lastError().text();
    }

    movieListWindow::moviesHeader header;
    model->setHeaderData(1, Qt::Horizontal, (header.name));
    model->setHeaderData(2, Qt::Horizontal, (header.year));
    model->setHeaderData(3, Qt::Horizontal, (header.duration));
    model->setHeaderData(4, Qt::Horizontal, (header.rating));
    model->setHeaderData(5, Qt::Horizontal, (header.genre));

    ui->subMoviesTable->setModel(model);
    ui->subMoviesTable->hideColumn(0);
    ui->subMoviesTable->hideColumn(6);
    ui->subMoviesTable->hideColumn(7);
    ui->subMoviesTable->resizeColumnsToContents();
   // connect(ui->subMoviesTable, &QTableView::clicked, this, &sublistWindow::onRowSelected);
    //connect(ui->removeButton,&QPushButton::clicked, this, )

}

sublistWindow::~sublistWindow()
{
    delete ui;
}

void sublistWindow::on_removeButton_clicked()
{
    Database *db = new Database();
    QModelIndex index = ui->subMoviesTable->currentIndex();
    int row = index.row();
    QSqlTableModel *model = qobject_cast<QSqlTableModel *>(ui->subMoviesTable->model());

    int movie_id = model->data(model->index(row, 0)).toInt();
    db->delQuery(DBName[static_cast<int>(m_dbtype)], movie_id);
    this->close();



}

