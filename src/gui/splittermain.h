#ifndef SPLITTERMAIN_H
#define SPLITTERMAIN_H

#include <QWidget>

class SplitterMain : public QWidget
{
    Q_OBJECT
public:
    explicit SplitterMain(QWidget *parent = nullptr, QWidget *vListObjects  = nullptr, QWidget *vActions = nullptr, QWidget *vProperties = nullptr, QWidget *vSimulation = nullptr);

signals:

};

#endif // SPLITTERMAIN_H
