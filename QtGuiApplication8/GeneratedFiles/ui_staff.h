/********************************************************************************
** Form generated from reading UI file 'staff.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STAFF_H
#define UI_STAFF_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialogstaff
{
public:
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_tiger;
    QPushButton *pushButton_rabit;
    QPushButton *pushButton_mouse;
    QPushButton *pushButton_dog;
    QPushButton *pushButton_cat;
    QPushButton *pushButton_leopard;
    QPushButton *pushButton_eagle;
    QPushButton *pushButton_lion;
    QPushButton *pushButton_crocodile;
    QPushButton *pushButton_swallow;
    QLabel *label_hello;
    QPlainTextEdit *plainTextEdit;
    QPushButton *pushButton_logout;
    QPushButton *pushButton_getboss;
    QPlainTextEdit *plainTextEdit_2;

    void setupUi(QDialog *Dialogstaff)
    {
        if (Dialogstaff->objectName().isEmpty())
            Dialogstaff->setObjectName(QStringLiteral("Dialogstaff"));
        Dialogstaff->resize(987, 610);
        groupBox = new QGroupBox(Dialogstaff);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(60, 70, 231, 471));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 30, 114, 423));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_tiger = new QPushButton(layoutWidget);
        pushButton_tiger->setObjectName(QStringLiteral("pushButton_tiger"));

        verticalLayout->addWidget(pushButton_tiger);

        pushButton_rabit = new QPushButton(layoutWidget);
        pushButton_rabit->setObjectName(QStringLiteral("pushButton_rabit"));

        verticalLayout->addWidget(pushButton_rabit);

        pushButton_mouse = new QPushButton(layoutWidget);
        pushButton_mouse->setObjectName(QStringLiteral("pushButton_mouse"));

        verticalLayout->addWidget(pushButton_mouse);

        pushButton_dog = new QPushButton(layoutWidget);
        pushButton_dog->setObjectName(QStringLiteral("pushButton_dog"));

        verticalLayout->addWidget(pushButton_dog);

        pushButton_cat = new QPushButton(layoutWidget);
        pushButton_cat->setObjectName(QStringLiteral("pushButton_cat"));

        verticalLayout->addWidget(pushButton_cat);

        pushButton_leopard = new QPushButton(layoutWidget);
        pushButton_leopard->setObjectName(QStringLiteral("pushButton_leopard"));

        verticalLayout->addWidget(pushButton_leopard);

        pushButton_eagle = new QPushButton(layoutWidget);
        pushButton_eagle->setObjectName(QStringLiteral("pushButton_eagle"));

        verticalLayout->addWidget(pushButton_eagle);

        pushButton_lion = new QPushButton(layoutWidget);
        pushButton_lion->setObjectName(QStringLiteral("pushButton_lion"));

        verticalLayout->addWidget(pushButton_lion);

        pushButton_crocodile = new QPushButton(layoutWidget);
        pushButton_crocodile->setObjectName(QStringLiteral("pushButton_crocodile"));

        verticalLayout->addWidget(pushButton_crocodile);

        pushButton_swallow = new QPushButton(layoutWidget);
        pushButton_swallow->setObjectName(QStringLiteral("pushButton_swallow"));

        verticalLayout->addWidget(pushButton_swallow);

        label_hello = new QLabel(Dialogstaff);
        label_hello->setObjectName(QStringLiteral("label_hello"));
        label_hello->setGeometry(QRect(50, 30, 171, 31));
        plainTextEdit = new QPlainTextEdit(Dialogstaff);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(310, 100, 611, 271));
        pushButton_logout = new QPushButton(Dialogstaff);
        pushButton_logout->setObjectName(QStringLiteral("pushButton_logout"));
        pushButton_logout->setGeometry(QRect(800, 30, 112, 34));
        pushButton_getboss = new QPushButton(Dialogstaff);
        pushButton_getboss->setObjectName(QStringLiteral("pushButton_getboss"));
        pushButton_getboss->setGeometry(QRect(810, 520, 112, 34));
        plainTextEdit_2 = new QPlainTextEdit(Dialogstaff);
        plainTextEdit_2->setObjectName(QStringLiteral("plainTextEdit_2"));
        plainTextEdit_2->setGeometry(QRect(310, 390, 611, 107));

        retranslateUi(Dialogstaff);

        QMetaObject::connectSlotsByName(Dialogstaff);
    } // setupUi

    void retranslateUi(QDialog *Dialogstaff)
    {
        Dialogstaff->setWindowTitle(QApplication::translate("Dialogstaff", "Hellow, staff!", 0));
        groupBox->setTitle(QApplication::translate("Dialogstaff", "Animals' imformation", 0));
        pushButton_tiger->setText(QApplication::translate("Dialogstaff", "Tiger", 0));
        pushButton_rabit->setText(QApplication::translate("Dialogstaff", "Rabit", 0));
        pushButton_mouse->setText(QApplication::translate("Dialogstaff", "Mouse", 0));
        pushButton_dog->setText(QApplication::translate("Dialogstaff", "Dog", 0));
        pushButton_cat->setText(QApplication::translate("Dialogstaff", "Cat", 0));
        pushButton_leopard->setText(QApplication::translate("Dialogstaff", "Leopard", 0));
        pushButton_eagle->setText(QApplication::translate("Dialogstaff", "Eagle", 0));
        pushButton_lion->setText(QApplication::translate("Dialogstaff", "Lion", 0));
        pushButton_crocodile->setText(QApplication::translate("Dialogstaff", "Crocodile", 0));
        pushButton_swallow->setText(QApplication::translate("Dialogstaff", "Swallow", 0));
        label_hello->setText(QApplication::translate("Dialogstaff", "Hello, staff !", 0));
        plainTextEdit->setPlainText(QApplication::translate("Dialogstaff", "Imformation of animals\n"
"\n"
"Thanks for using this program\n"
"", 0));
        pushButton_logout->setText(QApplication::translate("Dialogstaff", "Log out", 0));
        pushButton_getboss->setText(QApplication::translate("Dialogstaff", "Get", 0));
        plainTextEdit_2->setPlainText(QApplication::translate("Dialogstaff", "Get imformtions of your boss", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialogstaff: public Ui_Dialogstaff {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAFF_H
