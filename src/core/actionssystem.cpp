#include "actionssystem.h"

ActionsSystem::ActionsSystem(QObject *parent) : QObject(parent)
{
listActions = new QList<ActionItem*>();
}

void ActionsSystem::setSelectedActor(Actor *newSelectedActor)
{
    selectedActor = newSelectedActor;
}

void ActionsSystem::addNewAction(ActionItem* item)
{
    listActions->append(item);

}

void ActionsSystem::executeAction(float time)
{
    float m_time = round(time);
    float variableCondition;
    for(int i = 0;i<listActions->size();i++){
        ActionItem * act = listActions->at(i);
        switch (act->getUnitCond()) {
        case 0:
            variableCondition = m_time;
            break;
        case 1:
            variableCondition = act->getActor()->getPositionX();
            break;
        case 2:
            variableCondition = act->getActor()->getPositionY();
            break;
        case 3:
            variableCondition = act->getActor()->getVelocity();
            break;
        case 4:
            variableCondition = act->getActor()->getVelocityX();
            break;
        case 5:
            variableCondition = act->getActor()->getVelocityY();
            break;
        case 6:
            variableCondition = act->getActor()->getAceleration();
            break;
        case 7:
            variableCondition = act->getActor()->getAcelerationX();
            break;
        case 8:
            variableCondition = act->getActor()->getAcelerationY();
            break;
        default:
            break;
        }
qDebug() << "ActionsSystem :variableCondition" << variableCondition << "    getValueCondition" <<act->getValueCondition();
        if(variableCondition == act->getValueCondition()){

            switch(act->getUnitTo()){
                case 0:
                    act->getActor()->setPositionX(act->getValueTo());
                    break;
                case 1:
                    act->getActor()->setPositionY(act->getValueTo());
                    break;
                case 2:
                    act->getActor()->setVelocity(act->getValueTo());
                    break;
                case 3:
                    act->getActor()->setVelocityX(act->getValueTo());
                    break;
                case 4:
                    act->getActor()->setVelocityY(act->getValueTo());
                    break;
                case 5:
                    act->getActor()->setAceleration(act->getValueTo());
                    break;
                case 6:
                    act->getActor()->setAcelerationX(act->getValueTo());
                    break;
                case 7:
                    act->getActor()->setAcelerationY(act->getValueTo());
                    break;
                default:
                    break;
            }
        }


    }

}

