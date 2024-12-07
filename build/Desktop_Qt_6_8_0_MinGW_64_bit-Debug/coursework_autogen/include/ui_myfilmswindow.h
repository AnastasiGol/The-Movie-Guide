/********************************************************************************
** Form generated from reading UI file 'myfilmswindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYFILMSWINDOW_H
#define UI_MYFILMSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_myFilmsWindow
{
public:
    QPushButton *favouriteButton;
    QPushButton *willWatchButton;
    QPushButton *watchedButton;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_3;

    void setupUi(QDialog *myFilmsWindow)
    {
        if (myFilmsWindow->objectName().isEmpty())
            myFilmsWindow->setObjectName("myFilmsWindow");
        myFilmsWindow->resize(805, 498);
        myFilmsWindow->setMinimumSize(QSize(805, 498));
        myFilmsWindow->setMaximumSize(QSize(805, 498));
        favouriteButton = new QPushButton(myFilmsWindow);
        favouriteButton->setObjectName("favouriteButton");
        favouriteButton->setGeometry(QRect(500, 100, 191, 51));
        willWatchButton = new QPushButton(myFilmsWindow);
        willWatchButton->setObjectName("willWatchButton");
        willWatchButton->setGeometry(QRect(500, 180, 191, 51));
        watchedButton = new QPushButton(myFilmsWindow);
        watchedButton->setObjectName("watchedButton");
        watchedButton->setGeometry(QRect(500, 260, 191, 51));
        label_2 = new QLabel(myFilmsWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(90, 170, 281, 51));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/images/myFilms.png")));
        label_2->setScaledContents(true);
        label = new QLabel(myFilmsWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(-80, 170, 601, 341));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/tape3.png")));
        label->setScaledContents(true);
        label_3 = new QLabel(myFilmsWindow);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(0, 0, 311, 161));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/images/tape4.png")));
        label_3->setScaledContents(true);

        retranslateUi(myFilmsWindow);

        QMetaObject::connectSlotsByName(myFilmsWindow);
    } // setupUi

    void retranslateUi(QDialog *myFilmsWindow)
    {
        myFilmsWindow->setWindowTitle(QCoreApplication::translate("myFilmsWindow", "My Films", nullptr));
        favouriteButton->setText(QCoreApplication::translate("myFilmsWindow", "Favourite", nullptr));
        willWatchButton->setText(QCoreApplication::translate("myFilmsWindow", "will watch", nullptr));
        watchedButton->setText(QCoreApplication::translate("myFilmsWindow", "watched", nullptr));
        label_2->setText(QString());
        label->setText(QString());
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class myFilmsWindow: public Ui_myFilmsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYFILMSWINDOW_H
