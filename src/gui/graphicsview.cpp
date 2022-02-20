#include "graphicsview.h"
#include <QScrollBar>
#include <QPointF>
#include "pixmapbuilder.h"



GraphicsView::GraphicsView(QGraphicsScene *scene, QWidget *parent) : QGraphicsView(scene, parent)
{
    setRenderHints(QPainter::Antialiasing | QPainter::SmoothPixmapTransform);
    gridType = 0;

    centerOn(-600,-550);

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

void GraphicsView::zoomPercentFromLineEdit()
{
    zoomPercent(editLine->text().toInt());
}

void GraphicsView::gridShowHide(bool checked)
{
    if(checked == false){


        setBackgroundBrush(Qt::NoBrush);

    } else {
        setBackgroundBrush(PixmapBuilder::drawPattern(gridType, 20, "#E9E9E9"));
    }

    showHide = !showHide;
}

void GraphicsView::setGridtype(int index)
{
    gridType = index;
    if(showHide){
        setBackgroundBrush(PixmapBuilder::drawPattern(gridType, 20, "#E9E9E9"));
    }
}

void GraphicsView::moveHandToggle()
{

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
    editLine->setText(QString::number(roundf(currentScale*100)));
    scale(factor, factor);
}



void GraphicsView::setEditLine(QLineEdit *newEditLine)
{
    editLine = newEditLine;
    connect(editLine, &QLineEdit::editingFinished, this, &zoomPercentFromLineEdit);
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



    editLine->setText(QString::number(roundf(currentScale*100)));


    scale(factor, factor);
    setTransformationAnchor(anchor);
    e->accept();
}

float GraphicsView::getCurrentScale() const
{
    return currentScale;
}

