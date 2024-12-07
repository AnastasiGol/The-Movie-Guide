#ifndef MYFILMSWINDOW_H
#define MYFILMSWINDOW_H

#include <QDialog>

namespace Ui {
class myFilmsWindow;
}

class myFilmsWindow : public QDialog
{
    Q_OBJECT

public:
    explicit myFilmsWindow(QWidget *parent = nullptr);
    ~myFilmsWindow();

private slots:


    void on_favouriteButton_clicked();

    void on_willWatchButton_clicked();

    void on_watchedButton_clicked();

private:
    Ui::myFilmsWindow *ui;
};

#endif // MYFILMSWINDOW_H
