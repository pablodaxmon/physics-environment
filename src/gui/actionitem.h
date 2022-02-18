#ifndef ACTIONITEM_H
#define ACTIONITEM_H

#include "src/core/physics.h"
#include <QWidget>
#include "src/core/actor.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLineEdit>
#include <QLabel>
#include <QPainter>
#include <QPushButton>
#include <QStyleOption>
#include <QComboBox>

class QComboBox;
class ActionItem : public QWidget
{
    Q_OBJECT
public:
    explicit ActionItem(bool isDynamic,QWidget *parent = nullptr);





    void setValueX(float value);
    void setValueY(float value);
    void setValueTorque(float value);

    void paintEvent(QPaintEvent *event) override;

    float getValueCondition() const;
    void setValueCondition(float newValueCondition);

    float getValueTo() const;
    void setValueTo(float newValueTo);

    int getUnitCond() const;
    void setUnitCond(int newUnitCond);

    int getUnitTo() const;
    void setUnitTo(int newUnitTo);

    const QString &getName() const;
    void setIdentifier(const QString &newName);

    Actor *getActor() const;
    void setActor(Actor *newActor);

    bool getIsDinamic() const;
    void setIsDinamic(bool newIsDinamic);

signals:

private:
    Actor * actor;
    QLabel * title;
    Actor * actorChanged;
    Actor * actorCondition;
    bool isDinamic;

    QComboBox * unitTarget;
    QLineEdit * valueTarget;


    QLineEdit * valueXTarget;
    QLineEdit * valueYTarget;
    QLineEdit * valueTorqueTarget;


    QComboBox * unitCondition;
    QLineEdit * valueCondition;



    QString name;


};

#endif // ACTIONITEM_H
