
#include "console.h"
#include "ui_console.h"
#include <QMessageBox>
#include <QDebug>
#include "MyTextEdit.h"
#include "MyTextEdit.cpp"

Console::Console(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Console)
{
    ui->setupUi(this);
    MyTextEdit *textEdit = new MyTextEdit(this);
    textEdit->setGeometry(ui->textEdit->geometry());  // Mantener la geometría del widget original
    textEdit->setParent(static_cast<QWidget*>(ui->textEdit->parent()));  // Cast explícito a QWidget*

    // Eliminar el QTextEdit original
    delete ui->textEdit;
    ui->textEdit = textEdit; 
    connect(textEdit, &MyTextEdit::enterPressed, this, &Console::entering);
}

Console::~Console()
{
    delete ui;
}

void Console::entering() {
    qDebug() << "entering";
    QString content = ui->textBrowser->toPlainText() + "\n" + ui->textEdit->toPlainText();
    ui->textBrowser->setPlainText(content);
    ui->textEdit->clear();
}
