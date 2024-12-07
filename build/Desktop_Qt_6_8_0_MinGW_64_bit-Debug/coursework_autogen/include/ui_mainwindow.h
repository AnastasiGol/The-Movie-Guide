/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *findButton;
    QLabel *tapeImage;
    QLabel *titleImage;
    QLabel *tape2Image;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1006, 622);
        MainWindow->setMinimumSize(QSize(1006, 622));
        MainWindow->setMaximumSize(QSize(1006, 622));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(140, 400, 191, 61));
        findButton = new QPushButton(centralwidget);
        findButton->setObjectName("findButton");
        findButton->setGeometry(QRect(140, 320, 191, 61));
        tapeImage = new QLabel(centralwidget);
        tapeImage->setObjectName("tapeImage");
        tapeImage->setGeometry(QRect(390, 160, 641, 461));
        tapeImage->setPixmap(QPixmap(QString::fromUtf8(":/images/tape2.png")));
        tapeImage->setScaledContents(true);
        tapeImage->setTextInteractionFlags(Qt::TextInteractionFlag::NoTextInteraction);
        titleImage = new QLabel(centralwidget);
        titleImage->setObjectName("titleImage");
        titleImage->setGeometry(QRect(140, 230, 461, 51));
        titleImage->setPixmap(QPixmap(QString::fromUtf8(":/images/mainTitle.png")));
        titleImage->setScaledContents(true);
        tape2Image = new QLabel(centralwidget);
        tape2Image->setObjectName("tape2Image");
        tape2Image->setGeometry(QRect(-80, -100, 561, 351));
        tape2Image->setPixmap(QPixmap(QString::fromUtf8(":/images/tape1.png")));
        tape2Image->setScaledContents(true);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1006, 18));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "The Movie Guide", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "My films", nullptr));
        findButton->setText(QCoreApplication::translate("MainWindow", "Find", nullptr));
        tapeImage->setText(QString());
        titleImage->setText(QString());
        tape2Image->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
