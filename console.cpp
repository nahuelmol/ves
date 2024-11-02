
#include "console.h"
#include "ui_console.h"
#include <QMessageBox>
#include "MyTextEdit.h"
#include "MyTextEdit.cpp"

#include "builder.cpp"

Console::Console(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Console)
    , workflow(nullptr)
{
    ui->setupUi(this);
    MyTextEdit *textEdit = new MyTextEdit(this);
    textEdit->setGeometry(ui->textEdit->geometry());
    textEdit->setParent(static_cast<QWidget*>(ui->textEdit->parent()));

    delete ui->textEdit;
    ui->textEdit = textEdit; 
    connect(textEdit, &MyTextEdit::enterPressed, this, &Console::entering);
}

Console::~Console()
{
    delete ui;
}

void Console::cmd_switcher(Command cmd) {
    if(cmd.get_cmd() == "show"){
        shower(cmd.get_target());
    } else if(cmd.get_cmd() == "close"){
        closer(cmd.get_target());
    }
}

void Console::shower(std::string target) {
    if(target == "wf") {
        show_workflow();
    } else if(target == "projects") {
        show_projects();//this shows projects in the current dir
    }
}

void Console::show_workflow() {
    if(!workflow)
        workflow = new Workflow(this);
    workflow->show();
}

void Console::show_projects() {
    if(!workspace)
        workspace = new Workspace(this);
    workspace->show();
    workspace->looking();
}

void Console::closer(std::string target) {
    if(target == "wf"){
        if(workflow)
            workflow->close();
    } else if(target == "projects") {
        if(workspace)
            workspace->close();
    }
}

bool Console::command_builder(std::string cmdstring) {
    std::string command = "";
    std::vector<std::string> words;
    for (char c : cmdstring) {
        if (c == ' ') {
            words.push_back(command);
            command = "";
        } else {
            command.push_back(c);
        }
    }
    if (!command.empty()) {
        words.push_back(command);
    }
    Command cmd(words);
    if (cmd.build() == false) {
        std::cout << "command cannot be created" << std::endl;
        return false;
    } else {
        std::cout << "command created" << std::endl;
        cmd_switcher(cmd);
        return true;
    };
}

void Console::entering() {
    QString cmd = ui->textEdit->toPlainText();
    std::string cmdstring = cmd.toStdString();
    if(command_builder(cmdstring) == false){
        QString errmsg = "wrong command";
        ui->errCommand->setPlainText(errmsg);
    } else {
        QString okmsg = "right command";
        ui->errCommand->setPlainText(okmsg);
    }
    QString previous = ui->textBrowser->toPlainText();
    QString content = previous + "\n" + cmd; 
    ui->textBrowser->setPlainText(content);
    ui->textEdit->clear();
}
