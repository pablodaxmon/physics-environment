#ifndef VIEWGRAPHICSRESULTS_H
#define VIEWGRAPHICSRESULTS_H

#include <QWidget>
#include <QWheelEvent>
#include <QPaintEvent>
#include <QTime>
#include <QTimer>
#include <QDragMoveEvent>
#include "src/core/actor.h"

class ViewGraphicsResults : public QWidget
{
    Q_OBJECT
public:
    explicit ViewGraphicsResults(QWidget *parent = nullptr);

    QSize sizeHint() const;
    QSize minimumSizeHint() const;

signals:
    void changeTime(float time);
public slots:
    void setTimeNow(float time);
    void setSelectedActor(Actor *newActorSelected);
protected:
    void paintEvent(QPaintEvent *event) override;
    void wheelEvent(QWheelEvent *event) override;
    void mousePressEvent(QMouseEvent * event) override;

    int wheelPos = 0;
    int cursorPos = 0;

    int view;

    Actor* actorSelected = nullptr;





};

#endif // VIEWGRAPHICSRESULTS_H
