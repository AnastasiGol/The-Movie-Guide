#ifndef RATEMOVIEWINDOW_H
#define RATEMOVIEWINDOW_H

#include "database.h"
#include <QDialog>

namespace Ui {
class rateMovieWindow;
}

class rateMovieWindow : public QDialog
{
    Q_OBJECT

public:
    explicit rateMovieWindow(Movie ratedMovie, QWidget *parent = nullptr);
    ~rateMovieWindow();

private slots:
    void on_saveButton_clicked();

    void on_ratingSlider_valueChanged(int value);

private:
    Ui::rateMovieWindow *ui;
    Movie m_ratedMovie;
};

#endif // RATEMOVIEWINDOW_H
