#ifndef VIEWPROPERTIES_H
#define VIEWPROPERTIES_H

#include "src/core/physics.h"
#include <QWidget>
#include <QStandardItem>
#include <QStandardItemModel>
#include <QTableView>
#include <QMap>
#include "src/core/actor.h"

class ViewProperties : public QWidget
{
    Q_OBJECT
public:
    explicit ViewProperties(QWidget *parent = nullptr);

public slots:
    void setValuesFromActor(QMap<Unit, float>* valores);
    void setSelectedActor(Actor* actor);

private:
    QTableView * table;
    QStandardItemModel * model;


};

#endif // VIEWPROPERTIES_H
