
#include <lua.hpp>
#include "ui_seismic.h"
#include "seismic.h"
#include "seismic_cons.cpp"

#include <QMainWindow>
#include <QPainter>
#include <QGraphicsItem>
#include <QDebug>

#include <qwt_plot.h>
#include <qwt_plot_curve.h>
#include <qwt_plot_zoomer.h>
#include <qwt_plot_panner.h>


Seismic::Seismic(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Seismic)
{
    ui->setupUi(this);
    connect(ui->okBtn, &QPushButton::clicked, this, &Seismic::prove);
}

Seismic::~Seismic()
{
    delete ui;
}

void Seismic::prove(){
    std::string filename = "index";
    lua_State* L = seismic_conn();
    const char* command = "SEIS";
    lua_pushstring(L, command);
    lua_setglobal(L,"CMD");
    seismic_loads(filename, L);
    lua_close(L);
}
