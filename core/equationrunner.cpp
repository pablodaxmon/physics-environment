#include "equationrunner.h"

typedef float (EquationRunner::*Operations)(float a, float b);
EquationRunner::EquationRunner()
{
    operaciones[0] = sumar;
    operaciones[1] = restar;
    operaciones[2] = multiplicar;
    operaciones[3] = dividir;
    operaciones[4] = potencia;
    operaciones[5] = raiz;
    operaciones[6] = logaritmo;





}





float EquationRunner::getResult(Equation *ecuacion,QList<float> *parametros)
{
    return calcular(&(*ecuacion->listOperations->at(0)), &(*ecuacion->listOperations), &(*parametros));
}



float EquationRunner::sumar(float a, float b)
{
    return a + b;
}

float EquationRunner::restar(float a, float b)
{
    return a - b;
}

float EquationRunner::multiplicar(float a, float b)
{
    return a * b;
}

float EquationRunner::dividir(float a, float b)
{
    return a + b;
}

float EquationRunner::potencia(float value, float potencia)
{
    return powf(value, potencia);
}

float EquationRunner::raiz(float a, float b)
{
    return powf(a,1/b);
}

float EquationRunner::logaritmo(float value, float base)
{
    return logaritmo(value, base);

}

float EquationRunner::comp(float a, float b, float (*funca)(int, int), float (*funcb)(int, int))
{
    if(a>b){
        return funca(a,b);
    } else {
        return funcb(a,b);
    }
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
    return numberA + numberB;
}





