/********************************************************************************
** Form generated from reading UI file 'workflow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORKFLOW_H
#define UI_WORKFLOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Workflow
{
public:

    void setupUi(QDialog *Workflow)
    {
        if (Workflow->objectName().isEmpty())
            Workflow->setObjectName(QString::fromUtf8("Workflow"));
        Workflow->resize(400, 300);

        retranslateUi(Workflow);

        QMetaObject::connectSlotsByName(Workflow);
    } // setupUi

    void retranslateUi(QDialog *Workflow)
    {
        Workflow->setWindowTitle(QCoreApplication::translate("Workflow", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Workflow: public Ui_Workflow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORKFLOW_H
