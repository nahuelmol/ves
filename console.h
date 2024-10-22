#ifndef CONSOLE_H
#define CONSOLE_H

#include <QWidget>
#include <QDialog>
#include <QMainWindow>
#include <QTextBrowser>

#include <QMainWindow>
#include <QKeyEvent>

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

private:
    Ui::Console *ui;
};

#endif // CONSOLE_H
