#include "equation.h"
#include <QDebug>

typedef float (Equation::*Operations)(float a, float b);

// SUM(A SUM(C D))
Equation::Equation()
{

}

Equation::Equation(char * codeequation, QMap<QString, QString> &dicc) : codeEquation(codeequation), dictionary(dicc)
{

}

QString &Equation::getCodeEquation()
{
    return codeEquation;
}

void Equation::setStringEquation(const QString &newCodeEquation)
{
    codeEquation = newCodeEquation;
}

const QMap<QString, QString> &Equation::getDictionary() const
{
    return dictionary;
}

void Equation::setDictionary(const QMap<QString, QString> &newDictionary)
{
    dictionary = newDictionary;
}

