#ifndef SESSION_H
#define SESSION_H


#include <QString>

enum class TypeSession {Dinamic, Cinematic};
enum class ViewSession {Up, Side, Free};

class Session{
public:
    Session(TypeSession _type, ViewSession _view, QString _name, QString _description) : type(_type),view(_view),name(_name),description(_description)
    {
    }

    const TypeSession type;
    const ViewSession view;
    const QString name;
    const QString description;




    TypeSession getType() const;
    ViewSession getView() const;
    const QString &getName() const;
    const QString &getDescription() const;
};

inline ViewSession Session::getView() const
{
    return view;
}

inline const QString &Session::getName() const
{
    return name;
}

inline const QString &Session::getDescription() const
{
    return description;
}

inline TypeSession Session::getType() const
{
    return type;
}

#endif // SESSION_H
