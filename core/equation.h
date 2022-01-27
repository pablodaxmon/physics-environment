#ifndef EQUATION_H
#define EQUATION_H

#include <QString>
#include <QList>
#include <QMap>

class Equation
{
public:

    Equation();
    Equation(char* codeequation, QMap<QString, QString> &dicc);

    QString &getCodeEquation();
    void setStringEquation(const QString &newCodeEquation);

    const QMap<QString, QString> &getDictionary() const;
    void setDictionary(const QMap<QString, QString> &newDictionary);

private:
    QString codeEquation;
    QMap<QString, QString> dictionary;

};

#endif // EQUATION_H
