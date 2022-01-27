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


    calculateResult();

    /*while(i.hasNext()){
        //qDebug() << i.next()->calculo;
    }*/



}





float EquationRunner::getResult(Equation *ecuacion,int n, QList<float> *parametros)
{
    //clearString(&ecuacion->getCodeEquation());


    //return calculateResult(parametros, processString(&ecuacion->getCodeEquation()));
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
    QList<float> param = {5,4,3};
    float valor = 1;

    OperationMath *op1 = new OperationMath(0,false,10,true,1);
    OperationMath *op2 = new OperationMath(1,false,20,false,30);

    listOperations.append(op1);
    listOperations.append(op2);

    qDebug() << "calculando ";
    qDebug() << calcular(listOperations.at(0));



}

float EquationRunner::calcular(OperationMath *op)
{

    qDebug() << "ejecutando operacion ";
    float numberA;
    float numberB;

    if(op->complexA == true){
        numberA = calcular(listOperations[op->valorA]);
    } else {
        numberA = op->valorA;
    }

    if(op->complexB == true){
        numberB = calcular(listOperations[op->valorB]);
    } else {
        numberB = op->valorB;
    }

    return numberA + numberB;
}




