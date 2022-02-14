#ifndef VIEWGRAPHICSRESULTS_H
#define VIEWGRAPHICSRESULTS_H

#include <QWidget>
#include <QWheelEvent>
#include <QPaintEvent>
#include <QTime>
#include <QTimer>
#include <QDragMoveEvent>

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
protected:
    void paintEvent(QPaintEvent *event) override;
    void wheelEvent(QWheelEvent *event) override;
    void mousePressEvent(QMouseEvent * event) override;

    int wheelPos = 0;
    int cursorPos = 0;

    int view;



};

#endif // VIEWGRAPHICSRESULTS_H
