#include "tomoscene.h"
#include <iostream>

#include <qwt_plot.h>
#include <qwt_plot_curve.h>
#include <QTextBrowser>

Tomoscene::Tomoscene(QObject *parent) : QGraphicsScene(parent)
{
    // Initialize scene properties or add initial items if needed
}

void Tomoscene::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        //QGraphicsItem *item = itemAt(event->scenePos(), QTransform());
        /*if (item) {
            qDebug() << "item clicked";
        } else {
            qDebug() << "out item";
        }*/
    } else if (event->button() == Qt::RightButton) {
        QGraphicsItem *item = itemAt(event->scenePos(), QTransform());
    }

    QPointF point = event->scenePos();
    float x = point.x();
    float y = point.y();
    std::string xstd = std::to_string(x);
    std::string ystd = std::to_string(y);
    
    QTextBrowser *tb = parent()->findChild<QTextBrowser*>("monitorText");
    std::string msg = "(" + xstd + "," + ystd + ")";
    const QString& message = QString::fromStdString(msg);
    tb->setPlainText(message);

    QGraphicsScene::mousePressEvent(event);
}

