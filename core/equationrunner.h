#ifndef EQUATIONRUNNER_H
#define EQUATIONRUNNER_H

#include <QString>
#include "core/equation.h"
#include <QDebug>
#include <QListIterator>
#include "core/operationmath.h"


class EquationRunner
{
public:
    EquationRunner();
    float getResult(Equation *ecuacion,QList<float> * parametros);
private:
    float sumar(float a, float b);
    float restar(float a, float b);
    float multiplicar(float a, float b);
    float dividir(float a, float b);
    float potencia(float value, float potencia);
    float raiz(float a, float b);
    float logaritmo(float value, float base);
    float comp(float a, float b, float(*funca)(int, int), float(*funcb)(int,int));

    float calculateResult();
    float calcular(OperationMath* op, QList<OperationMath*>* listOperations, QList<float>* params);

    typedef float (EquationRunner::*Operations)(float a, float b);


    Operations operaciones[7];
};

#endif // EQUATIONRUNNER_H
