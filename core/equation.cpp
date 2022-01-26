#include "equation.h"
#include <QDebug>

typedef float (Equation::*Operations)(float a, float b);

// SUM(A SUM(C D))
Equation::Equation(char * codeequation, QMap<QString, QString> &dicc) : codeEquation(codeequation), dictionary(dicc)
{

    Operations operaciones[] = {sumar, multiplicacion};

}

float Equation::getResult()
{




}

float Equation::sumar(float a, float b)
{
    return a + b;
}



float Equation::multiplicacion(float a, float b)
{
    return a * b;
}

float Equation::division(float a, float b)
{
    return a + b;
}

float Equation::potencia(float value, float potencia)
{
    return powf(value, potencia);
}

float Equation::raiz(float a, float b)
{
    return powf(a,1/b);
}

float Equation::log(float value, float base)
{
    return log(value, base);

}

float Equation::comp(float a, float b, float (*funca)(int, int), float (*funcb)(int, int))
{
    if(a>b){
        return funca(a,b);
    } else {
        return funcb(a,b);
    }
}

void Equation::clearString()
{
    // limpiamos el string
    codeEquation.simplified();

    if(codeEquation.at(0) == QChar('(')){
        codeEquation.remove(0,1);
    }

    if(codeEquation.at(codeEquation.size()-1) == QChar(')')){
        codeEquation.remove(codeEquation.size()-1,1);
    }
}

QString Equation::processString(QString code)
{

}


