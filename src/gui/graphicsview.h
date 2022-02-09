#ifndef GRAPHICSVIEW_H
#define GRAPHICSVIEW_H

#include <QObject>
#include <QGraphicsView>
#include <QWheelEvent>
#include <QLineEdit>

class GraphicsView : public QGraphicsView
{
    Q_OBJECT
public:
    GraphicsView(QGraphicsScene *scene, QWidget *parent = nullptr);

    float getCurrentScale() const;

    void setEditLine(QLineEdit *newEditLine);


    bool getMoveHand() const;

protected:
#if QT_CONFIG(wheelevent)
    void wheelEvent(QWheelEvent *) override;
#endif

    void mouseMoveEvent(QMouseEvent * event) override;

    void mousePressEvent(QMouseEvent * event) override;

public slots:
    void zoomIn();
    void zoomOut();
    void zoomPercent(int percent);
    void zoomPercentFromLineEdit();

    void gridShowHide(bool checked);
    void setGridtype(int index);
    void moveHandToggle();

    void setMoveHand(bool checked);

private:
    float currentScale = 1;


    void scaleView(float ratio);

    QLineEdit * editLine;
    int gridType;
    int m_originX;
    int m_originY;
    bool showHide;
    bool moveHand;

};

#endif // GRAPHICSVIEW_H
