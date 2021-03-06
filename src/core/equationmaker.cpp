#include "equationmaker.h"
#include <list>

EquationMaker::EquationMaker()
{

}

void EquationMaker::makeEquation(Equation* ecuacion)
{
    generateCommands(ecuacion->getCodeEquation(), ecuacion->getMapValues(), ecuacion->getListOperations());



}



void EquationMaker::clearString(QString* codeEquation)
{
    codeEquation->simplified();
    codeEquation->replace(" ","");

    if(codeEquation->at(0) == QChar('(')){
        codeEquation->remove(0,1);
    }

    if(codeEquation->at(codeEquation->size()-1) == QChar(')')){
        codeEquation->remove(codeEquation->size()-1,1);
    }
}



int EquationMaker::getOperationInt(QString sub, int from, int to)
{
    QString anotherSub = sub.mid(from,to);
    if(anotherSub == "SUM"){
        return 0;
    } else if(anotherSub == "RES"){
        return 1;
    } else if(anotherSub == "MUL"){
        return 2;
    } else if(anotherSub == "DIV"){
        return 3;
    } else if(anotherSub == "POT"){
        return 4;
    } else if(anotherSub == "RAI"){
        return 5;
    } else if(anotherSub == "LOG"){
        return 6;
    } else {
        return -1;
    }
}

void EquationMaker::generateCommands(QString* code, QMap<const QChar, int> *map, QList<OperationMath*>* res)
{

    map->clear();
    qDeleteAll(res->begin(), res->end());
    res->clear();

    if(code->size() == 0){
        return;
    }

    clearString(code);

    if(getOperationInt(*code,0,3) == -1){
        bool isFloat = false;
        code->toFloat(&isFloat);
        if(isFloat){
            map->insert('N',0);
            res->append(new OperationMath(-1,false,0,false,0));
        } else {
            return;
        }
    }



    int cursor= 0;
    int cursorMax= -1;
    int index = 0;
    OperationMath listResult[code->count(QChar('('))];
    while(index < code->size()){
        if(code->at(index) == QChar('(')){
            cursorMax++;
            listResult[cursor].calculo = getOperationInt(*code,index-3,3);

            /// si despues del parentesis es una operacion entonces en la lista almacena el indice de ls siguiente operacion
            /// si no es operacion, en la lista almacena la referencia del valor que debe calcular. sacandolo del mapa.
            if(getOperationInt(*code,index+1,3) != -1){
                listResult[cursor].complexA = true;
                listResult[cursor].valorA = cursorMax+1;
                cursor = cursorMax+1;
            } else {
                listResult[cursor].complexA = false;

                if(!map->contains(code->at(index+1))){
                    map->insert(code->at(index+1),map->size());
                }
                listResult[cursor].valorA = map->value(code->at(index+1));
            }
        } else if(code->at(index) == QChar(')')){
            cursor--;

        } else if(code->at(index) == QChar(',')){

            if(getOperationInt(*code,index+1,3) != -1){

                listResult[cursor].complexB = true;
                listResult[cursor].valorB = cursorMax+1;
                cursor = cursorMax+1;
            } else {
                listResult[cursor].complexB = false;

                if(!map->contains(code->at(index+1))){
                    map->insert(code->at(index+1),map->size());
                }

                listResult[cursor].valorB = map->value(code->at(index+1));
            }

        }

        index++;
    }




    for(int i = 0;i<sizeof(listResult)/sizeof(*listResult);i++){
        //qDebug() << "(" <<listResult[i].calculo << "," << listResult[i].complexA << ","  << listResult[i].valorA << ","  << listResult[i].complexB << ","  << listResult[i].valorB << ")" ;

        res->append(new OperationMath(
                        listResult[i].calculo,
                    listResult[i].complexA,
                    listResult[i].valorA,
                    listResult[i].complexB,
                    listResult[i].valorB
                    ));
    }
}
