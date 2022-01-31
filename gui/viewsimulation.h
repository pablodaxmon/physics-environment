#ifndef VIEWSIMULATION_H
#define VIEWSIMULATION_H

#include <QWidget>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QLabel>
#include <QToolButton>
#include <QHBoxLayout>
#include <QLabel>
#include <QPushButton>
#include "pixmapbuilder.h"
#include "core/actor.h"

class ViewSimulation : public QWidget
{
    Q_OBJECT
public:
    explicit ViewSimulation(QWidget *parent = nullptr);

    void drawNewObject(QList<Actor*> &listactors);
    void setObjectSelected();

    float b = 5;

    QLineEdit *getLineEdit() const;

signals:
    void eqTextChanged();

private:
    void redrawCanvas();
    QGraphicsView *viewScene;
    QGraphicsScene *scene = new QGraphicsScene(this);
    float a = 5;
    QLineEdit * lineEdit;

};


#endif // VIEWSIMULATION_H
