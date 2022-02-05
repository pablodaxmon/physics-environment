#ifndef VIEWGRAPHICSRESULTS_H
#define VIEWGRAPHICSRESULTS_H

#include <QWidget>
#include <QWheelEvent>
#include <QPaintEvent>
#include <QTime>
#include <QTimer>

class ViewGraphicsResults : public QWidget
{
    Q_OBJECT
public:
    explicit ViewGraphicsResults(QWidget *parent = nullptr);

    QSize sizeHint() const;
    QSize minimumSizeHint() const;


protected:
    void paintEvent(QPaintEvent *event) override;
    void wheelEvent(QWheelEvent *event) override;

    int wheelPos = 0;



};

#endif // VIEWGRAPHICSRESULTS_H
