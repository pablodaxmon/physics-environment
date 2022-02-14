#ifndef SPLITTERMAIN_H
#define SPLITTERMAIN_H

#include <QWidget>
#include "viewgraphicsresults.h"

class SplitterMain : public QWidget
{
    Q_OBJECT
public:
    explicit SplitterMain(QWidget *parent = nullptr,ViewGraphicsResults *graphisResults = nullptr, QWidget *vListObjects  = nullptr, QWidget *vActions = nullptr, QWidget *vProperties = nullptr, QWidget *vSimulation = nullptr);

signals:

};

#endif // SPLITTERMAIN_H
