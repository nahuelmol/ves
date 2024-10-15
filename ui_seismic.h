/********************************************************************************
** Form generated from reading UI file 'seismic.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEISMIC_H
#define UI_SEISMIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Seismic
{
public:
    QPushButton *okBtn;

    void setupUi(QDialog *Seismic)
    {
        if (Seismic->objectName().isEmpty())
            Seismic->setObjectName(QString::fromUtf8("Seismic"));
        Seismic->resize(400, 300);
        okBtn = new QPushButton(Seismic);
        okBtn->setObjectName(QString::fromUtf8("okBtn"));
        okBtn->setGeometry(QRect(280, 30, 94, 28));

        retranslateUi(Seismic);

        QMetaObject::connectSlotsByName(Seismic);
    } // setupUi

    void retranslateUi(QDialog *Seismic)
    {
        Seismic->setWindowTitle(QCoreApplication::translate("Seismic", "Dialog", nullptr));
        okBtn->setText(QCoreApplication::translate("Seismic", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Seismic: public Ui_Seismic {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEISMIC_H
