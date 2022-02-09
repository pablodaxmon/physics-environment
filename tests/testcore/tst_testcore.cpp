#include <QtTest>

// add necessary includes here

class TestCore : public QObject
{
    Q_OBJECT

public:
    TestCore();
    ~TestCore();

private slots:
    void test_case1();

};

TestCore::TestCore()
{

}

TestCore::~TestCore()
{

}

void TestCore::test_case1()
{

}

QTEST_APPLESS_MAIN(TestCore)

#include "tst_testcore.moc"
