
#include "console.h"
#include "ui_console.h"
#include <QMessageBox>
#include <QDebug>
#include "MyTextEdit.h"
#include "MyTextEdit.cpp"

#include "builder.cpp"

Console::Console(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Console)
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

void Console::entering() {
    QString cmd = ui->textEdit->toPlainText();
    std::string cmdstring = cmd.toStdString();
    command_builder(cmdstring);

    QString previous = ui->textBrowser->toPlainText();
    QString content = previous + "\n" + cmd; 
    ui->textBrowser->setPlainText(content);
    ui->textEdit->clear();
}
