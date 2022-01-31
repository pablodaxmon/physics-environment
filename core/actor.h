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
#include "core/equation.h"
#include "core/equationrunner.h"
#include "core/equationmaker.h"


class Actor : public QGraphicsItem
{

public:
    explicit Actor(const char *nameActor, QGraphicsItem *parent = nullptr);


    //controladores del tiempo

    virtual void StartFrame();
    virtual void UpdateFrame();
    virtual void LastUpdateFrame();

    ////

    void setEquation(char* code,Unit unit);

    //getters y setters de las variables

    QString getTag();
    void setTag(QString t);

    int getIndexInList();
    void setIndexInList(int newIndexInList);

    QString &getName();
    void setName(char * newName);

    const QPointF &getPosition() const;
    void setPosition(const QPointF &newPosition);


    QMap<Unit, float> *getVariables() const;
    void setVariables(QMap<Unit, float> *newVariables);

    // funciones para dibujar el actor
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    bool Pressed;

    Equation *getEq() const;
    void setEq(Equation *newEq);

protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
    //void mouseMoveEvent(QGraphicsSceneMouseEvent *event);

private:
    QString tag;
    int indexInList = 0;
    QString name;
    QPointF position;
    float speedX = 0;
    float speedY = 0;
    float aceleracion = 0;
    float speed = 0;
    float rotation;
    float temperature;
    QMap<Unit, float> * variables = new QMap<Unit, float>();
    QMap<Unit, float> * receivedVariables = new QMap<Unit, float>();
    QMap<Unit, Equation*> * listEquations = new QMap<Unit, Equation*>();

    Equation * eq = new Equation("SUM(MUL(A,B),DIV(MUL(C,MUL(A,A)),2))");

    EquationRunner * equationrunner = new EquationRunner();
    EquationMaker * equationMaker = new EquationMaker();

    QList<float>* valores = new QList<float>();

    void updateVariables();

    float _time = 0;






};

#endif // ACTOR_H
