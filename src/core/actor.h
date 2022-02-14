#ifndef ACTOR_H
#define ACTOR_H

#include <QPainter>
#include <QObject>
#include <QDebug>
#include <QVector2D>
#include <QPointF>
#include <QList>
#include <QGraphicsObject>
#include <QMap>
#include "physics.h"
#include "src/core/equation.h"
#include "src/core/equationrunner.h"
#include "src/core/equationmaker.h"
#include "src/gui/graphicsscene.h"


class Actor : public QGraphicsObject
{

    Q_OBJECT
signals:
    void valuesChanged();
public slots:
    void setValues();
    void getValueFromID(int id);
public:
    explicit Actor(QGraphicsItem *parent = nullptr);

    void startData();
    void updateData(float time);

    int getIndexInList();
    void setIndexInList(int newIndexInList);



    const QString &getName() const;
    void setName(const QString &newName);


    void setGraphicsScene(GraphicsScene *newGraphicsview);

    /*bool getSelected() const;
    void setSelected(bool newSelected);*/


    QMap<Unit, float> *getValues();

    float getPositionX() const;
    void setPositionX(float newPositionX);

    float getPositionY() const;
    void setPositionY(float newPositionY);

    float getVelocity() const;
    void setVelocity(float newVelocity);

    float getVelocityX() const;
    void setVelocityX(float newVelocityX);

    float getVelocityY() const;
    void setVelocityY(float newVelocityY);

    float getAceleration() const;
    void setAceleration(float newAceleration);

    float getAcelerationX() const;
    void setAcelerationX(float newAcelerationX);

    float getAcelerationY() const;
    void setAcelerationY(float newAcelerationY);

    float getMass() const;
    void setMass(float newMass);

protected:
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    //bool selected;
    void mousePressEvent(QGraphicsSceneMouseEvent *event) override;
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event) override;
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event) override;
    void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override;
    void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override;


private:

    QString name;
    int indexInList;
    QMap<Unit, float> values;
    GraphicsScene * graphicsScene;

    float positionX;
    float positionY;
    float velocity;
    float velocityX;
    float velocityY;
    float aceleration;
    float acelerationX;
    float acelerationY;
    float mass;

//superprivate
    float init_positionX;
    float init_positionY;
    float last_positionX;
    float last_positionY;
    float init_velocityX;
    float init_velocityY;
    float last_velocityX;
    float last_velocityY;




};

#endif // ACTOR_H
