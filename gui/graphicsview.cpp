#include "graphicsview.h"
#include <QScrollBar>
#include <QPointF>
#include "pixmapbuilder.h"


GraphicsView::GraphicsView(QGraphicsScene *scene, QWidget *parent) : QGraphicsView(scene, parent)
{
    setRenderHints(QPainter::Antialiasing | QPainter::SmoothPixmapTransform);
    //setBackgroundBrush(PixmapBuilder::drawPattern(PixmapType::PT_Square, 20, "#E9E9E9"));


}

void GraphicsView::zoomIn()
{
    setBackgroundBrush(PixmapBuilder::drawPattern(PixmapType::PT_Square, 20, "#E9E9E9"));

    scaleView(0.95);
}

void GraphicsView::zoomOut()
{setBackgroundBrush(PixmapBuilder::drawPattern(PixmapType::PT_Square, 20, "#E9E9E9"));

    scaleView(1.05);
}

void GraphicsView::zoomPercent(int percent)
{
    if(percent > 200){
        percent = 200;
    }
    if(percent < 50){
        percent = 50;
    }

    scaleView(percent);
}

void GraphicsView::scaleView(float ratio)
{

    qreal factor = 1;

    if(ratio > 10){

        ratio /= 100;
        factor = ratio;
        scale(1/currentScale, 1/currentScale);
        currentScale = ratio;
        scale(ratio, ratio);
        return;

    } else if(currentScale > 2){
        if(ratio < 1){
            factor = ratio;
        } else {
            return;
        }
    } else if(currentScale < 0.5){
        if(ratio > 1){
            factor = ratio;
        } else {
            return;
        }
    } else {
        factor = ratio;
    }

    currentScale *= factor;
    qDebug() << "current scale " << currentScale;
    editLine->setText(QString::number(roundf(currentScale*100)));
    scale(factor, factor);
}

void GraphicsView::setEditLine(QLineEdit *newEditLine)
{
    editLine = newEditLine;
}

void GraphicsView::mouseMoveEvent(QMouseEvent *event)
{

    if (event->buttons() & Qt::LeftButton)
        {
        setTransformationAnchor(QGraphicsView::NoAnchor);
            QPointF oldp = mapToScene(m_originX, m_originY);
            QPointF newp = mapToScene(event->pos());
            QPointF translation = newp - oldp;

            translate(translation.x(), translation.y());

            m_originX = event->x();
            m_originY = event->y();

    } else {
       QGraphicsView::mousePressEvent(event);
    }

}

void GraphicsView::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton)
        {
            // Store original position.
            m_originX = event->x();
            m_originY = event->y();
    }  else {
      QGraphicsView::mousePressEvent(event);
    }
}





void GraphicsView::wheelEvent(QWheelEvent *e)
{
    const ViewportAnchor anchor = transformationAnchor();
    setTransformationAnchor(QGraphicsView::AnchorUnderMouse);
    int angle = e->angleDelta().y();
    qreal factor = 1;

    if (angle > 0) {
        if(currentScale < 2){

            factor = 1.05;
        }
    } else {
        if(currentScale > 0.5){

            factor = 0.95;
        }
    }

    currentScale *= factor;

    qDebug() << "current scale " << currentScale;


    editLine->setText(QString::number(roundf(currentScale*100)));


    scale(factor, factor);
    setTransformationAnchor(anchor);
    e->accept();
}

float GraphicsView::getCurrentScale() const
{
    return currentScale;
}

