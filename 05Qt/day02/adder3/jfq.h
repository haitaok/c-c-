/********************************************************************************
** Form generated from reading UI file 'jfq.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef JFQ_H
#define JFQ_H

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

class Ui_Dialog
{
public:
    QLineEdit *add;
    QLineEdit *added;
    QLineEdit *res;
    QPushButton *equ;
    QLabel *oper;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(665, 207);
        add = new QLineEdit(Dialog);
        add->setObjectName(QStringLiteral("add"));
        add->setGeometry(QRect(10, 110, 113, 32));
        QFont font;
        font.setPointSize(20);
        add->setFont(font);
        added = new QLineEdit(Dialog);
        added->setObjectName(QStringLiteral("added"));
        added->setGeometry(QRect(230, 110, 113, 32));
        res = new QLineEdit(Dialog);
        res->setObjectName(QStringLiteral("res"));
        res->setGeometry(QRect(490, 110, 113, 32));
        equ = new QPushButton(Dialog);
        equ->setObjectName(QStringLiteral("equ"));
        equ->setGeometry(QRect(380, 110, 92, 28));
        equ->setFont(font);
        oper = new QLabel(Dialog);
        oper->setObjectName(QStringLiteral("oper"));
        oper->setGeometry(QRect(165, 114, 20, 20));
        oper->setFont(font);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0));
        equ->setText(QApplication::translate("Dialog", "=", 0));
        oper->setText(QApplication::translate("Dialog", "+", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // JFQ_H
