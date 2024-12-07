/********************************************************************************
** Form generated from reading UI file 'deletewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEWINDOW_H
#define UI_DELETEWINDOW_H

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

class Ui_deleteWindow
{
public:
    QGroupBox *groupBox;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *nameEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *deleteWindow)
    {
        if (deleteWindow->objectName().isEmpty())
            deleteWindow->setObjectName("deleteWindow");
        deleteWindow->resize(400, 300);
        groupBox = new QGroupBox(deleteWindow);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(70, 50, 201, 121));
        formLayoutWidget = new QWidget(groupBox);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(10, 30, 160, 80));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        nameEdit = new QLineEdit(formLayoutWidget);
        nameEdit->setObjectName("nameEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, nameEdit);

        pushButton = new QPushButton(deleteWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(120, 170, 101, 31));

        retranslateUi(deleteWindow);

        QMetaObject::connectSlotsByName(deleteWindow);
    } // setupUi

    void retranslateUi(QDialog *deleteWindow)
    {
        deleteWindow->setWindowTitle(QCoreApplication::translate("deleteWindow", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("deleteWindow", "Choose movie to delete", nullptr));
        label->setText(QCoreApplication::translate("deleteWindow", "Name: ", nullptr));
        pushButton->setText(QCoreApplication::translate("deleteWindow", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class deleteWindow: public Ui_deleteWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEWINDOW_H
