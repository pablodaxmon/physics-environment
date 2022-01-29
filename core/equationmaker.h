#ifndef EQUATIONMAKER_H
#define EQUATIONMAKER_H

#include <QString>
#include "core/operationmath.h"
#include "core/equation.h"
#include <QDebug>
#include <QList>

class EquationMaker
{
public:
    EquationMaker();

    void makeEquation(Equation* ecuacion, QMap<QString, QString> *dicc);
    QList<OperationMath*>* generateCommands(const QString* codeEquation, QMap<const QChar, int> *map);
private:

    void clearString(QString* codeEquation);

    int getOperationInt(QString sub, int from ,int to);
};

#endif // EQUATIONMAKER_H
