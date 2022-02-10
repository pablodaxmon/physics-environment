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




protected:
#if QT_CONFIG(wheelevent)
    void wheelEvent(QWheelEvent *) override;
#endif



public slots:
    void zoomIn();
    void zoomOut();
    void zoomPercent(int percent);
    void zoomPercentFromLineEdit();

    void gridShowHide(bool checked);
    void setGridtype(int index);
    void moveHandToggle();


private:
    float currentScale = 1;


    void scaleView(float ratio);

    QLineEdit * editLine;
    int gridType;
    bool showHide;

};

#endif // GRAPHICSVIEW_H
