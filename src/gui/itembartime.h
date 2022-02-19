#ifndef ITEMBARTIME_H
#define ITEMBARTIME_H

#include <QWidget>
#include <QGraphicsObject>
#include <QPainter>

class itemBarTime : public QGraphicsObject
{
    Q_OBJECT
public:
    explicit itemBarTime(QGraphicsItem *parent = nullptr);

signals:

protected:
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

};

#endif // ITEMBARTIME_H
