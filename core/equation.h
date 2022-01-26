#ifndef EQUATION_H
#define EQUATION_H

#include <QString>
#include <QList>
#include <QMap>

class Equation
{
public:
    //ecuacion recebira el codigo de la ecuacion y un mapa de lo que significa cada variable del codigo
    Equation(char* codeequation, QMap<QString, QString> &dicc);
    float getResult();
    void clearString();
    QString processString();

private:
    QString codeEquation;
    QMap<QString, QString> dictionary;
    float sumar(float a, float b);
    float multiplicacion(float a, float b);
    float division(float a, float b);
    float potencia(float value, float potencia);
    float raiz(float a, float b);
    float log(float value, float base);
    float comp(float a, float b, float(*funca)(int, int), float(*funcb)(int,int));

    typedef float (Equation::*Operations)(float a, float b);
    QList<float> listValues;
    QList<float> listAuxiliaries;
    QList<int> listOperations;
    Operations operaciones[];

    //QList<Operations> listOperationsActual;
    //QList<float> listValues;





};

#endif // EQUATION_H
