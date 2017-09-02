/********************************************************************************
** Form generated from reading UI file 'mytime.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYTIME_H
#define UI_MYTIME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_MyTime
{
public:
    QLabel *showTime;

    void setupUi(QDialog *MyTime)
    {
        if (MyTime->objectName().isEmpty())
            MyTime->setObjectName(QStringLiteral("MyTime"));
        MyTime->resize(400, 300);
        MyTime->setAutoFillBackground(true);
        showTime = new QLabel(MyTime);
        showTime->setObjectName(QStringLiteral("showTime"));
        showTime->setGeometry(QRect(100, 110, 171, 51));
        QFont font;
        font.setPointSize(30);
        showTime->setFont(font);
        showTime->setFrameShape(QFrame::Box);

        retranslateUi(MyTime);

        QMetaObject::connectSlotsByName(MyTime);
    } // setupUi

    void retranslateUi(QDialog *MyTime)
    {
        MyTime->setWindowTitle(QApplication::translate("MyTime", "MyTime", 0));
        showTime->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MyTime: public Ui_MyTime {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYTIME_H
