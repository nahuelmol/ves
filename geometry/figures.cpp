#include <QGraphicsItem>
#include <QPainter>

class Square : public QGraphicsItem {
public:
    Square(int size) : size(size) {}

    QRectF boundingRect() const override {
        return QRectF(0, 0, size, size);
    }

    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override {
        Q_UNUSED(option)
        Q_UNUSED(widget)

        painter->setBrush(Qt::blue);  // Set the color you want for the square
        painter->drawRect(0, 0, size, size);
    }

private:
    int size;
};
