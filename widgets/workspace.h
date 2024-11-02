

#ifndef WORKSPACE_H
#define WORKSPACE_H

#include <QWidget>
#include <QDialog>
#include <QMainWindow>
#include <QTextBrowser>

QT_BEGIN_NAMESPACE
namespace Ui { class Workspace; }
QT_END_NAMESPACE

class Workspace : public QDialog
{
    Q_OBJECT

public:
    explicit Workspace(QWidget *parent = nullptr);
    ~Workspace();

    void looking();

private:
    Ui::Workspace *ui; 
};
#endif // WORKSPACE_H

