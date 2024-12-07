#ifndef INFOMOVIEWINDOW_H
#define INFOMOVIEWINDOW_H

#include <QDialog>
#include"database.h"

namespace Ui {
class infoMovieWindow;
}

class infoMovieWindow : public QDialog
{
    Q_OBJECT

public:
    explicit infoMovieWindow(struct Movie selectedMovie, QWidget *parent = nullptr);
    ~infoMovieWindow();


private slots:
    void on_favouriteButton_clicked();
    void addToDB(DBType type);
    void on_willWatchButton_clicked();
    void on_watchedButton_clicked();

private:
    Ui::infoMovieWindow *ui;
    Movie m_selectedMovie;
};

#endif // INFOMOVIEWINDOW_H
