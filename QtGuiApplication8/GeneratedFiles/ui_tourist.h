/********************************************************************************
** Form generated from reading UI file 'tourist.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOURIST_H
#define UI_TOURIST_H

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

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGroupBox *groupBox;
    QPushButton *pushButton_Tiger;
    QPushButton *pushButton_swallow;
    QPushButton *pushButton_Rabit;
    QPushButton *pushButton_mouse;
    QPushButton *pushButton_cat;
    QPushButton *pushButton_Lion;
    QPushButton *pushButton_Leopard;
    QPushButton *pushButton_Eagle;
    QPushButton *pushButton_dog;
    QPushButton *pushButton_crocodil;
    QLabel *label_hello;
    QPlainTextEdit *plainTextEdit;
    QGroupBox *groupBox_buy;
    QPushButton *pushButton_buy;
    QPushButton *pushButton_logout;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(1101, 722);
        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 60, 261, 431));
        pushButton_Tiger = new QPushButton(groupBox);
        pushButton_Tiger->setObjectName(QStringLiteral("pushButton_Tiger"));
        pushButton_Tiger->setGeometry(QRect(20, 30, 112, 34));
        pushButton_swallow = new QPushButton(groupBox);
        pushButton_swallow->setObjectName(QStringLiteral("pushButton_swallow"));
        pushButton_swallow->setGeometry(QRect(20, 70, 112, 34));
        pushButton_Rabit = new QPushButton(groupBox);
        pushButton_Rabit->setObjectName(QStringLiteral("pushButton_Rabit"));
        pushButton_Rabit->setGeometry(QRect(20, 110, 112, 34));
        pushButton_mouse = new QPushButton(groupBox);
        pushButton_mouse->setObjectName(QStringLiteral("pushButton_mouse"));
        pushButton_mouse->setGeometry(QRect(20, 150, 112, 34));
        pushButton_cat = new QPushButton(groupBox);
        pushButton_cat->setObjectName(QStringLiteral("pushButton_cat"));
        pushButton_cat->setGeometry(QRect(20, 190, 112, 34));
        pushButton_Lion = new QPushButton(groupBox);
        pushButton_Lion->setObjectName(QStringLiteral("pushButton_Lion"));
        pushButton_Lion->setGeometry(QRect(20, 230, 112, 34));
        pushButton_Leopard = new QPushButton(groupBox);
        pushButton_Leopard->setObjectName(QStringLiteral("pushButton_Leopard"));
        pushButton_Leopard->setGeometry(QRect(20, 270, 112, 34));
        pushButton_Eagle = new QPushButton(groupBox);
        pushButton_Eagle->setObjectName(QStringLiteral("pushButton_Eagle"));
        pushButton_Eagle->setGeometry(QRect(20, 310, 112, 34));
        pushButton_dog = new QPushButton(groupBox);
        pushButton_dog->setObjectName(QStringLiteral("pushButton_dog"));
        pushButton_dog->setGeometry(QRect(20, 350, 112, 34));
        pushButton_crocodil = new QPushButton(groupBox);
        pushButton_crocodil->setObjectName(QStringLiteral("pushButton_crocodil"));
        pushButton_crocodil->setGeometry(QRect(20, 390, 112, 34));
        label_hello = new QLabel(Dialog);
        label_hello->setObjectName(QStringLiteral("label_hello"));
        label_hello->setGeometry(QRect(20, 10, 391, 31));
        label_hello->setFocusPolicy(Qt::NoFocus);
        label_hello->setFrameShape(QFrame::NoFrame);
        label_hello->setFrameShadow(QFrame::Sunken);
        label_hello->setTextFormat(Qt::RichText);
        plainTextEdit = new QPlainTextEdit(Dialog);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(320, 100, 671, 291));
        plainTextEdit->setTabChangesFocus(false);
        groupBox_buy = new QGroupBox(Dialog);
        groupBox_buy->setObjectName(QStringLiteral("groupBox_buy"));
        groupBox_buy->setGeometry(QRect(50, 520, 221, 81));
        pushButton_buy = new QPushButton(groupBox_buy);
        pushButton_buy->setObjectName(QStringLiteral("pushButton_buy"));
        pushButton_buy->setGeometry(QRect(20, 30, 112, 34));
        pushButton_logout = new QPushButton(Dialog);
        pushButton_logout->setObjectName(QStringLiteral("pushButton_logout"));
        pushButton_logout->setGeometry(QRect(880, 40, 112, 34));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0));
        groupBox->setTitle(QApplication::translate("Dialog", "Get more imformation", 0));
        pushButton_Tiger->setText(QApplication::translate("Dialog", "Tiger", 0));
        pushButton_swallow->setText(QApplication::translate("Dialog", "Swallow", 0));
        pushButton_Rabit->setText(QApplication::translate("Dialog", "Rabit", 0));
        pushButton_mouse->setText(QApplication::translate("Dialog", "Mouse", 0));
        pushButton_cat->setText(QApplication::translate("Dialog", "Cat", 0));
        pushButton_Lion->setText(QApplication::translate("Dialog", "Lion", 0));
        pushButton_Leopard->setText(QApplication::translate("Dialog", "Leapard", 0));
        pushButton_Eagle->setText(QApplication::translate("Dialog", "Eagle", 0));
        pushButton_dog->setText(QApplication::translate("Dialog", "Dog", 0));
        pushButton_crocodil->setText(QApplication::translate("Dialog", "Crocodil", 0));
        label_hello->setText(QString());
        plainTextEdit->setPlainText(QApplication::translate("Dialog", "Press the button \n"
"To get imformations\n"
"\n"
"Thank you for using this programm", 0));
        groupBox_buy->setTitle(QApplication::translate("Dialog", "Buy tickets", 0));
        pushButton_buy->setText(QApplication::translate("Dialog", "buy", 0));
        pushButton_logout->setText(QApplication::translate("Dialog", "Log out", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOURIST_H
