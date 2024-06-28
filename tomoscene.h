#ifndef TOMOSCENE_H
#define TOMOSCENE_H

#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>
#include <QDebug>

class Tomoscene : public QGraphicsScene
{
    Q_OBJECT
public:
    explicit Tomoscene(QObject *parent = nullptr);

protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *event) override;
};

#endif // TOMOSCENE_H
