/********************************************************************************
** Form generated from reading UI file 'movielistwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOVIELISTWINDOW_H
#define UI_MOVIELISTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_movieListWindow
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTableView *moviesTable;

    void setupUi(QDialog *movieListWindow)
    {
        if (movieListWindow->objectName().isEmpty())
            movieListWindow->setObjectName("movieListWindow");
        movieListWindow->resize(1006, 622);
        verticalLayout = new QVBoxLayout(movieListWindow);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(movieListWindow);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(30);
        font.setBold(true);
        label->setFont(font);

        verticalLayout->addWidget(label);

        moviesTable = new QTableView(movieListWindow);
        moviesTable->setObjectName("moviesTable");
        moviesTable->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        moviesTable->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
        moviesTable->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        moviesTable->verticalHeader()->setMinimumSectionSize(18);
        moviesTable->verticalHeader()->setDefaultSectionSize(25);

        verticalLayout->addWidget(moviesTable);


        retranslateUi(movieListWindow);

        QMetaObject::connectSlotsByName(movieListWindow);
    } // setupUi

    void retranslateUi(QDialog *movieListWindow)
    {
        movieListWindow->setWindowTitle(QCoreApplication::translate("movieListWindow", "Find", nullptr));
        label->setText(QCoreApplication::translate("movieListWindow", "Find", nullptr));
    } // retranslateUi

};

namespace Ui {
    class movieListWindow: public Ui_movieListWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOVIELISTWINDOW_H
