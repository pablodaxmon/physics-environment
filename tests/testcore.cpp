#include "testcore.h"

TestCore::TestCore(QObject *parent) : QObject(parent)
{

}

void TestCore::initTestCase()
{

}

void TestCore::testAction()
{
    Actor *actor1 = new Actor("pablo1");
    Condition * condition = new Condition(Comparation::isBig, 5,6);

    Action * myaction = new Action(actor1, (*condition), Unit::PosicionX);

}

void TestCore::testEquationRunner()
{
    QMap<QString, QString> *map = new QMap<QString, QString>();
    map->insert("A","velocity");
    map->insert("B","speed");
    map->insert("C","time");

    QList<float> *listValores = new QList<float>();
    listValores->append(3);
    listValores->append(4);
    listValores->append(5);

    Equation *ecuacion = new Equation("SUM(A,SUM(A,SUM(B,C))");
    EquationMaker *maker = new EquationMaker();
    maker->makeEquation(ecuacion);
    EquationRunner *runner = new EquationRunner();
    float res = runner->getResult(ecuacion, listValores);
}

