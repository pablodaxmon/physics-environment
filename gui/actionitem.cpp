#include "actionitem.h"

ActionItem::ActionItem(Unit unit, const char * name, QWidget *parent) : QWidget(parent)
{



    unitChanged = new QComboBox;
    QAction* posicionX = new QAction("posicionX", this);
    QAction* posicionY = new QAction("posicionY", this);
    QAction* velocidadX = new QAction("velocidadX", this);
    QAction* velocidadY = new QAction("velocidadY", this);
    QAction* aceleracionX = new QAction("aceleracionX", this);
    QAction* aceleracionY = new QAction("aceleracionY", this);
    QAction* distancia = new QAction("distancia", this);

    valueUniteChanged;


    conditionUnit = new QComboBox;
    conditionalValue;



}

Actor *ActionItem::getActorChanged() const
{
    return actorChanged;
}

void ActionItem::setActorChanged(Actor *newActorChanged)
{
    actorChanged = newActorChanged;
}

Actor *ActionItem::getActorCondition() const
{
    return actorCondition;
}

void ActionItem::setActorCondition(Actor *newActorCondition)
{
    actorCondition = newActorCondition;
}

QComboBox *ActionItem::getUnitChanged() const
{
    return unitChanged;
}

void ActionItem::setUnitChanged(QComboBox *newUnitChanged)
{
    unitChanged = newUnitChanged;
}

QLineEdit *ActionItem::getValueUniteChanged() const
{
    return valueUniteChanged;
}

void ActionItem::setValueUniteChanged(QLineEdit *newValueUniteChanged)
{
    valueUniteChanged = newValueUniteChanged;
}

QComboBox *ActionItem::getConditionUnit() const
{
    return conditionUnit;
}

void ActionItem::setConditionUnit(QComboBox *newConditionUnit)
{
    conditionUnit = newConditionUnit;
}

QLineEdit *ActionItem::getConditionalValue() const
{
    return conditionalValue;
}

void ActionItem::setConditionalValue(QLineEdit *newConditionalValue)
{
    conditionalValue = newConditionalValue;
}


