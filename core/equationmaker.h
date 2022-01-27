#ifndef EQUATIONMAKER_H
#define EQUATIONMAKER_H

#include <QString>
#include "core/operationmath.h"
#include "core/equation.h"

class EquationMaker
{
public:
    EquationMaker();

    Equation* makeEquation(const char* data);
private:

    void clearString(QString* codeEquation);
    QList<OperationMath>* generateCommands(QString* codeEquation);

};

#endif // EQUATIONMAKER_H
