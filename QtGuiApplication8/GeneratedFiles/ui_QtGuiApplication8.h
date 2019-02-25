/********************************************************************************
** Form generated from reading UI file 'QtGuiApplication8.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTGUIAPPLICATION8_H
#define UI_QTGUIAPPLICATION8_H

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

QT_BEGIN_NAMESPACE

class Ui_QtGuiApplication8Class
{
public:
    QLabel *label_num;
    QComboBox *comboBox;
    QLineEdit *lineEdit_job;
    QPushButton *pushbutton_register;
    QLabel *label_pass;
    QLineEdit *lineEdit_pass;
    QLineEdit *lineEdit_num;
    QPushButton *pushbutton_login;
    QLabel *label_alarm;

    void setupUi(QDialog *QtGuiApplication8Class)
    {
        if (QtGuiApplication8Class->objectName().isEmpty())
            QtGuiApplication8Class->setObjectName(QStringLiteral("QtGuiApplication8Class"));
        QtGuiApplication8Class->resize(600, 400);
        label_num = new QLabel(QtGuiApplication8Class);
        label_num->setObjectName(QStringLiteral("label_num"));
        label_num->setGeometry(QRect(130, 90, 61, 31));
        comboBox = new QComboBox(QtGuiApplication8Class);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(170, 220, 121, 31));
        lineEdit_job = new QLineEdit(QtGuiApplication8Class);
        lineEdit_job->setObjectName(QStringLiteral("lineEdit_job"));
        lineEdit_job->setEnabled(false);
        lineEdit_job->setGeometry(QRect(210, 90, 91, 31));
        lineEdit_job->setDragEnabled(true);
        pushbutton_register = new QPushButton(QtGuiApplication8Class);
        pushbutton_register->setObjectName(QStringLiteral("pushbutton_register"));
        pushbutton_register->setGeometry(QRect(330, 280, 121, 34));
        label_pass = new QLabel(QtGuiApplication8Class);
        label_pass->setObjectName(QStringLiteral("label_pass"));
        label_pass->setGeometry(QRect(110, 160, 81, 31));
        lineEdit_pass = new QLineEdit(QtGuiApplication8Class);
        lineEdit_pass->setObjectName(QStringLiteral("lineEdit_pass"));
        lineEdit_pass->setGeometry(QRect(210, 160, 241, 31));
        lineEdit_num = new QLineEdit(QtGuiApplication8Class);
        lineEdit_num->setObjectName(QStringLiteral("lineEdit_num"));
        lineEdit_num->setEnabled(true);
        lineEdit_num->setGeometry(QRect(310, 90, 141, 31));
        pushbutton_login = new QPushButton(QtGuiApplication8Class);
        pushbutton_login->setObjectName(QStringLiteral("pushbutton_login"));
        pushbutton_login->setGeometry(QRect(330, 220, 121, 31));
        pushbutton_login->setProperty("Number", QVariant(12));
        label_alarm = new QLabel(QtGuiApplication8Class);
        label_alarm->setObjectName(QStringLiteral("label_alarm"));
        label_alarm->setGeometry(QRect(80, 280, 211, 31));
        label_alarm->setFrameShape(QFrame::NoFrame);
        label_alarm->setTextFormat(Qt::RichText);
        QWidget::setTabOrder(lineEdit_num, lineEdit_pass);
        QWidget::setTabOrder(lineEdit_pass, comboBox);
        QWidget::setTabOrder(comboBox, pushbutton_login);
        QWidget::setTabOrder(pushbutton_login, pushbutton_register);
        QWidget::setTabOrder(pushbutton_register, lineEdit_job);

        retranslateUi(QtGuiApplication8Class);
        QObject::connect(comboBox, SIGNAL(currentIndexChanged(QString)), lineEdit_job, SLOT(setText(QString)));

        QMetaObject::connectSlotsByName(QtGuiApplication8Class);
    } // setupUi

    void retranslateUi(QDialog *QtGuiApplication8Class)
    {
        QtGuiApplication8Class->setWindowTitle(QApplication::translate("QtGuiApplication8Class", "QtGuiApplication8", 0));
        label_num->setText(QApplication::translate("QtGuiApplication8Class", "Number", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("QtGuiApplication8Class", "Tourist", 0)
         << QApplication::translate("QtGuiApplication8Class", "Master", 0)
         << QApplication::translate("QtGuiApplication8Class", "Staff", 0)
        );
        lineEdit_job->setText(QApplication::translate("QtGuiApplication8Class", "Tourist", 0));
        pushbutton_register->setText(QApplication::translate("QtGuiApplication8Class", "register", 0));
        label_pass->setText(QApplication::translate("QtGuiApplication8Class", "Password", 0));
        lineEdit_num->setProperty("Number", QVariant(QApplication::translate("QtGuiApplication8Class", "123", 0)));
        pushbutton_login->setText(QApplication::translate("QtGuiApplication8Class", "Login", 0));
        label_alarm->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QtGuiApplication8Class: public Ui_QtGuiApplication8Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTGUIAPPLICATION8_H
