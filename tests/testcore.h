#ifndef TESTCORE_H
#define TESTCORE_H

#include <QString>
#include <QObject>
#include "core/action.h"
#include "core/actor.h"
#include "core/actorsystem.h"
#include "core/equation.h"
#include "core/equationmaker.h"
#include "core/equationrunner.h"
#include "core/operationmath.h"
#include "core/timerloop.h"

class TestCore : public QObject
{
    Q_OBJECT
public:
    explicit TestCore(QObject *parent = nullptr);

private slots:
    void initTestCase();
    void testAction();
    void testEquationRunner();


};

#endif // TESTCORE_H
