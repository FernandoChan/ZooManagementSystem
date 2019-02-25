/********************************************************************************
** Form generated from reading UI file 'addStaff.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSTAFF_H
#define UI_ADDSTAFF_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialogstaff
{
public:
    QLabel *label;
    QGroupBox *groupBox;
    QLineEdit *lineEditn;
    QLineEdit *lineEdit_num;
    QLineEdit *lineEdit_p;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *Dialogstaff)
    {
        if (Dialogstaff->objectName().isEmpty())
            Dialogstaff->setObjectName(QStringLiteral("Dialogstaff"));
        Dialogstaff->resize(619, 416);
        label = new QLabel(Dialogstaff);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 20, 281, 41));
        groupBox = new QGroupBox(Dialogstaff);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(40, 70, 541, 281));
        lineEditn = new QLineEdit(groupBox);
        lineEditn->setObjectName(QStringLiteral("lineEditn"));
        lineEditn->setGeometry(QRect(180, 70, 231, 25));
        lineEdit_num = new QLineEdit(groupBox);
        lineEdit_num->setObjectName(QStringLiteral("lineEdit_num"));
        lineEdit_num->setGeometry(QRect(180, 130, 231, 25));
        lineEdit_p = new QLineEdit(groupBox);
        lineEdit_p->setObjectName(QStringLiteral("lineEdit_p"));
        lineEdit_p->setGeometry(QRect(180, 190, 231, 25));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(390, 240, 112, 34));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(60, 50, 83, 181));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);


        retranslateUi(Dialogstaff);

        QMetaObject::connectSlotsByName(Dialogstaff);
    } // setupUi

    void retranslateUi(QDialog *Dialogstaff)
    {
        Dialogstaff->setWindowTitle(QApplication::translate("Dialogstaff", "A new staff", 0));
        label->setText(QApplication::translate("Dialogstaff", "Add a new staff", 0));
        groupBox->setTitle(QApplication::translate("Dialogstaff", "Set the imformation of new staff", 0));
        pushButton->setText(QApplication::translate("Dialogstaff", "Comfirm", 0));
        label_2->setText(QApplication::translate("Dialogstaff", "Name", 0));
        label_3->setText(QApplication::translate("Dialogstaff", "Number", 0));
        label_4->setText(QApplication::translate("Dialogstaff", "Password", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialogstaff: public Ui_Dialogstaff {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSTAFF_H
