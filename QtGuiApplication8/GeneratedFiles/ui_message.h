/********************************************************************************
** Form generated from reading UI file 'message.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGE_H
#define UI_MESSAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Dialog_m
{
public:
    QDialogButtonBox *buttonBox_comfirm;
    QLabel *label;

    void setupUi(QDialog *Dialog_m)
    {
        if (Dialog_m->objectName().isEmpty())
            Dialog_m->setObjectName(QStringLiteral("Dialog_m"));
        Dialog_m->resize(400, 198);
        buttonBox_comfirm = new QDialogButtonBox(Dialog_m);
        buttonBox_comfirm->setObjectName(QStringLiteral("buttonBox_comfirm"));
        buttonBox_comfirm->setGeometry(QRect(80, 140, 233, 34));
        buttonBox_comfirm->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(Dialog_m);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 60, 261, 51));

        retranslateUi(Dialog_m);
        QObject::connect(buttonBox_comfirm, SIGNAL(clicked(QAbstractButton*)), Dialog_m, SLOT(close()));

        QMetaObject::connectSlotsByName(Dialog_m);
    } // setupUi

    void retranslateUi(QDialog *Dialog_m)
    {
        Dialog_m->setWindowTitle(QApplication::translate("Dialog_m", "message", 0));
        label->setText(QApplication::translate("Dialog_m", "Successful purchase \357\274\201", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog_m: public Ui_Dialog_m {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGE_H
