#ifndef EQUATION_H
#define EQUATION_H

#include "core/operationmath.h"
#include <QString>
#include <QList>
#include <QMap>

class Equation
{
public:

    Equation();
    Equation(char* codeequation, QMap<QString, QString> *dicc);

    QString *getCodeEquation();

     QMap<QString, QString> *getDictionary() ;
    void setDictionary( QMap<QString, QString> *newDictionary);


    QList<OperationMath*> *getListOperations() ;
    void setListOperations(QList<OperationMath*> *newListOperations);

    void setMapValues( QMap<const QChar, int> *newMapValues);

    QMap<const QChar, int> *getMapValues();


    QList<float> *getListValues() const;
    void setListValues(QList<float> *newListValues);

    QList<OperationMath*>* listOperations = new QList<OperationMath*>();
private:
    QString codeEquation;
    int size = 1;
    QMap<QString, QString>* dictionary = new QMap<QString, QString>();
    QMap<const QChar, int>* mapValues = new QMap<const QChar, int>();
    QList<float>* listValues = new QList<float>();

};

#endif // EQUATION_H
