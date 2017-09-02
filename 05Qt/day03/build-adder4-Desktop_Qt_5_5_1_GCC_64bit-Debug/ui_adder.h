/********************************************************************************
** Form generated from reading UI file 'adder.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDER_H
#define UI_ADDER_H

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

class Ui_Adder
{
public:
    QPushButton *equ;
    QLineEdit *add;
    QLineEdit *added;
    QLabel *oper;
    QLineEdit *res;

    void setupUi(QDialog *Adder)
    {
        if (Adder->objectName().isEmpty())
            Adder->setObjectName(QStringLiteral("Adder"));
        Adder->resize(550, 176);
        equ = new QPushButton(Adder);
        equ->setObjectName(QStringLiteral("equ"));
        equ->setGeometry(QRect(330, 60, 41, 28));
        add = new QLineEdit(Adder);
        add->setObjectName(QStringLiteral("add"));
        add->setGeometry(QRect(40, 60, 113, 32));
        added = new QLineEdit(Adder);
        added->setObjectName(QStringLiteral("added"));
        added->setGeometry(QRect(201, 60, 113, 32));
        oper = new QLabel(Adder);
        oper->setObjectName(QStringLiteral("oper"));
        oper->setGeometry(QRect(170, 64, 21, 20));
        QFont font;
        font.setPointSize(20);
        oper->setFont(font);
        res = new QLineEdit(Adder);
        res->setObjectName(QStringLiteral("res"));
        res->setGeometry(QRect(398, 60, 113, 32));

        retranslateUi(Adder);

        QMetaObject::connectSlotsByName(Adder);
    } // setupUi

    void retranslateUi(QDialog *Adder)
    {
        Adder->setWindowTitle(QApplication::translate("Adder", "Adder", 0));
        equ->setText(QApplication::translate("Adder", "=", 0));
        oper->setText(QApplication::translate("Adder", "+", 0));
    } // retranslateUi

};

namespace Ui {
    class Adder: public Ui_Adder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDER_H
