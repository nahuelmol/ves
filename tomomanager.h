#ifndef TOMOMANAGER_H
#define TOMOMANAGER_H

#include <QWidget>
#include <QDialog>
#include <QMainWindow>
#include <QTextBrowser>

#include <qwt_plot.h>
#include <qwt_plot_curve.h>
#include "tomoscene.h"

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
    void onaction_dis();
    void onaction_imp();

private:
    Ui::Tomomanager *ui; 
    Tomoscene *scene;

    QTextBrowser *monitor;
    QwtPlot *plot;
};

#endif // TOMOMANAGER_H
