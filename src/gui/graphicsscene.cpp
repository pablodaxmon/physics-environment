#include "graphicsscene.h"
#include <QGraphicsView>

GraphicsScene::GraphicsScene(QObject *parent) : QGraphicsScene(parent)
{

}


void GraphicsScene::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    if (event->buttons() && Qt::LeftButton && !clickItem && moveHand)
    {
        views().first()->setTransformationAnchor(QGraphicsView::NoAnchor);

        QPointF translation = event->scenePos() - m_origin;

        views().first()->translate(translation.x(), translation.y());

    }

    QGraphicsScene::mouseMoveEvent(event);

}

void GraphicsScene::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    if (event->button() == Qt::LeftButton && !clickItem && moveHand)
    {
        views().first()->setCursor(Qt::ClosedHandCursor);
        // Store original position.
        m_origin = event->scenePos();
    }


    QGraphicsScene::mousePressEvent(event);

}

void GraphicsScene::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    if (event->button() == Qt::LeftButton)
    {
        views().first()->setCursor(Qt::ArrowCursor);
    }

    QGraphicsScene::mouseReleaseEvent(event);
}

bool GraphicsScene::getMoveHand() const
{
    return moveHand;
}

void GraphicsScene::setMoveHand(bool newMoveHand)
{
    moveHand = newMoveHand;

}

void GraphicsScene::setClickItem(bool newClickItem)
{
    clickItem = newClickItem;
}


