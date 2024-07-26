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
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
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
    QGraphicsView *graphicsView;
    QPushButton *importBtn;
    QTextBrowser *monitorText;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QPushButton *inputsBtn;

    void setupUi(QDialog *Tomomanager)
    {
        if (Tomomanager->objectName().isEmpty())
            Tomomanager->setObjectName(QString::fromUtf8("Tomomanager"));
        Tomomanager->resize(859, 405);
        buttonBox = new QDialogButtonBox(Tomomanager);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(340, 360, 181, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        qwtPlot = new QwtPlot(Tomomanager);
        qwtPlot->setObjectName(QString::fromUtf8("qwtPlot"));
        qwtPlot->setGeometry(QRect(30, 80, 400, 181));
        label = new QLabel(Tomomanager);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 20, 471, 61));
        buildBtn = new QPushButton(Tomomanager);
        buildBtn->setObjectName(QString::fromUtf8("buildBtn"));
        buildBtn->setGeometry(QRect(130, 360, 61, 28));
        displayBtn = new QPushButton(Tomomanager);
        displayBtn->setObjectName(QString::fromUtf8("displayBtn"));
        displayBtn->setGeometry(QRect(200, 360, 71, 28));
        graphicsView = new QGraphicsView(Tomomanager);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(470, 80, 381, 201));
        importBtn = new QPushButton(Tomomanager);
        importBtn->setObjectName(QString::fromUtf8("importBtn"));
        importBtn->setGeometry(QRect(50, 360, 71, 28));
        monitorText = new QTextBrowser(Tomomanager);
        monitorText->setObjectName(QString::fromUtf8("monitorText"));
        monitorText->setGeometry(QRect(590, 290, 256, 101));
        lineEdit = new QLineEdit(Tomomanager);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(30, 280, 41, 31));
        lineEdit_2 = new QLineEdit(Tomomanager);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(80, 280, 41, 31));
        lineEdit_3 = new QLineEdit(Tomomanager);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(130, 280, 41, 31));
        lineEdit_4 = new QLineEdit(Tomomanager);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(180, 280, 41, 31));
        inputsBtn = new QPushButton(Tomomanager);
        inputsBtn->setObjectName(QString::fromUtf8("inputsBtn"));
        inputsBtn->setGeometry(QRect(260, 280, 94, 28));

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
        importBtn->setText(QCoreApplication::translate("Tomomanager", "Import", nullptr));
        inputsBtn->setText(QCoreApplication::translate("Tomomanager", "inputsBtn", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tomomanager: public Ui_Tomomanager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOMOMANAGER_H
