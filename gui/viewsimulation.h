#ifndef VIEWSIMULATION_H
#define VIEWSIMULATION_H

#include <QWidget>
#include <QVBoxLayout>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QLabel>
#include <QToolButton>
#include <QHBoxLayout>
#include <QLabel>
#include <QPushButton>
#include "pixmapbuilder.h"

class ViewSimulation : public QWidget
{
    Q_OBJECT
public:
    explicit ViewSimulation(QWidget *parent = nullptr);
    bool stepShort();
    bool stopLong();
signals:

};


#endif // VIEWSIMULATION_H
