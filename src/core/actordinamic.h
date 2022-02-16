#ifndef ACTORDINAMIC_H
#define ACTORDINAMIC_H

#include <QObject>
#include "actor.h"
#include "src/box2d/b2_body.h"

class ActorDinamic : public Actor
{
    Q_OBJECT
public:
    explicit ActorDinamic(QGraphicsItem *parent = nullptr);

    b2Body *getBody() const;
    void setBody(b2Body *newBody);

    void updateData(float time);
    void updatePos();
protected:
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event) override;

private:

    b2Body * body;

};

#endif // ACTORDINAMIC_H
