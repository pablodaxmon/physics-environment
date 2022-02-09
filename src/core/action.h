#ifndef ACTION_H
#define ACTION_H

#include "actor.h"
#include "src/core/physics.h"

enum class Comparation { IsEquals, IsEqualsOrBig, IsEqualsOrSmall, isBig, isSmall, isDiferent};

class Condition{
public:
    Condition(Comparation comp, float from, float to) : comparation(comp), fromComparable(from), toComparable(to)
    {}
    bool getBool(){
        switch (comparation) {
        case Comparation::IsEquals:
            return fromComparable == toComparable;

        case Comparation::IsEqualsOrBig:
            return fromComparable >= toComparable;

        case Comparation::IsEqualsOrSmall:
            return fromComparable <= toComparable;

        case Comparation::isBig:
            return fromComparable > toComparable;

        case Comparation::isSmall:
            return fromComparable < toComparable;

        case Comparation::isDiferent:
            return fromComparable != toComparable;


        default:
            return false;
        }
    }
private:
    const Comparation comparation;
    const float fromComparable;
    const float toComparable;
};


class Action
{
public:
    Action(Actor* _actor, Condition _condition, Unit _unit);

private:
    const Actor* actor;
    Unit unit;
    Condition condition;




};

#endif // ACTION_H
