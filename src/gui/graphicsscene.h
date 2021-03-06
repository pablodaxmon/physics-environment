#ifndef GRAPHICSSCENE_H
#define GRAPHICSSCENE_H

#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>
#include <QObject>


class GraphicsScene : public QGraphicsScene
{
    Q_OBJECT
public:
    explicit GraphicsScene(QObject *parent = nullptr);

    void setClickItem(bool newClickItem);

    bool getMoveHand() const;
    void setGraphicsView(QGraphicsView *newGraphicsView);

public slots:
    void setMoveHand(bool newMoveHand);
signals:

protected:

    void mouseMoveEvent(QGraphicsSceneMouseEvent * event) override;

    void mousePressEvent(QGraphicsSceneMouseEvent * event) override;
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event) override;
private:

    QGraphicsView* graphicsView;
    QPointF m_origin;
    QPointF m_originScreen;
    bool clickItem;
    bool moveHand;
};

#endif // GRAPHICSSCENE_H
