/********************************************************************************
** Form generated from reading UI file 'untitled.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UNTITLED_H
#define UI_UNTITLED_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog_register
{
public:
    QLabel *label_Num_regi;
    QLabel *label_2;
    QLabel *label__pass_regi;
    QPushButton *pushButton_regi;
    QLineEdit *lineEdit_tourist_regi;
    QLineEdit *lineEdit_name_regi;
    QLineEdit *lineEdit_pass_regi;
    QLineEdit *lineEdit_num_regi;

    void setupUi(QDialog *Dialog_register)
    {
        if (Dialog_register->objectName().isEmpty())
            Dialog_register->setObjectName(QStringLiteral("Dialog_register"));
        Dialog_register->resize(735, 538);
        label_Num_regi = new QLabel(Dialog_register);
        label_Num_regi->setObjectName(QStringLiteral("label_Num_regi"));
        label_Num_regi->setGeometry(QRect(170, 120, 141, 20));
        label_2 = new QLabel(Dialog_register);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 170, 211, 20));
        label__pass_regi = new QLabel(Dialog_register);
        label__pass_regi->setObjectName(QStringLiteral("label__pass_regi"));
        label__pass_regi->setGeometry(QRect(220, 230, 81, 20));
        label__pass_regi->setFrameShape(QFrame::NoFrame);
        pushButton_regi = new QPushButton(Dialog_register);
        pushButton_regi->setObjectName(QStringLiteral("pushButton_regi"));
        pushButton_regi->setGeometry(QRect(420, 290, 112, 34));
        pushButton_regi->setFocusPolicy(Qt::StrongFocus);
        pushButton_regi->setContextMenuPolicy(Qt::ActionsContextMenu);
        pushButton_regi->setFlat(false);
        lineEdit_tourist_regi = new QLineEdit(Dialog_register);
        lineEdit_tourist_regi->setObjectName(QStringLiteral("lineEdit_tourist_regi"));
        lineEdit_tourist_regi->setEnabled(false);
        lineEdit_tourist_regi->setGeometry(QRect(340, 120, 111, 24));
        lineEdit_name_regi = new QLineEdit(Dialog_register);
        lineEdit_name_regi->setObjectName(QStringLiteral("lineEdit_name_regi"));
        lineEdit_name_regi->setGeometry(QRect(340, 170, 191, 25));
        lineEdit_pass_regi = new QLineEdit(Dialog_register);
        lineEdit_pass_regi->setObjectName(QStringLiteral("lineEdit_pass_regi"));
        lineEdit_pass_regi->setGeometry(QRect(340, 230, 191, 25));
        lineEdit_num_regi = new QLineEdit(Dialog_register);
        lineEdit_num_regi->setObjectName(QStringLiteral("lineEdit_num_regi"));
        lineEdit_num_regi->setEnabled(false);
        lineEdit_num_regi->setGeometry(QRect(460, 120, 71, 24));

        retranslateUi(Dialog_register);
        QObject::connect(pushButton_regi, SIGNAL(clicked()), Dialog_register, SLOT(close()));

        pushButton_regi->setDefault(true);


        QMetaObject::connectSlotsByName(Dialog_register);
    } // setupUi

    void retranslateUi(QDialog *Dialog_register)
    {
        Dialog_register->setWindowTitle(QApplication::translate("Dialog_register", "Dialog", 0));
        label_Num_regi->setText(QApplication::translate("Dialog_register", "Your number is: ", 0));
        label_2->setText(QApplication::translate("Dialog_register", "Please enter your name:", 0));
        label__pass_regi->setText(QApplication::translate("Dialog_register", "Password:", 0));
        pushButton_regi->setText(QApplication::translate("Dialog_register", "Confirm", 0));
        lineEdit_tourist_regi->setInputMask(QApplication::translate("Dialog_register", "Tourist", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog_register: public Ui_Dialog_register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UNTITLED_H
