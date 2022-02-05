#ifndef EQUATIONMAKER_H
#define EQUATIONMAKER_H

#include <QString>
#include "core/operationmath.h"
#include "core/equation.h"
#include <QDebug>
#include <QList>

class EquationMaker
{
public:
    EquationMaker();

    void makeEquation(Equation* ecuacion);
    void generateCommands(QString* codeEquation, QMap<const QChar, int> *map, QList<OperationMath*>* res);
private:

    void clearString(QString* codeEquation);

    int getOperationInt(QString sub, int from ,int to);
};

#endif // EQUATIONMAKER_H
