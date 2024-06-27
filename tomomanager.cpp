#include <lua.hpp>
#include "tomoconns.cpp"
#include "tomomanager.h"
#include "ui_tomomanager.h"
#include <QMainWindow>

Tomomanager::Tomomanager(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Tomomanager)
{
    ui->setupUi(this);

    connect(ui->buildBtn, &QPushButton::clicked, this, &Tomomanager::onaction_build);
    connect(ui->displayBtn, &QPushButton::clicked, this, &Tomomanager::onaction_dis);
}

Tomomanager::~Tomomanager()
{
    delete ui;
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
