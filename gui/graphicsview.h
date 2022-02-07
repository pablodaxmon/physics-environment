#ifndef GRAPHICSVIEW_H
#define GRAPHICSVIEW_H

#include <QObject>
#include <QGraphicsView>
#include <QWheelEvent>

class GraphicsView : public QGraphicsView
{
    Q_OBJECT
public:
    GraphicsView(QGraphicsScene *scene, QWidget *parent = nullptr);

    float getCurrentScale() const;

protected:
#if QT_CONFIG(wheelevent)
    void wheelEvent(QWheelEvent *) override;
#endif

public slots:
    void zoomIn();
    void zoomOut();
    void zoomPercent(int percent);

private:
    float currentScale = 1;

    void scaleView(float ratio);

};

#endif // GRAPHICSVIEW_H
