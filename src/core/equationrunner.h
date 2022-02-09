#ifndef EQUATIONRUNNER_H
#define EQUATIONRUNNER_H

#include <QString>
#include "src/core/equation.h"
#include <QDebug>
#include <QListIterator>
#include "src/core/operationmath.h"


class EquationRunner
{
public:
    EquationRunner();
    float getResult(Equation *ecuacion,QList<float> * parametros);
private:

    float calculateResult();
    float calcular(OperationMath* op, QList<OperationMath*>* listOperations, QList<float>* params);

    typedef float (EquationRunner::*Operations)(float a, float b);


};

#endif // EQUATIONRUNNER_H
