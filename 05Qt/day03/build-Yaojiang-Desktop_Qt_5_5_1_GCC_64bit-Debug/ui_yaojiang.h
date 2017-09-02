/********************************************************************************
** Form generated from reading UI file 'yaojiang.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_YAOJIANG_H
#define UI_YAOJIANG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_YaoJiang
{
public:
    QLabel *label;
    QLabel *zhongjianren;
    QPushButton *pstart;
    QPushButton *pstop;

    void setupUi(QDialog *YaoJiang)
    {
        if (YaoJiang->objectName().isEmpty())
            YaoJiang->setObjectName(QStringLiteral("YaoJiang"));
        YaoJiang->resize(400, 600);
        label = new QLabel(YaoJiang);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 40, 61, 31));
        zhongjianren = new QLabel(YaoJiang);
        zhongjianren->setObjectName(QStringLiteral("zhongjianren"));
        zhongjianren->setGeometry(QRect(200, 47, 63, 20));
        pstart = new QPushButton(YaoJiang);
        pstart->setObjectName(QStringLiteral("pstart"));
        pstart->setGeometry(QRect(40, 560, 92, 28));
        pstop = new QPushButton(YaoJiang);
        pstop->setObjectName(QStringLiteral("pstop"));
        pstop->setGeometry(QRect(290, 560, 92, 28));

        retranslateUi(YaoJiang);

        QMetaObject::connectSlotsByName(YaoJiang);
    } // setupUi

    void retranslateUi(QDialog *YaoJiang)
    {
        YaoJiang->setWindowTitle(QApplication::translate("YaoJiang", "YaoJiang", 0));
        label->setText(QApplication::translate("YaoJiang", "\344\270\255\345\245\226\344\272\272:", 0));
        zhongjianren->setText(QString());
        pstart->setText(QApplication::translate("YaoJiang", "start", 0));
        pstop->setText(QApplication::translate("YaoJiang", "stop", 0));
    } // retranslateUi

};

namespace Ui {
    class YaoJiang: public Ui_YaoJiang {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_YAOJIANG_H
