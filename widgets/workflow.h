#ifndef WORKFLOW_H
#define WORKFLOW_H

#include <QWidget>
#include <QDialog>
#include <QMainWindow>
#include <QTextBrowser>

QT_BEGIN_NAMESPACE
namespace Ui { class Workflow; }
QT_END_NAMESPACE

class Workflow : public QDialog
{
    Q_OBJECT

public:
    explicit Workflow(QWidget *parent = nullptr);
    ~Workflow();

private:
    Ui::Workflow *ui; 
};
#endif // WORKFLOW_H

