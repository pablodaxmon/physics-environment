#ifndef DIALOGTYPEENVIRONMENT_H
#define DIALOGTYPEENVIRONMENT_H

#include <QWidget>

class DialogTypeEnvironment : public QWidget
{
    Q_OBJECT
public:
    explicit DialogTypeEnvironment(QWidget *parent = nullptr);

signals:
    void typeOnClick();

private slots:
    void cinematicOnClick();
    void dinamicOnClick();
    void fluydOnClick();
};

#endif // DIALOGTYPEENVIRONMENT_H
