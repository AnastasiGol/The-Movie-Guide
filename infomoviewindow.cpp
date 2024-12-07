#include "infomoviewindow.h"
#include "myfilmswindow.h"
#include "ui_infomoviewindow.h"
#include"database.h"
#include <QString>
#include <QSqlTableModel>
#include <QSqlDatabase>
#include "ratemoviewindow.h"

infoMovieWindow::infoMovieWindow(Movie selectedMovie, QWidget *parent) //имя конструктора класса
    : QDialog(parent)
    , ui(new Ui::infoMovieWindow)
    ,m_selectedMovie(selectedMovie)
{
    ui->setupUi(this);
    ui->nameLabel->setText(selectedMovie.name);
    ui->yearLabel_3->setText(QString::number(selectedMovie.year));
    ui->durationLabel_3->setText(QString::number(selectedMovie.duration));
    ui->ratingLabel_3->setText(QString::number(selectedMovie.rating));
    ui->genreLabel_3->setText(selectedMovie.genre);
    ui->languageLabel_2->setText(selectedMovie.original_language);
    ui->descriptionLabel2->setText(selectedMovie.description);

    int movie_id;
    movie_id = m_selectedMovie.id;
    Database *db = new Database();
    if(!db->isExists(DBName[static_cast<int>(DBType::favouriteDb)], movie_id )){
        ui->favouriteButton->setEnabled(true);
    }
    if(!db->isExists(DBName[static_cast<int>(DBType::willWatchDb)], movie_id )){
        ui->willWatchButton->setEnabled(true);
    }
    if(!db->isExists(DBName[static_cast<int>(DBType::watchedDb)], movie_id )){
        ui->watchedButton->setEnabled(true);
    }else{
        int movie_rating = db->getRating(DBName[static_cast<int>(DBType::watchedDb)], m_selectedMovie.id);
        ui->userRaitingLabel->setText("Your rating: " + QString::number(movie_rating));

    }
}

infoMovieWindow::~infoMovieWindow()
{
    delete ui;
}

void infoMovieWindow::addToDB(DBType type){
    Database *db = new Database();
    int movie_id;
    movie_id = m_selectedMovie.id;
    if(!db->isExists(DBName[static_cast<int>(type)], movie_id )){
        if(!db->addQuery(DBName[static_cast<int>(type)],movie_id)){
             qDebug()<<"smth went wrong";
        }else{
            qDebug()<<"already exists";
        }
    }
    this->close();
}



void infoMovieWindow::on_favouriteButton_clicked()
{
    addToDB(DBType::favouriteDb);

}


void infoMovieWindow::on_willWatchButton_clicked()
{
    addToDB(DBType::willWatchDb);

}




void infoMovieWindow::on_watchedButton_clicked()
{
    rateMovieWindow window(m_selectedMovie);
    window.exec();
}

