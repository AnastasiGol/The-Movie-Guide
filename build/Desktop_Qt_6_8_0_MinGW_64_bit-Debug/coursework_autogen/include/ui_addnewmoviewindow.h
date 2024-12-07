/********************************************************************************
** Form generated from reading UI file 'addnewmoviewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDNEWMOVIEWINDOW_H
#define UI_ADDNEWMOVIEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addNewMovieWindow
{
public:
    QGroupBox *groupBox;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *nameEdit;
    QLineEdit *yearEdit;
    QLineEdit *durationEdit;
    QLineEdit *ratingEdit;
    QLineEdit *genreEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *addNewMovieWindow)
    {
        if (addNewMovieWindow->objectName().isEmpty())
            addNewMovieWindow->setObjectName("addNewMovieWindow");
        addNewMovieWindow->resize(400, 300);
        groupBox = new QGroupBox(addNewMovieWindow);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(50, 20, 231, 171));
        formLayoutWidget = new QWidget(groupBox);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(10, 40, 201, 113));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName("label_4");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName("label_5");

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        nameEdit = new QLineEdit(formLayoutWidget);
        nameEdit->setObjectName("nameEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, nameEdit);

        yearEdit = new QLineEdit(formLayoutWidget);
        yearEdit->setObjectName("yearEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, yearEdit);

        durationEdit = new QLineEdit(formLayoutWidget);
        durationEdit->setObjectName("durationEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, durationEdit);

        ratingEdit = new QLineEdit(formLayoutWidget);
        ratingEdit->setObjectName("ratingEdit");

        formLayout->setWidget(3, QFormLayout::FieldRole, ratingEdit);

        genreEdit = new QLineEdit(formLayoutWidget);
        genreEdit->setObjectName("genreEdit");

        formLayout->setWidget(4, QFormLayout::FieldRole, genreEdit);

        pushButton = new QPushButton(addNewMovieWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(110, 190, 111, 41));

        retranslateUi(addNewMovieWindow);

        QMetaObject::connectSlotsByName(addNewMovieWindow);
    } // setupUi

    void retranslateUi(QDialog *addNewMovieWindow)
    {
        addNewMovieWindow->setWindowTitle(QCoreApplication::translate("addNewMovieWindow", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("addNewMovieWindow", "add new movie", nullptr));
        label->setText(QCoreApplication::translate("addNewMovieWindow", "Movie name", nullptr));
        label_2->setText(QCoreApplication::translate("addNewMovieWindow", "Year", nullptr));
        label_3->setText(QCoreApplication::translate("addNewMovieWindow", "Duration", nullptr));
        label_4->setText(QCoreApplication::translate("addNewMovieWindow", "Rating", nullptr));
        label_5->setText(QCoreApplication::translate("addNewMovieWindow", "Genre", nullptr));
        pushButton->setText(QCoreApplication::translate("addNewMovieWindow", "Add", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addNewMovieWindow: public Ui_addNewMovieWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNEWMOVIEWINDOW_H
