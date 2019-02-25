/********************************************************************************
** Form generated from reading UI file 'addAnimal.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDANIMAL_H
#define UI_ADDANIMAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog_add_animal
{
public:
    QLabel *label;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_name;
    QLineEdit *lineEdit_age;
    QLineEdit *lineEdit_weight;
    QLineEdit *lineEdit_hobbies;

    void setupUi(QDialog *Dialog_add_animal)
    {
        if (Dialog_add_animal->objectName().isEmpty())
            Dialog_add_animal->setObjectName(QStringLiteral("Dialog_add_animal"));
        Dialog_add_animal->resize(635, 458);
        label = new QLabel(Dialog_add_animal);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 261, 31));
        comboBox = new QComboBox(Dialog_add_animal);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(310, 40, 269, 24));
        pushButton = new QPushButton(Dialog_add_animal);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(430, 400, 121, 34));
        layoutWidget = new QWidget(Dialog_add_animal);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 90, 221, 261));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout->addWidget(label_5);

        layoutWidget1 = new QWidget(Dialog_add_animal);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(310, 90, 271, 271));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit_name = new QLineEdit(layoutWidget1);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));

        verticalLayout_2->addWidget(lineEdit_name);

        lineEdit_age = new QLineEdit(layoutWidget1);
        lineEdit_age->setObjectName(QStringLiteral("lineEdit_age"));

        verticalLayout_2->addWidget(lineEdit_age);

        lineEdit_weight = new QLineEdit(layoutWidget1);
        lineEdit_weight->setObjectName(QStringLiteral("lineEdit_weight"));

        verticalLayout_2->addWidget(lineEdit_weight);

        lineEdit_hobbies = new QLineEdit(layoutWidget1);
        lineEdit_hobbies->setObjectName(QStringLiteral("lineEdit_hobbies"));

        verticalLayout_2->addWidget(lineEdit_hobbies);


        retranslateUi(Dialog_add_animal);

        QMetaObject::connectSlotsByName(Dialog_add_animal);
    } // setupUi

    void retranslateUi(QDialog *Dialog_add_animal)
    {
        Dialog_add_animal->setWindowTitle(QApplication::translate("Dialog_add_animal", "Add animals", 0));
        label->setText(QApplication::translate("Dialog_add_animal", "Add a new animal", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Dialog_add_animal", "Tiger", 0)
         << QApplication::translate("Dialog_add_animal", "Swallow", 0)
         << QApplication::translate("Dialog_add_animal", "Rabit", 0)
         << QApplication::translate("Dialog_add_animal", "Mouse", 0)
         << QApplication::translate("Dialog_add_animal", "Lion", 0)
         << QApplication::translate("Dialog_add_animal", "Leopard", 0)
         << QApplication::translate("Dialog_add_animal", "Cat", 0)
         << QApplication::translate("Dialog_add_animal", "Eagle", 0)
         << QApplication::translate("Dialog_add_animal", "Crocodile", 0)
         << QApplication::translate("Dialog_add_animal", "Dog", 0)
        );
        pushButton->setText(QApplication::translate("Dialog_add_animal", "Comfirm", 0));
        label_3->setText(QApplication::translate("Dialog_add_animal", "Set the animal's name", 0));
        label_2->setText(QApplication::translate("Dialog_add_animal", "Set the animal's age", 0));
        label_4->setText(QApplication::translate("Dialog_add_animal", "Set the animal's weight", 0));
        label_5->setText(QApplication::translate("Dialog_add_animal", "Set the animal's hobbies", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog_add_animal: public Ui_Dialog_add_animal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDANIMAL_H
