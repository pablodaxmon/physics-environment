#include "graphicsview.h"


GraphicsView::GraphicsView(QGraphicsScene *scene, QWidget *parent) : QGraphicsView(scene, parent)
{

}

void GraphicsView::zoomIn()
{

    scaleView(0.95);
}

void GraphicsView::zoomOut()
{
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

    qDebug() << "current scale " << currentScale << "   ratio" << ratio;
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


    /*if(radio < 1){
        if(currentScale > 0.5){

            factor = ratio;
        }
    } else if(radio > 1){
        if(currentScale < 2){

            factor = ratio;
        }
    }*/



    currentScale *= factor;
    scale(factor, factor);
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


    scale(factor, factor);
    setTransformationAnchor(anchor);
    e->accept();
}

float GraphicsView::getCurrentScale() const
{
    return currentScale;
}

