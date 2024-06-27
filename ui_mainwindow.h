/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionLoad;
    QAction *actionRender_curve;
    QAction *actionGet_corte_geoelectrico;
    QAction *actionsave_in_file;
    QAction *actionBuild_corte;
    QAction *actionStart_New;
    QAction *actionTomo_Manager;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuTools;
    QMenu *menuTomography;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(555, 851);
        actionLoad = new QAction(MainWindow);
        actionLoad->setObjectName(QString::fromUtf8("actionLoad"));
        actionRender_curve = new QAction(MainWindow);
        actionRender_curve->setObjectName(QString::fromUtf8("actionRender_curve"));
        actionGet_corte_geoelectrico = new QAction(MainWindow);
        actionGet_corte_geoelectrico->setObjectName(QString::fromUtf8("actionGet_corte_geoelectrico"));
        actionsave_in_file = new QAction(MainWindow);
        actionsave_in_file->setObjectName(QString::fromUtf8("actionsave_in_file"));
        actionBuild_corte = new QAction(MainWindow);
        actionBuild_corte->setObjectName(QString::fromUtf8("actionBuild_corte"));
        actionStart_New = new QAction(MainWindow);
        actionStart_New->setObjectName(QString::fromUtf8("actionStart_New"));
        actionTomo_Manager = new QAction(MainWindow);
        actionTomo_Manager->setObjectName(QString::fromUtf8("actionTomo_Manager"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 555, 28));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuTools = new QMenu(menubar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        menuTomography = new QMenu(menubar);
        menuTomography->setObjectName(QString::fromUtf8("menuTomography"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuTools->menuAction());
        menubar->addAction(menuTomography->menuAction());
        menuFile->addAction(actionLoad);
        menuFile->addAction(actionsave_in_file);
        menuTools->addAction(actionRender_curve);
        menuTools->addAction(actionGet_corte_geoelectrico);
        menuTools->addAction(actionBuild_corte);
        menuTomography->addAction(actionStart_New);
        menuTomography->addAction(actionTomo_Manager);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionLoad->setText(QCoreApplication::translate("MainWindow", "Load", nullptr));
        actionRender_curve->setText(QCoreApplication::translate("MainWindow", "Render curve", nullptr));
        actionGet_corte_geoelectrico->setText(QCoreApplication::translate("MainWindow", "Get corte geoelectrico", nullptr));
        actionsave_in_file->setText(QCoreApplication::translate("MainWindow", "Save in file", nullptr));
        actionBuild_corte->setText(QCoreApplication::translate("MainWindow", "Build corte", nullptr));
        actionStart_New->setText(QCoreApplication::translate("MainWindow", "Start New", nullptr));
        actionTomo_Manager->setText(QCoreApplication::translate("MainWindow", "Tomo Manager", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuTools->setTitle(QCoreApplication::translate("MainWindow", "Tools", nullptr));
        menuTomography->setTitle(QCoreApplication::translate("MainWindow", "Tomography", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
