#include "graphicsviewresults.h"
#include <QScrollBar>

GraphicsViewResults::GraphicsViewResults(QGraphicsScene *scene, QWidget *parent) : QGraphicsView(scene, parent)
{



}

void GraphicsViewResults::setItemBar(itemBarTime *newItemBar)
{
    itemBar = newItemBar;
}

void GraphicsViewResults::resizeEvent(QResizeEvent *event)
{
    centerOn(0,0);
    QGraphicsView::resizeEvent(event);
}





void GraphicsViewResults::wheelEvent(QWheelEvent *e)
{

    int angle = e->angleDelta().y();
    horizontalScrollBar()->setValue(horizontalScrollBar()->value() - angle);
     e->accept();

}
