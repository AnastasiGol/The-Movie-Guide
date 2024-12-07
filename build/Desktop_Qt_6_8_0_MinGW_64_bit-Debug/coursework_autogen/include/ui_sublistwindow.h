/********************************************************************************
** Form generated from reading UI file 'sublistwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBLISTWINDOW_H
#define UI_SUBLISTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_sublistWindow
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *nameLabel;
    QTableView *subMoviesTable;
    QPushButton *removeButton;

    void setupUi(QDialog *sublistWindow)
    {
        if (sublistWindow->objectName().isEmpty())
            sublistWindow->setObjectName("sublistWindow");
        sublistWindow->resize(470, 280);
        sublistWindow->setMinimumSize(QSize(470, 280));
        sublistWindow->setMaximumSize(QSize(470, 280));
        verticalLayout = new QVBoxLayout(sublistWindow);
        verticalLayout->setObjectName("verticalLayout");
        nameLabel = new QLabel(sublistWindow);
        nameLabel->setObjectName("nameLabel");
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        nameLabel->setFont(font);

        verticalLayout->addWidget(nameLabel);

        subMoviesTable = new QTableView(sublistWindow);
        subMoviesTable->setObjectName("subMoviesTable");
        subMoviesTable->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        subMoviesTable->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
        subMoviesTable->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);

        verticalLayout->addWidget(subMoviesTable);

        removeButton = new QPushButton(sublistWindow);
        removeButton->setObjectName("removeButton");

        verticalLayout->addWidget(removeButton);


        retranslateUi(sublistWindow);

        QMetaObject::connectSlotsByName(sublistWindow);
    } // setupUi

    void retranslateUi(QDialog *sublistWindow)
    {
        sublistWindow->setWindowTitle(QCoreApplication::translate("sublistWindow", "Dialog", nullptr));
        nameLabel->setText(QCoreApplication::translate("sublistWindow", "Name", nullptr));
        removeButton->setText(QCoreApplication::translate("sublistWindow", "Remove", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sublistWindow: public Ui_sublistWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBLISTWINDOW_H
