/********************************************************************************
** Form generated from reading UI file 'master.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MASTER_H
#define UI_MASTER_H

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

QT_BEGIN_NAMESPACE

class Ui_Dialogmaster
{
public:
    QGroupBox *groupBox_getIm;
    QComboBox *comboBox_get;
    QPushButton *pushButton_get;
    QLabel *label_hellomaster;
    QGroupBox *groupBox_getAnimal;
    QPushButton *pushButton_getAnimal;
    QPlainTextEdit *plainTextEdit_imformations;
    QGroupBox *groupBox_talk;
    QPushButton *pushButton_talkto;
    QPlainTextEdit *plainTextEdit_talk;
    QPushButton *pushButton_logout;
    QGroupBox *groupBox_animal;
    QPushButton *pushButton_animal;

    void setupUi(QDialog *Dialogmaster)
    {
        if (Dialogmaster->objectName().isEmpty())
            Dialogmaster->setObjectName(QStringLiteral("Dialogmaster"));
        Dialogmaster->resize(1099, 674);
        groupBox_getIm = new QGroupBox(Dialogmaster);
        groupBox_getIm->setObjectName(QStringLiteral("groupBox_getIm"));
        groupBox_getIm->setGeometry(QRect(50, 90, 361, 131));
        comboBox_get = new QComboBox(groupBox_getIm);
        comboBox_get->setObjectName(QStringLiteral("comboBox_get"));
        comboBox_get->setGeometry(QRect(20, 60, 131, 31));
        pushButton_get = new QPushButton(groupBox_getIm);
        pushButton_get->setObjectName(QStringLiteral("pushButton_get"));
        pushButton_get->setGeometry(QRect(180, 60, 112, 34));
        label_hellomaster = new QLabel(Dialogmaster);
        label_hellomaster->setObjectName(QStringLiteral("label_hellomaster"));
        label_hellomaster->setGeometry(QRect(50, 30, 221, 41));
        groupBox_getAnimal = new QGroupBox(Dialogmaster);
        groupBox_getAnimal->setObjectName(QStringLiteral("groupBox_getAnimal"));
        groupBox_getAnimal->setGeometry(QRect(50, 270, 361, 121));
        pushButton_getAnimal = new QPushButton(groupBox_getAnimal);
        pushButton_getAnimal->setObjectName(QStringLiteral("pushButton_getAnimal"));
        pushButton_getAnimal->setGeometry(QRect(180, 50, 111, 34));
        plainTextEdit_imformations = new QPlainTextEdit(Dialogmaster);
        plainTextEdit_imformations->setObjectName(QStringLiteral("plainTextEdit_imformations"));
        plainTextEdit_imformations->setEnabled(true);
        plainTextEdit_imformations->setGeometry(QRect(450, 100, 571, 291));
        groupBox_talk = new QGroupBox(Dialogmaster);
        groupBox_talk->setObjectName(QStringLiteral("groupBox_talk"));
        groupBox_talk->setGeometry(QRect(50, 420, 361, 91));
        pushButton_talkto = new QPushButton(groupBox_talk);
        pushButton_talkto->setObjectName(QStringLiteral("pushButton_talkto"));
        pushButton_talkto->setGeometry(QRect(190, 40, 121, 34));
        plainTextEdit_talk = new QPlainTextEdit(Dialogmaster);
        plainTextEdit_talk->setObjectName(QStringLiteral("plainTextEdit_talk"));
        plainTextEdit_talk->setGeometry(QRect(450, 430, 571, 81));
        pushButton_logout = new QPushButton(Dialogmaster);
        pushButton_logout->setObjectName(QStringLiteral("pushButton_logout"));
        pushButton_logout->setGeometry(QRect(910, 40, 112, 34));
        groupBox_animal = new QGroupBox(Dialogmaster);
        groupBox_animal->setObjectName(QStringLiteral("groupBox_animal"));
        groupBox_animal->setGeometry(QRect(50, 540, 361, 91));
        pushButton_animal = new QPushButton(groupBox_animal);
        pushButton_animal->setObjectName(QStringLiteral("pushButton_animal"));
        pushButton_animal->setGeometry(QRect(210, 40, 112, 34));

        retranslateUi(Dialogmaster);

        QMetaObject::connectSlotsByName(Dialogmaster);
    } // setupUi

    void retranslateUi(QDialog *Dialogmaster)
    {
        Dialogmaster->setWindowTitle(QApplication::translate("Dialogmaster", "Dialog", 0));
        groupBox_getIm->setTitle(QApplication::translate("Dialogmaster", "Get imformation of your staffs", 0));
        comboBox_get->clear();
        comboBox_get->insertItems(0, QStringList()
         << QApplication::translate("Dialogmaster", "All staffs", 0)
        );
        pushButton_get->setText(QApplication::translate("Dialogmaster", "Get", 0));
        label_hellomaster->setText(QApplication::translate("Dialogmaster", "Hello, master!", 0));
        groupBox_getAnimal->setTitle(QApplication::translate("Dialogmaster", "Get all imformation of your animals", 0));
        pushButton_getAnimal->setText(QApplication::translate("Dialogmaster", "Get All", 0));
        plainTextEdit_imformations->setPlainText(QApplication::translate("Dialogmaster", "Get imformation\n"
"\n"
"Thanks for using it", 0));
        groupBox_talk->setTitle(QApplication::translate("Dialogmaster", "Talk to your staff", 0));
        pushButton_talkto->setText(QApplication::translate("Dialogmaster", "Talk to", 0));
        plainTextEdit_talk->setPlainText(QApplication::translate("Dialogmaster", "Talk to your staff or get message of your staff\n"
"\n"
"Thanks for using it", 0));
        pushButton_logout->setText(QApplication::translate("Dialogmaster", "Log out", 0));
        groupBox_animal->setTitle(QApplication::translate("Dialogmaster", "Add a new animal", 0));
        pushButton_animal->setText(QApplication::translate("Dialogmaster", "Add", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialogmaster: public Ui_Dialogmaster {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MASTER_H
