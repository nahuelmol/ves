/********************************************************************************
** Form generated from reading UI file 'workspace.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORKSPACE_H
#define UI_WORKSPACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Workspace
{
public:

    void setupUi(QDialog *Workspace)
    {
        if (Workspace->objectName().isEmpty())
            Workspace->setObjectName(QString::fromUtf8("Workspace"));
        Workspace->resize(400, 300);

        retranslateUi(Workspace);

        QMetaObject::connectSlotsByName(Workspace);
    } // setupUi

    void retranslateUi(QDialog *Workspace)
    {
        Workspace->setWindowTitle(QCoreApplication::translate("Workspace", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Workspace: public Ui_Workspace {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORKSPACE_H
