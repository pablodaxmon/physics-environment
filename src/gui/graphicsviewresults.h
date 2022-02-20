#ifndef GRAPHICSVIEWRESULTS_H
#define GRAPHICSVIEWRESULTS_H

#include <QWidget>

#include <QObject>
#include <QGraphicsView>
#include <QWheelEvent>
#include <QLineEdit>
#include "QGraphicsItem"
#include "itembartime.h"

class GraphicsViewResults : public QGraphicsView
{
    Q_OBJECT
public:
    GraphicsViewResults(QGraphicsScene *scene, QWidget *parent = nullptr);





    void setItemBar(itemBarTime *newItemBar);

protected:
#if QT_CONFIG(wheelevent)
    void wheelEvent(QWheelEvent *) override;
#endif

    void resizeEvent(QResizeEvent* event);


    itemBarTime * itemBar;

};

#endif // GRAPHICSVIEW_H
