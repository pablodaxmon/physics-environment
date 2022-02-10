#ifndef ACTOR_H
#define ACTOR_H

#include <QPainter>
#include <QObject>
#include <QDebug>
#include <QVector2D>
#include <QPointF>
#include <QList>
#include <QGraphicsItem>
#include <QMap>
#include "physics.h"
#include "src/core/equation.h"
#include "src/core/equationrunner.h"
#include "src/core/equationmaker.h"


class Actor : public QGraphicsItem
{

public:
    explicit Actor(QGraphicsItem *parent = nullptr);

    void updateData();

    int getIndexInList();
    void setIndexInList(int newIndexInList);


    float getPositionX() const;
    void setPositionX(float newPositionX);

    float getPositionY() const;
    void setPositionY(float newPositionY);

    float getSpeed() const;
    void setSpeed(float newSpeed);

    float getSpeedX() const;
    void setSpeedX(float newSpeedX);

    float getSpeedY() const;
    void setSpeedY(float newSpeedY);

    float getAcceleration() const;
    void setAcceleration(float newAcceleration);

    float getAccelerationX() const;
    void setAccelerationX(float newAccelerationX);

    float getAccelerationY() const;
    void setAccelerationY(float newAccelerationY);

    const QString &getName() const;
    void setName(const QString &newName);

    void setPressed(bool newPressed);

protected:
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    bool pressed;
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);

private:

    QString name;
    int indexInList;
    float mass;
    float positionX;
    float positionY;
    float speed;
    float speedX;
    float speedY;
    float acceleration;
    float accelerationX;
    float accelerationY;



};

#endif // ACTOR_H
