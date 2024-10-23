/********************************************************************************
** Form generated from reading UI file 'console.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSOLE_H
#define UI_CONSOLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Console
{
public:
    QTextEdit *textEdit;
    QTextBrowser *textBrowser;
    QTextBrowser *errCommand;

    void setupUi(QDialog *Console)
    {
        if (Console->objectName().isEmpty())
            Console->setObjectName(QString::fromUtf8("Console"));
        Console->resize(400, 467);
        textEdit = new QTextEdit(Console);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 360, 381, 91));
        textBrowser = new QTextBrowser(Console);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(10, 20, 381, 271));
        errCommand = new QTextBrowser(Console);
        errCommand->setObjectName(QString::fromUtf8("errCommand"));
        errCommand->setGeometry(QRect(10, 300, 381, 51));

        retranslateUi(Console);

        QMetaObject::connectSlotsByName(Console);
    } // setupUi

    void retranslateUi(QDialog *Console)
    {
        Console->setWindowTitle(QCoreApplication::translate("Console", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Console: public Ui_Console {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSOLE_H
