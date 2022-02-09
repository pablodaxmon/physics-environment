#include "equationrunner.h"

typedef float (EquationRunner::*Operations)(float a, float b);
EquationRunner::EquationRunner()
{




}


float EquationRunner::getResult(Equation *ecuacion,QList<float> *parametros)
{
    return calcular(&(*ecuacion->listOperations->at(0)), &(*ecuacion->listOperations), &(*parametros));
}


float EquationRunner::calculateResult()
{

}

float EquationRunner::calcular(OperationMath *op, QList<OperationMath*>* listOperations, QList<float>* params)
{

    float numberA;
    float numberB;


    if(op->complexA == true){
        numberA = calcular(listOperations->at(op->valorA), &(*listOperations), &(*params));
    } else {
        numberA = params->at(op->valorA);
    }

    if(op->complexB == true){
        numberB = calcular(listOperations->at(op->valorB), &(*listOperations), &(*params));
    } else {
        numberB = params->at(op->valorB);
    }

    qDebug() << numberA << " + " << numberB;
    if(op->calculo == 0){
        return numberA + numberB;

    } else if(op->calculo == 1){
        return numberA - numberB;

    } else if(op->calculo == 2){
        return numberA * numberB;

    } else if(op->calculo == 3){
        return numberA / numberB;

    } else if(op->calculo == 4){
        return powf(numberA, numberB);

    } else if(op->calculo == 5){
        return powf(numberA,1/numberB);

    } else if(op->calculo == 6){
        return powf(numberA, numberB);

    }
}





