#ifndef CONSOLE_H
#define CONSOLE_H

#include <QWidget>
#include <QDialog>
#include <QMainWindow>
#include <QTextBrowser>

#include <QMainWindow>
#include <QKeyEvent>
#include "objs/cmd.cpp"
#include "widgets/workflow.h"
#include "widgets/workspace.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Console; }
QT_END_NAMESPACE

class Console : public QDialog
{
    Q_OBJECT

public:
    explicit Console(QWidget *parent = nullptr);
    ~Console();

private slots:
    void entering();

public:
    bool command_builder(std::string);
    void show_workflow();
    void show_projects();
    void closer(std::string);

    void cmd_switcher(Command);
    void shower(std::string);

private:
    Ui::Console *ui;
    Workflow *workflow;
    Workspace *workspace;
};

#endif // CONSOLE_H
