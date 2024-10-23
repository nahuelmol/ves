

#include "ui_workflow.h"
#include "widgets/workflow.h"

#include <QMainWindow>
#include <QPainter>
#include <QGraphicsItem>


Workflow::Workflow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Workflow)
{
    ui->setupUi(this);
}

Workflow::~Workflow()
{
    delete ui;
}


