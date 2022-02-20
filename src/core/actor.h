#ifndef ACTOR_H
#define ACTOR_H
#define SCALE_V 6.0f

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
#include "src/box2d/box2d.h"
enum class TypeActor { Cuadrado, Triangulo, Hexagono, CuboEstatico, TrianguloEstatico};

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

    virtual void startData(b2World* world);
    virtual void updateData(float time);
    virtual void stopData();

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

    const QString &getIdentifier() const;
    void setIdentifier(const QString &newIdentifier);

    TypeActor getTypeActor() const;
    void setTypeActor(TypeActor newTypeActor);





    const QVector<float> &getPositionXData() const;

    const QVector<float> &getPositionYData() const;

    const QVector<float> &getVelocityXData() const;

    const QVector<float> &getVelocityYData() const;

    const QVector<float> &getAcelerationXData() const;

    const QVector<float> &getAcelerationYData() const;


    const QColor &getColorPen() const;

    void setFramerate(float newFramerate);

    const QColor &getColorGraph() const;
    void setColorGraph(const QColor &newColorGraph);

protected:
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    //bool selected;
    void mousePressEvent(QGraphicsSceneMouseEvent *event) override;
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event) override;
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event) override;
    void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override;
    void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override;
    void advance(int phase);


    QString name;
    QString identifier;
    int indexInList;
    QMap<Unit, float> values;
    GraphicsScene * graphicsScene;
    TypeActor typeActor;

    float framerate;
    float positionX;
    float positionY;
    float velocity;
    float velocityX;
    float velocityY;
    float aceleration;
    float acelerationX;
    float acelerationY;
    float mass;

    float last_velocity;
    float last_velocityX;
    float last_velocityY;
    float last_aceleration;
    float last_acelerationX;
    float last_acelerationY;


//superprivate
    float lastTime;
    float init_positionX;
    float init_positionY;
    float last_positionX;
    float last_positionY;
    float init_velocityX;
    float init_velocityY;
    float init_acelerationX;
    float init_acelerationY;


    float display_velocity;
    float display_velocityX;
    float display_velocityY;
    float display_aceleration;
    float display_acelerationX;
    float display_acelerationY;
    float display_mass;

    QVector<float> positionXData;
    QVector<float> positionYData;
    QVector<float> velocityXData;
    QVector<float> velocityYData;
    QVector<float> acelerationXData;
    QVector<float> acelerationYData;




    float time = 0;
    QColor colorGraph;
    QColor colorPen;
    QColor colorBrush;
    QPolygonF shape;
    bool isStatic;

};

#endif // ACTOR_H
