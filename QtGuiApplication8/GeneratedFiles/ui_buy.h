/********************************************************************************
** Form generated from reading UI file 'buy.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUY_H
#define UI_BUY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialogbuy
{
public:
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_ice;
    QPushButton *pushButton_mascot;
    QPushButton *pushButton_postcard;
    QPushButton *pushButton_sausage;
    QPushButton *pushButton_pencil;
    QLabel *label_hellow;
    QGroupBox *groupBox_buy;
    QPushButton *pushButton_buy;
    QComboBox *comboBox;
    QLabel *label_cost;
    QSpinBox *spinBox_num;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QDialog *Dialogbuy)
    {
        if (Dialogbuy->objectName().isEmpty())
            Dialogbuy->setObjectName(QStringLiteral("Dialogbuy"));
        Dialogbuy->resize(885, 683);
        groupBox = new QGroupBox(Dialogbuy);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(40, 70, 211, 301));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 40, 114, 241));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_ice = new QPushButton(layoutWidget);
        pushButton_ice->setObjectName(QStringLiteral("pushButton_ice"));

        verticalLayout->addWidget(pushButton_ice);

        pushButton_mascot = new QPushButton(layoutWidget);
        pushButton_mascot->setObjectName(QStringLiteral("pushButton_mascot"));

        verticalLayout->addWidget(pushButton_mascot);

        pushButton_postcard = new QPushButton(layoutWidget);
        pushButton_postcard->setObjectName(QStringLiteral("pushButton_postcard"));

        verticalLayout->addWidget(pushButton_postcard);

        pushButton_sausage = new QPushButton(layoutWidget);
        pushButton_sausage->setObjectName(QStringLiteral("pushButton_sausage"));

        verticalLayout->addWidget(pushButton_sausage);

        pushButton_pencil = new QPushButton(layoutWidget);
        pushButton_pencil->setObjectName(QStringLiteral("pushButton_pencil"));

        verticalLayout->addWidget(pushButton_pencil);

        label_hellow = new QLabel(Dialogbuy);
        label_hellow->setObjectName(QStringLiteral("label_hellow"));
        label_hellow->setGeometry(QRect(40, 30, 541, 31));
        groupBox_buy = new QGroupBox(Dialogbuy);
        groupBox_buy->setObjectName(QStringLiteral("groupBox_buy"));
        groupBox_buy->setGeometry(QRect(40, 410, 421, 211));
        pushButton_buy = new QPushButton(groupBox_buy);
        pushButton_buy->setObjectName(QStringLiteral("pushButton_buy"));
        pushButton_buy->setGeometry(QRect(260, 150, 112, 34));
        comboBox = new QComboBox(groupBox_buy);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(60, 50, 161, 31));
        label_cost = new QLabel(groupBox_buy);
        label_cost->setObjectName(QStringLiteral("label_cost"));
        label_cost->setGeometry(QRect(70, 100, 301, 31));
        spinBox_num = new QSpinBox(groupBox_buy);
        spinBox_num->setObjectName(QStringLiteral("spinBox_num"));
        spinBox_num->setGeometry(QRect(260, 50, 111, 31));
        plainTextEdit = new QPlainTextEdit(Dialogbuy);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(270, 80, 541, 311));

        retranslateUi(Dialogbuy);

        QMetaObject::connectSlotsByName(Dialogbuy);
    } // setupUi

    void retranslateUi(QDialog *Dialogbuy)
    {
        Dialogbuy->setWindowTitle(QApplication::translate("Dialogbuy", "Goods", 0));
        groupBox->setTitle(QApplication::translate("Dialogbuy", "Shopping", 0));
        pushButton_ice->setText(QApplication::translate("Dialogbuy", "Ice cream", 0));
        pushButton_mascot->setText(QApplication::translate("Dialogbuy", "Mascot", 0));
        pushButton_postcard->setText(QApplication::translate("Dialogbuy", "Postcard", 0));
        pushButton_sausage->setText(QApplication::translate("Dialogbuy", "Sausage", 0));
        pushButton_pencil->setText(QApplication::translate("Dialogbuy", "Pencil", 0));
        label_hellow->setText(QApplication::translate("Dialogbuy", "Hello, what kinds of things do wang to buy?", 0));
        groupBox_buy->setTitle(QApplication::translate("Dialogbuy", "Buy it! ", 0));
        pushButton_buy->setText(QApplication::translate("Dialogbuy", "Buy", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Dialogbuy", "Ice cream", 0)
         << QApplication::translate("Dialogbuy", "Pencil", 0)
         << QApplication::translate("Dialogbuy", "Postcard", 0)
         << QApplication::translate("Dialogbuy", "mascot", 0)
         << QApplication::translate("Dialogbuy", "sausage", 0)
        );
        label_cost->setText(QString());
        plainTextEdit->setPlainText(QApplication::translate("Dialogbuy", "Imformations of goods \n"
"\n"
"welcome to the shopping mall", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialogbuy: public Ui_Dialogbuy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUY_H
