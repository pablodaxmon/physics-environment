#ifndef GRAPHICSSCENERESULTS_H
#define GRAPHICSSCENERESULTS_H

#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>

class GraphicsSceneResults : public QGraphicsScene
{
    Q_OBJECT
public:
    explicit GraphicsSceneResults(QObject *parent = nullptr);



protected:

    void wheelEvent(QGraphicsSceneWheelEvent *wheelEvent) override;

};

#endif // GRAPHICSSCENE_H
