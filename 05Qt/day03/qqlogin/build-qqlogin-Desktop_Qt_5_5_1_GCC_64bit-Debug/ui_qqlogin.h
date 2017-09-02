/********************************************************************************
** Form generated from reading UI file 'qqlogin.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QQLOGIN_H
#define UI_QQLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QQLogin
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *uname;
    QLineEdit *upasswd;
    QPushButton *login;
    QPushButton *cancel;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QQLogin)
    {
        if (QQLogin->objectName().isEmpty())
            QQLogin->setObjectName(QStringLiteral("QQLogin"));
        QQLogin->resize(400, 300);
        centralWidget = new QWidget(QQLogin);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 30, 63, 20));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 80, 63, 20));
        uname = new QLineEdit(centralWidget);
        uname->setObjectName(QStringLiteral("uname"));
        uname->setGeometry(QRect(180, 20, 113, 32));
        upasswd = new QLineEdit(centralWidget);
        upasswd->setObjectName(QStringLiteral("upasswd"));
        upasswd->setGeometry(QRect(180, 70, 113, 32));
        upasswd->setEchoMode(QLineEdit::Password);
        login = new QPushButton(centralWidget);
        login->setObjectName(QStringLiteral("login"));
        login->setGeometry(QRect(60, 180, 92, 28));
        cancel = new QPushButton(centralWidget);
        cancel->setObjectName(QStringLiteral("cancel"));
        cancel->setGeometry(QRect(240, 180, 92, 28));
        QQLogin->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QQLogin);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 31));
        QQLogin->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QQLogin);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QQLogin->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QQLogin);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QQLogin->setStatusBar(statusBar);

        retranslateUi(QQLogin);

        QMetaObject::connectSlotsByName(QQLogin);
    } // setupUi

    void retranslateUi(QMainWindow *QQLogin)
    {
        QQLogin->setWindowTitle(QApplication::translate("QQLogin", "QQLogin", 0));
        label->setText(QApplication::translate("QQLogin", "username", 0));
        label_2->setText(QApplication::translate("QQLogin", "password", 0));
        login->setText(QApplication::translate("QQLogin", "login", 0));
        cancel->setText(QApplication::translate("QQLogin", "cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class QQLogin: public Ui_QQLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QQLOGIN_H
