#ifndef OPERATIONMATH_H
#define OPERATIONMATH_H
class OperationMath{
public:
    OperationMath(int c, bool compA, float _valueA,bool compB, float _valueB) :
        calculo(c),
        complexA(compA),
        valorA(_valueA),
        complexB(compB),
        valorB(_valueB)
    {}

    OperationMath(OperationMath &another){
        calculo = another.calculo;
        valorA = another.valorA;
        valorB = another.valorB;
        complexA = another.complexA;
        complexB = another.complexB;
    }
    OperationMath& operator =(OperationMath& another){
        if(&another != this){
            calculo = another.calculo;
            valorA = another.valorA;
            valorB = another.valorB;
            complexA = another.complexA;
            complexB = another.complexB;
        }
        return *this;

    }
    int calculo;
    bool complexA;
    bool complexB;
    float valorA;
    float valorB;
};


#endif // OPERATIONMATH_H
