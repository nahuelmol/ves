/********************************************************************************
** Form generated from reading UI file 'tomomanager.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOMOMANAGER_H
#define UI_TOMOMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include "qwt_plot.h"

QT_BEGIN_NAMESPACE

class Ui_Tomomanager
{
public:
    QDialogButtonBox *buttonBox;
    QwtPlot *qwtPlot;
    QLabel *label;
    QPushButton *buildBtn;
    QPushButton *displayBtn;

    void setupUi(QDialog *Tomomanager)
    {
        if (Tomomanager->objectName().isEmpty())
            Tomomanager->setObjectName(QString::fromUtf8("Tomomanager"));
        Tomomanager->resize(533, 405);
        buttonBox = new QDialogButtonBox(Tomomanager);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(340, 360, 181, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        qwtPlot = new QwtPlot(Tomomanager);
        qwtPlot->setObjectName(QString::fromUtf8("qwtPlot"));
        qwtPlot->setGeometry(QRect(30, 80, 400, 200));
        label = new QLabel(Tomomanager);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 20, 471, 61));
        buildBtn = new QPushButton(Tomomanager);
        buildBtn->setObjectName(QString::fromUtf8("buildBtn"));
        buildBtn->setGeometry(QRect(20, 360, 94, 28));
        displayBtn = new QPushButton(Tomomanager);
        displayBtn->setObjectName(QString::fromUtf8("displayBtn"));
        displayBtn->setGeometry(QRect(130, 360, 94, 28));

        retranslateUi(Tomomanager);
        QObject::connect(buttonBox, SIGNAL(accepted()), Tomomanager, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Tomomanager, SLOT(reject()));

        QMetaObject::connectSlotsByName(Tomomanager);
    } // setupUi

    void retranslateUi(QDialog *Tomomanager)
    {
        Tomomanager->setWindowTitle(QCoreApplication::translate("Tomomanager", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Tomomanager", "Here must be inserted the formated file for building the tomography", nullptr));
        buildBtn->setText(QCoreApplication::translate("Tomomanager", "Build", nullptr));
        displayBtn->setText(QCoreApplication::translate("Tomomanager", "Display", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tomomanager: public Ui_Tomomanager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOMOMANAGER_H
