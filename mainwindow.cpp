#include <lua.hpp>
#include "embedded.cpp"
#include "mainwindow.h"
#include "tomomanager.h"
#include "seismic.h"
#include "ui_mainwindow.h"
#include "ui_tomomanager.h"
#include "ui_seismic.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , tomomanager(nullptr)
    , seismic(nullptr)
{
    ui->setupUi(this);

    connect(ui->actionRender_curve, &QAction::triggered, this, &MainWindow::onaction_curve);
    connect(ui->actionGet_corte_geoelectrico, &QAction::triggered, this, &MainWindow::onaction_corte);
    connect(ui->actionBuild_corte, &QAction::triggered, this, &MainWindow::onaction_build_corte);
    connect(ui->actionTomo_Manager, &QAction::triggered, this, &MainWindow::onaction_tomomanager);
    connect(ui->actionJust_window, &QAction::triggered, this, &MainWindow::onaction_just_window);
}


void MainWindow::onaction_just_window() {
    std::cout << "opening" << std::endl;
    if(!seismic)
        seismic = new Seismic(this);
    seismic->show();
}

void MainWindow::onaction_tomomanager(){
    std::string filename = "index";
    lua_State* L = lua_connection();
    const char* command = "TOMOMANAGER";
    lua_pushstring(L, command);
    lua_setglobal(L,"CMD");
    lua_load(filename, L);
    lua_close(L);

    if(!tomomanager)
        tomomanager = new Tomomanager(this);
    tomomanager->show();
}
void MainWindow::onaction_build_corte(){
    std::string filename = "index";
    lua_State* L = lua_connection();
    const char* command = "BUILDCORTE";
    lua_pushstring(L, command);
    lua_setglobal(L,"CMD");
    lua_load(filename, L);
    lua_close(L);
}

void MainWindow::onaction_corte(){
    std::string filename = "index";
    lua_State* L = lua_connection();
    const char* command = "CORTE";
    lua_pushstring(L, command);
    lua_setglobal(L,"CMD");
    const char* namecorte = "corte1";
    lua_pushstring(L, namecorte);
    lua_setglobal(L,"nameCORTE");
    lua_load(filename, L);
    lua_close(L);
}

void MainWindow::onaction_curve(){
    std::string filename = "index";
    lua_State* L = lua_connection();
    const char* command = "CREATE";
    lua_pushstring(L, command);
    lua_setglobal(L, "CMD");
    lua_load(filename, L);
    lua_close(L);
}


MainWindow::~MainWindow()
{
    delete ui;
    if(tomomanager)
        delete tomomanager;
}

