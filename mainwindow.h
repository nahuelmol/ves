#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QKeyEvent>

#include "tomomanager.h"
#include "seismic.h"
#include "console.h"
#include "widgets/workflow.h"

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
    void onaction_just_window();
    void onaction_wf();

private:
    Ui::MainWindow *ui;
    Tomomanager *tomomanager;
    Seismic *seismic;
    Console *console;
    Workflow *workflow;
    Workspace *workspace;
    
protected:
    void keyPressEvent(QKeyEvent *event) override;
};

#endif // MAINWINDOW_H

