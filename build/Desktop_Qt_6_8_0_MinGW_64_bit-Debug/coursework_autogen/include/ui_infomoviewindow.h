/********************************************************************************
** Form generated from reading UI file 'infomoviewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFOMOVIEWINDOW_H
#define UI_INFOMOVIEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_infoMovieWindow
{
public:
    QLabel *nameLabel;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *favouriteButton;
    QPushButton *willWatchButton;
    QPushButton *watchedButton;
    QLabel *descriptionLabel;
    QLabel *descriptionLabel2;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *languageLabel;
    QLabel *languageLabel_2;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *genreLabel;
    QLabel *genreLabel_3;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *ratingLabel;
    QLabel *ratingLabel_3;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *durationLabel;
    QLabel *durationLabel_3;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *yearLabel;
    QLabel *yearLabel_3;
    QLabel *userRaitingLabel;

    void setupUi(QDialog *infoMovieWindow)
    {
        if (infoMovieWindow->objectName().isEmpty())
            infoMovieWindow->setObjectName("infoMovieWindow");
        infoMovieWindow->resize(705, 436);
        infoMovieWindow->setMinimumSize(QSize(705, 436));
        infoMovieWindow->setMaximumSize(QSize(705, 436));
        nameLabel = new QLabel(infoMovieWindow);
        nameLabel->setObjectName("nameLabel");
        nameLabel->setGeometry(QRect(20, 10, 441, 51));
        QFont font;
        font.setPointSize(25);
        font.setBold(true);
        nameLabel->setFont(font);
        layoutWidget = new QWidget(infoMovieWindow);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(110, 350, 361, 61));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        favouriteButton = new QPushButton(layoutWidget);
        favouriteButton->setObjectName("favouriteButton");
        favouriteButton->setEnabled(false);
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        favouriteButton->setFont(font1);

        horizontalLayout->addWidget(favouriteButton);

        willWatchButton = new QPushButton(layoutWidget);
        willWatchButton->setObjectName("willWatchButton");
        willWatchButton->setEnabled(false);
        willWatchButton->setFont(font1);

        horizontalLayout->addWidget(willWatchButton);

        watchedButton = new QPushButton(layoutWidget);
        watchedButton->setObjectName("watchedButton");
        watchedButton->setEnabled(false);
        watchedButton->setFont(font1);

        horizontalLayout->addWidget(watchedButton);

        descriptionLabel = new QLabel(infoMovieWindow);
        descriptionLabel->setObjectName("descriptionLabel");
        descriptionLabel->setGeometry(QRect(290, 70, 131, 16));
        QFont font2;
        font2.setPointSize(15);
        font2.setUnderline(true);
        descriptionLabel->setFont(font2);
        descriptionLabel2 = new QLabel(infoMovieWindow);
        descriptionLabel2->setObjectName("descriptionLabel2");
        descriptionLabel2->setGeometry(QRect(290, 100, 391, 171));
        descriptionLabel2->setFrameShape(QFrame::Shape::Box);
        descriptionLabel2->setWordWrap(true);
        layoutWidget1 = new QWidget(infoMovieWindow);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(30, 170, 151, 22));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 5, 5, 0);
        languageLabel = new QLabel(layoutWidget1);
        languageLabel->setObjectName("languageLabel");
        QFont font3;
        font3.setPointSize(12);
        font3.setUnderline(true);
        languageLabel->setFont(font3);

        horizontalLayout_2->addWidget(languageLabel);

        languageLabel_2 = new QLabel(layoutWidget1);
        languageLabel_2->setObjectName("languageLabel_2");
        QFont font4;
        font4.setPointSize(12);
        font4.setItalic(true);
        font4.setUnderline(false);
        languageLabel_2->setFont(font4);

        horizontalLayout_2->addWidget(languageLabel_2);

        layoutWidget2 = new QWidget(infoMovieWindow);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(30, 200, 211, 81));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        genreLabel = new QLabel(layoutWidget2);
        genreLabel->setObjectName("genreLabel");
        genreLabel->setFont(font3);

        horizontalLayout_3->addWidget(genreLabel);

        genreLabel_3 = new QLabel(layoutWidget2);
        genreLabel_3->setObjectName("genreLabel_3");
        genreLabel_3->setFont(font4);
        genreLabel_3->setWordWrap(true);

        horizontalLayout_3->addWidget(genreLabel_3);

        layoutWidget3 = new QWidget(infoMovieWindow);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(30, 140, 151, 21));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        ratingLabel = new QLabel(layoutWidget3);
        ratingLabel->setObjectName("ratingLabel");
        ratingLabel->setFont(font3);

        horizontalLayout_4->addWidget(ratingLabel);

        ratingLabel_3 = new QLabel(layoutWidget3);
        ratingLabel_3->setObjectName("ratingLabel_3");
        ratingLabel_3->setFont(font4);

        horizontalLayout_4->addWidget(ratingLabel_3);

        layoutWidget4 = new QWidget(infoMovieWindow);
        layoutWidget4->setObjectName("layoutWidget4");
        layoutWidget4->setGeometry(QRect(30, 110, 151, 21));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        durationLabel = new QLabel(layoutWidget4);
        durationLabel->setObjectName("durationLabel");
        durationLabel->setFont(font3);

        horizontalLayout_5->addWidget(durationLabel);

        durationLabel_3 = new QLabel(layoutWidget4);
        durationLabel_3->setObjectName("durationLabel_3");
        durationLabel_3->setFont(font4);

        horizontalLayout_5->addWidget(durationLabel_3);

        layoutWidget5 = new QWidget(infoMovieWindow);
        layoutWidget5->setObjectName("layoutWidget5");
        layoutWidget5->setGeometry(QRect(30, 80, 151, 21));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        yearLabel = new QLabel(layoutWidget5);
        yearLabel->setObjectName("yearLabel");
        yearLabel->setFont(font3);

        horizontalLayout_6->addWidget(yearLabel);

        yearLabel_3 = new QLabel(layoutWidget5);
        yearLabel_3->setObjectName("yearLabel_3");
        yearLabel_3->setFont(font4);

        horizontalLayout_6->addWidget(yearLabel_3);

        userRaitingLabel = new QLabel(infoMovieWindow);
        userRaitingLabel->setObjectName("userRaitingLabel");
        userRaitingLabel->setGeometry(QRect(300, 280, 323, 31));
        QFont font5;
        font5.setPointSize(15);
        font5.setBold(true);
        userRaitingLabel->setFont(font5);

        retranslateUi(infoMovieWindow);

        QMetaObject::connectSlotsByName(infoMovieWindow);
    } // setupUi

    void retranslateUi(QDialog *infoMovieWindow)
    {
        infoMovieWindow->setWindowTitle(QCoreApplication::translate("infoMovieWindow", "Information", nullptr));
        nameLabel->setText(QCoreApplication::translate("infoMovieWindow", "TextLabel", nullptr));
        favouriteButton->setText(QCoreApplication::translate("infoMovieWindow", "Favourite", nullptr));
        willWatchButton->setText(QCoreApplication::translate("infoMovieWindow", "Will watch", nullptr));
        watchedButton->setText(QCoreApplication::translate("infoMovieWindow", "Watched", nullptr));
        descriptionLabel->setText(QCoreApplication::translate("infoMovieWindow", "Description:", nullptr));
        descriptionLabel2->setText(QCoreApplication::translate("infoMovieWindow", "film description", nullptr));
        languageLabel->setText(QCoreApplication::translate("infoMovieWindow", "Language:", nullptr));
        languageLabel_2->setText(QCoreApplication::translate("infoMovieWindow", "value", nullptr));
        genreLabel->setText(QCoreApplication::translate("infoMovieWindow", "Genre:", nullptr));
        genreLabel_3->setText(QCoreApplication::translate("infoMovieWindow", "value", nullptr));
        ratingLabel->setText(QCoreApplication::translate("infoMovieWindow", "Rating:", nullptr));
        ratingLabel_3->setText(QCoreApplication::translate("infoMovieWindow", "value", nullptr));
        durationLabel->setText(QCoreApplication::translate("infoMovieWindow", "Duration:", nullptr));
        durationLabel_3->setText(QCoreApplication::translate("infoMovieWindow", "value", nullptr));
        yearLabel->setText(QCoreApplication::translate("infoMovieWindow", "Year:", nullptr));
        yearLabel_3->setText(QCoreApplication::translate("infoMovieWindow", "value", nullptr));
        userRaitingLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class infoMovieWindow: public Ui_infoMovieWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFOMOVIEWINDOW_H
