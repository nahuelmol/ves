#ifndef TOMOMANAGER_H
#define TOMOMANAGER_H

#include <QWidget>
#include <QDialog>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Tomomanager; }
QT_END_NAMESPACE

class Tomomanager : public QDialog
{
    Q_OBJECT

public:
    explicit Tomomanager(QWidget *parent = nullptr);
    ~Tomomanager();

private slots:
    void onaction_build();
    void onaction_display();

private:
    Ui::Tomomanager *ui; 
};

#endif // TOMOMANAGER_H

