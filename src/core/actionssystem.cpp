#include "actionssystem.h"

ActionsSystem::ActionsSystem(QObject *parent) : QObject(parent)
{
}

void ActionsSystem::writeJson(QJsonObject &json)
{
    QJsonArray actionsArray;
    for(int i = 0;i<listActions.size();i++){
        QJsonObject actionObject;
        ActionItem * action = listActions.at(i);

        actionObject["actorTo"] = action->getActor()->getIdentifier();
        actionObject["valueTo"] = action->getValueTo();
        actionObject["valueCond"] = action->getValueCondition();
        actionObject["unitTo"] = action->getUnitTo();
        actionObject["unitCond"] = action->getUnitCond();

        actionsArray.append(actionObject);
    }

    json["actions"] = actionsArray;

}

void ActionsSystem::setSelectedActor(Actor *newSelectedActor)
{
    selectedActor = newSelectedActor;
}

void ActionsSystem::addNewAction(ActionItem* item)
{

    listActions.append(item);


}

void ActionsSystem::addNewActionFromJson(const QJsonObject &json, Actor* actor)
{

    ActionItem * action = new ActionItem(json["isDynAction"].toBool());
    action->setValueCondition(json["valueCond"].toDouble());
    action->setValueTo(json["valueTo"].toDouble());
    action->setUnitCond(json["unitCond"].toDouble());
    action->setUnitTo(json["unitTo"].toDouble());


    action->setIdentifier(actor->getName());
    action->setActor(actor);

    listActions.append(action);
    containerItems->insertWidget(0,action);
}

void ActionsSystem::executeActions(float time)
{
    float m_time = round(time);
    float variableCondition;
    for(int i = 0;i<listActions.size();i++){
        ActionItem * act = listActions.at(i);
        if(act->getIsDinamic()){
            if(m_time == act->getValueCondition()){

                 switch(act->getUnitTo()){
                     case 0:
                         dynamic_cast<ActorDinamic *>(act->getActor())->applyForce(act->getValueX(), act->getValueY());
                         break;
                     case 1:
                         dynamic_cast<ActorDinamic *>(act->getActor())->applyTorque(act->getValueTorque());
                         break;
                     default:
                         break;
                 }
             }

        } else {
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

}

void ActionsSystem::reset()
{
    for(int i = 0;i<listActions.size();i++){
        ActionItem * act = listActions.at(i);
        containerItems->removeWidget(act);

    }
    qDeleteAll(listActions);
    listActions.clear();


}

void ActionsSystem::setIsBoxType(bool newIsBoxType)
{
    isBoxType = newIsBoxType;
}

void ActionsSystem::setContainerItems(QBoxLayout *newContainerItems)
{
    containerItems = newContainerItems;
}


