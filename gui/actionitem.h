#ifndef ACTIONITEM_H
#define ACTIONITEM_H

#include "core/physics.h"
#include <QWidget>
#include "core/actor.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLineEdit>
#include <QLabel>
#include <QPainter>
#include <QPushButton>
#include <QStyleOption>
#include <QComboBox>

class ActionItem : public QWidget
{
    Q_OBJECT
public:
    explicit ActionItem(Unit unidad, const char * name, QWidget *parent = nullptr);





    Actor *getActorChanged() const;
    void setActorChanged(Actor *newActorChanged);

    Actor *getActorCondition() const;
    void setActorCondition(Actor *newActorCondition);

    QComboBox *getUnitChanged() const;
    void setUnitChanged(QComboBox *newUnitChanged);

    QLineEdit *getValueUniteChanged() const;
    void setValueUniteChanged(QLineEdit *newValueUniteChanged);

    QComboBox *getConditionUnit() const;
    void setConditionUnit(QComboBox *newConditionUnit);

    QLineEdit *getConditionalValue() const;
    void setConditionalValue(QLineEdit *newConditionalValue);

signals:

private:

    Actor * actorChanged;
    Actor * actorCondition;

    QComboBox * unitChanged;
    QLineEdit * valueUniteChanged;


    QComboBox * conditionUnit;
    QLineEdit * conditionalValue;


};

#endif // ACTIONITEM_H
