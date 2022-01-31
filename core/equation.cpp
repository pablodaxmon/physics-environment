#include "equation.h"
#include <QDebug>

typedef float (Equation::*Operations)(float a, float b);

// SUM(A SUM(C D))
Equation::Equation()
{
}

Equation::Equation(char * codeequation) : codeEquation(codeequation)
{

}

Equation::Equation(Equation &another)
{
    listOperations = another.listOperations;
    codeEquation = another.codeEquation;
    dictionary = another.dictionary;
    mapValues = another.mapValues;
    listValues = another.listValues;
}

Equation &Equation::operator=(Equation &another)
{

    if(&another != this){
        listOperations = another.listOperations;
        codeEquation = another.codeEquation;
        dictionary = another.dictionary;
        mapValues = another.mapValues;
        listValues = another.listValues;
    }
    return *this;
}

QString *Equation::getCodeEquation()
{
    return &codeEquation;
}


 QMap<QString, QString> *Equation::getDictionary()
{
    return dictionary;
}

void Equation::setDictionary( QMap<QString, QString> *newDictionary)
{
    dictionary = newDictionary;
}



void Equation::setListOperations(QList<OperationMath*> *newListOperations)
{
    listOperations = newListOperations;
}

void Equation::setMapValues(QMap<const QChar, int> *newMapValues)
{
    mapValues = newMapValues;
}

QMap<const QChar, int> *Equation::getMapValues()
{
    return mapValues;
}



QList<float> *Equation::getListValues() const
{
    return listValues;
}

QList<OperationMath*> *Equation::getListOperations()
{
    return listOperations;
}

void Equation::setListValues(QList<float> *newListValues)
{
    listValues = newListValues;
}

void Equation::setCodeEquation(const QString &newCodeEquation)
{
    codeEquation = newCodeEquation;
}

