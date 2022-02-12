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
    void valuesChanged(QMap<Unit, float>* valores);
public slots:
    void setValues();
public:
    explicit Actor(QGraphicsItem *parent = nullptr);

    void updateData();

    int getIndexInList();
    void setIndexInList(int newIndexInList);



    const QString &getName() const;
    void setName(const QString &newName);


    void setGraphicsScene(GraphicsScene *newGraphicsview);

    /*bool getSelected() const;
    void setSelected(bool newSelected);*/


    QMap<Unit, float> *getValues();

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




};

#endif // ACTOR_H
