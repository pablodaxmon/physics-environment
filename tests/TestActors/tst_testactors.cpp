#include <QtTest>
#include <QCoreApplication>
#include "src/core/equation.h"

// add necessary includes here

class TestActors : public QObject
{
    Q_OBJECT

public:
    TestActors();
    ~TestActors();

private slots:
    void test_case1();

};

TestActors::TestActors()
{


}

TestActors::~TestActors()
{

}

void TestActors::test_case1()
{
    Equation * equation = new Equation;

}

QTEST_MAIN(TestActors)

#include "tst_testactors.moc"
