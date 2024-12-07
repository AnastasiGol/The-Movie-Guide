/********************************************************************************
** Form generated from reading UI file 'ratemoviewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RATEMOVIEWINDOW_H
#define UI_RATEMOVIEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>

QT_BEGIN_NAMESPACE

class Ui_rateMovieWindow
{
public:
    QSlider *ratingSlider;
    QLabel *titleLabel;
    QLabel *label;
    QPushButton *saveButton;
    QLabel *sliderLabel;

    void setupUi(QDialog *rateMovieWindow)
    {
        if (rateMovieWindow->objectName().isEmpty())
            rateMovieWindow->setObjectName("rateMovieWindow");
        rateMovieWindow->resize(400, 240);
        rateMovieWindow->setMinimumSize(QSize(400, 240));
        rateMovieWindow->setMaximumSize(QSize(400, 240));
        ratingSlider = new QSlider(rateMovieWindow);
        ratingSlider->setObjectName("ratingSlider");
        ratingSlider->setGeometry(QRect(20, 120, 160, 16));
        ratingSlider->setOrientation(Qt::Orientation::Horizontal);
        ratingSlider->setTickPosition(QSlider::TickPosition::TicksAbove);
        ratingSlider->setTickInterval(10);
        titleLabel = new QLabel(rateMovieWindow);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setGeometry(QRect(10, 20, 361, 31));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        titleLabel->setFont(font);
        label = new QLabel(rateMovieWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 80, 271, 31));
        QFont font1;
        font1.setPointSize(12);
        font1.setItalic(true);
        label->setFont(font1);
        saveButton = new QPushButton(rateMovieWindow);
        saveButton->setObjectName("saveButton");
        saveButton->setGeometry(QRect(20, 170, 121, 31));
        sliderLabel = new QLabel(rateMovieWindow);
        sliderLabel->setObjectName("sliderLabel");
        sliderLabel->setGeometry(QRect(200, 100, 61, 51));
        QFont font2;
        font2.setPointSize(15);
        sliderLabel->setFont(font2);

        retranslateUi(rateMovieWindow);

        QMetaObject::connectSlotsByName(rateMovieWindow);
    } // setupUi

    void retranslateUi(QDialog *rateMovieWindow)
    {
        rateMovieWindow->setWindowTitle(QCoreApplication::translate("rateMovieWindow", "Rating", nullptr));
        titleLabel->setText(QCoreApplication::translate("rateMovieWindow", "Name", nullptr));
        label->setText(QCoreApplication::translate("rateMovieWindow", "Rate the movie from 0 to 10:", nullptr));
        saveButton->setText(QCoreApplication::translate("rateMovieWindow", "Save", nullptr));
        sliderLabel->setText(QCoreApplication::translate("rateMovieWindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class rateMovieWindow: public Ui_rateMovieWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RATEMOVIEWINDOW_H
