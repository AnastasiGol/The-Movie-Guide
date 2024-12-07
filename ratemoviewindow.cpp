#include "ratemoviewindow.h"
#include "movielistwindow.h"
#include "ui_ratemoviewindow.h"
#include"database.h"
#include "infomoviewindow.h".h"

rateMovieWindow::rateMovieWindow(Movie ratedMovie, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::rateMovieWindow), m_ratedMovie(ratedMovie)
{
    ui->setupUi(this);
    ui->titleLabel->setText(m_ratedMovie.name);
    ui->ratingSlider->setRange(0, 10);
    ui->ratingSlider->setTickInterval(1);
}

rateMovieWindow::~rateMovieWindow()
{
    delete ui;
}

void rateMovieWindow::on_saveButton_clicked()
{
    Database *db = new Database();
    int movie_rating = ui->sliderLabel->text().toInt();
    db->addQuery(DBName[static_cast<int>(DBType::watchedDb)],m_ratedMovie.id ,movie_rating);
    this->close();
    infoMovieWindow w(m_ratedMovie);
    w.close();
}


void rateMovieWindow::on_ratingSlider_valueChanged(int value)
{
    ui->sliderLabel->setText(QString::number(value));
}

