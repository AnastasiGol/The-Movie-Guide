#ifndef MOVIELISTWINDOW_H
#define MOVIELISTWINDOW_H

#include <QDialog>
#include <QSqlTableModel>
#include <QStatusBar>
#include "infomoviewindow.h"

namespace Ui {
class movieListWindow;
}

class movieListWindow : public QDialog
{
    Q_OBJECT

public:
    explicit movieListWindow(QWidget *parent = nullptr);
    ~movieListWindow();
    //void closeEvent(QCloseEvent *event);

    struct moviesHeader{
        const QString name = "Movie name";
        const QString year = "Year";
        const QString duration = "Duraion";
        const QString rating = "Rating";
        const QString genre = "Genre";
        const QString original_language = "Language";
        const QString description = "Description";
    };

signals:
    void windowClosed();

private:
    infoMovieWindow *window;

private slots:
    void onRowSelected(const QModelIndex index);

private:
    Ui::movieListWindow *ui;

};

#endif // MOVIELISTWINDOW_H
