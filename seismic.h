#ifndef SEISMIC_H
#define SEISMIC_H

#include <QWidget>
#include <QDialog>
#include <QMainWindow>
#include <QTextBrowser>

#include <qwt_plot.h>
#include <qwt_plot_curve.h>

QT_BEGIN_NAMESPACE
namespace Ui { class Seismic; }
QT_END_NAMESPACE

class Seismic : public QDialog
{
    Q_OBJECT

public:
    explicit Seismic(QWidget *parent = nullptr);
    ~Seismic();

private slots:
    void prove();

private:
    Ui::Seismic *ui; 
};

#endif // SEISMIC_H
