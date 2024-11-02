

#include "ui_workspace.h"
#include "widgets/workspace.h"

#include <QMainWindow>
#include <QPainter>
#include <QGraphicsItem>
#include <QDebug>

Workspace::Workspace(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Workspace)
{
    ui->setupUi(this);
}

Workspace::~Workspace()
{
    delete ui;
}

void Workspace::looking() {
    qDebug() << "looking";
}
