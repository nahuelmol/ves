#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "tomomanager.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void onaction_curve();
    void onaction_corte();
    void onaction_build_corte();
    void onaction_tomomanager();

private:
    Ui::MainWindow *ui;
    Tomomanager *tomomanager;
};

#endif // MAINWINDOW_H

