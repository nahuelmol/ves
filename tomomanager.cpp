#include <lua.hpp>
#include "tomoconns.cpp"
#include "tomomanager.h"
#include "ui_tomomanager.h"
#include "tomoscene.h"
#include "geometry/figures.cpp"

#include <QMainWindow>
#include <QPainter>
#include <QGraphicsItem>

#include <qwt_plot.h>
#include <qwt_plot_curve.h>
#include <qwt_plot_zoomer.h>
#include <qwt_plot_panner.h>

Tomomanager::Tomomanager(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Tomomanager)
    , scene(new Tomoscene(this))
{
    ui->setupUi(this);
    plot = ui->qwtPlot;

    Square *simple = new Square(40);
    scene->addItem(simple);
    ui->graphicsView->setScene(scene);

    QwtPlotCurve *curve = new QwtPlotCurve("Data");
    curve->setPen(QColor(Qt::blue), 2);
    double xData[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    double yData[10] = {0, 1, 4, 9, 16, 25, 36, 49, 64, 81};
    curve->setSamples(xData, yData, 10); // Load data into the curve

    curve->attach(plot);

    QwtPlotZoomer *zoomer = new QwtPlotZoomer(plot->canvas());
    zoomer->setRubberBand(QwtPicker::RectRubberBand);
    zoomer->setZoomBase(plot->rect());

    QwtPlotPanner *panner = new QwtPlotPanner(plot->canvas());
    panner->setMouseButton(Qt::MiddleButton);

    connect(ui->buildBtn, &QPushButton::clicked, this, &Tomomanager::onaction_build);
    connect(ui->displayBtn, &QPushButton::clicked, this, &Tomomanager::onaction_dis);
    connect(ui->importBtn, &QPushButton::clicked, this, &Tomomanager::onaction_imp);
}

Tomomanager::~Tomomanager()
{
    delete ui;
}

void Tomomanager::onaction_imp(){
    qDebug() << "importing";
}

void Tomomanager::onaction_build(){
    std::string filename = "index";
    lua_State* L = conns();
    const char* command = "BUILD";
    lua_pushstring(L, command);
    lua_setglobal(L,"CMD");
    tomoloads(filename, L);
    lua_close(L);
}
void Tomomanager::onaction_dis(){
    std::string filename = "index";
    lua_State* L = conns();
    const char* command = "DISPLAY";
    lua_pushstring(L, command);
    lua_setglobal(L,"CMD");
    tomoloads(filename, L);
    lua_close(L);
}
