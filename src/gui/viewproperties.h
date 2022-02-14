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

    void setSelectedActor(Actor *newActorSelected);

public slots:
    void edicionFinalizada();
    void setValuesFromActor();

signals:
    void valuesChanged();
private:
    QTableView * table;
    QStandardItemModel * model;

    QLineEdit *posxE;
    QLineEdit *posyE;
    QLineEdit *rotE;
    QLineEdit *masE;
    QLineEdit *velxE;
    QLineEdit *velyE;
    QLineEdit *velE;
    QLineEdit *acexE;
    QLineEdit *aceyE;
    QLineEdit *aceE;
    QLineEdit *disE;

    Actor * actorSelected;
    QMap<Unit, float>* valoresSelectedActor;
};

#endif // VIEWPROPERTIES_H
