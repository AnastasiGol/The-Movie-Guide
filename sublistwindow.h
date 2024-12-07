#ifndef SUBLISTWINDOW_H
#define SUBLISTWINDOW_H

#include <QDialog>
#include "database.h"


namespace Ui {
class sublistWindow;
}

class sublistWindow : public QDialog
{
    Q_OBJECT

public:
    explicit sublistWindow(DBType type, QWidget *parent = nullptr);
    ~sublistWindow();

private slots:
    void on_pushButton_clicked();

    void on_removeButton_clicked();

private:
    Ui::sublistWindow *ui;
    DBType m_dbtype;
};

#endif // SUBLISTWINDOW_H
