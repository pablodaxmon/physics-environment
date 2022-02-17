#include "graphicsscene.h"
#include <QGraphicsView>
#include <QDebug>

GraphicsScene::GraphicsScene(QObject *parent) : QGraphicsScene(parent)
{

}


void GraphicsScene::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    if (event->buttons() && Qt::LeftButton && !clickItem && moveHand)
    {
        graphicsView->setTransformationAnchor(QGraphicsView::NoAnchor);

        QPointF translation = event->scenePos() - m_origin;

        qDebug() << "GraphicsScene::mouseMoveEvent  " << translation;
        graphicsView->translate(round(translation.rx()),round(translation.ry()));

    }

    QGraphicsScene::mouseMoveEvent(event);

}

void GraphicsScene::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    if (event->button() == Qt::LeftButton && !clickItem && moveHand)
    {
        graphicsView->setCursor(Qt::ClosedHandCursor);
        // Store original position.
        m_origin = event->scenePos();
    }


    QGraphicsScene::mousePressEvent(event);

}

void GraphicsScene::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    if (event->button() == Qt::LeftButton)
    {
        graphicsView->setCursor(Qt::ArrowCursor);
    }

    QGraphicsScene::mouseReleaseEvent(event);
}

void GraphicsScene::setGraphicsView(QGraphicsView *newGraphicsView)
{
    graphicsView = newGraphicsView;
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


