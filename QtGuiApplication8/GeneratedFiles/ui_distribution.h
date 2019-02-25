/********************************************************************************
** Form generated from reading UI file 'distribution.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISTRIBUTION_H
#define UI_DISTRIBUTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog_des
{
public:
    QComboBox *comboBox;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *Dialog_des)
    {
        if (Dialog_des->objectName().isEmpty())
            Dialog_des->setObjectName(QStringLiteral("Dialog_des"));
        Dialog_des->resize(407, 171);
        comboBox = new QComboBox(Dialog_des);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(70, 100, 121, 31));
        label = new QLabel(Dialog_des);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 40, 131, 41));
        pushButton = new QPushButton(Dialog_des);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(230, 100, 112, 34));

        retranslateUi(Dialog_des);

        QMetaObject::connectSlotsByName(Dialog_des);
    } // setupUi

    void retranslateUi(QDialog *Dialog_des)
    {
        Dialog_des->setWindowTitle(QApplication::translate("Dialog_des", "Distribution", 0));
        label->setText(QApplication::translate("Dialog_des", "Distribution", 0));
        pushButton->setText(QApplication::translate("Dialog_des", "Comfirm", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog_des: public Ui_Dialog_des {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISTRIBUTION_H
