#include "equationmaker.h"

EquationMaker::EquationMaker()
{

}

Equation *EquationMaker::makeEquation(const char *data, QMap<QString, QString> &dicc)
{
    Equation *ecuacion = new Equation();
    ecuacion->setStringEquation(data);
    ecuacion->setCommandsEquation(generateCommands(data));
    ecuacion->setDictionary(dicc);

}



void EquationMaker::clearString(QString* codeEquation)
{
    // limpiamos el string
    codeEquation->simplified();
    codeEquation->replace(" ","");

    if(codeEquation->at(0) == QChar('(')){
        codeEquation->remove(0,1);
    }

    if(codeEquation->at(codeEquation->size()-1) == QChar(')')){
        codeEquation->remove(codeEquation->size()-1,1);
    }
}
/// en que me quede
///  segun cada palabra o letra se añadira un elemento a la lista de operaciones
///
QList<OperationMath>* EquationMaker::generateCommands(QString* code)
{
    int cursor= -1;
    int index = 0;
    QString sub = code->mid(index,3);

    if(code->at[index] == QChar(''))

    if(sub == "SUM"){
        index += 3;

    } else if(sub == "RES"){
        index += 3;

    } else if(sub == "MUL"){
        index += 3;

    } else if(sub == "DIV"){
        index += 3;

    } else if(sub == "POT"){
        index += 3;

    } else if(sub == "RAI"){
        index += 3;

    } else if(sub == "LOG"){
        index += 3;

    } else if(code->at[index] == QChar('(')){
        cursor++;

        index++;
    } else if(code->at[index] == QChar(')')){
        cursor--;

        index++;
    } else if(code->at[index] == QChar(',')){

        index++;
    } else {

        index++;
    }

}
