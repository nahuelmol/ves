#include<lua.hpp>
#include "embedded.cpp"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->actionRender_curve, &QAction::triggered, this, &MainWindow::onaction_curve);
}

void MainWindow::onaction_curve(){
    QMessageBox::information(this, "Button Render Curve", "Button 1 clicked");

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
}

