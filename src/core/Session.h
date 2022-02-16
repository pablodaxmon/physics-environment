#ifndef SESSION_H
#define SESSION_H


#include <QString>

enum class TypeSession {Dinamic, Cinematic};
enum class ViewSession {Up, Side, Free};

class Session{
public:
    Session(  ViewSession _view, QString _name, QString _description, bool _isBox2d, bool _gravity) : view(_view),
        name(_name),
        description(_description),
        isBox2d(_isBox2d),
        isGravity(_gravity)
    {
    }

    const ViewSession view;
    const QString name;
    const QString description;
    const bool isBox2d;
    const bool isGravity;



    TypeSession getType() const;
    ViewSession getView() const;
    const QString &getName() const;
    const QString &getDescription() const;
    bool getIsBox2d() const;
    bool getIsGravity() const;
};

inline bool Session::getIsBox2d() const
{
    return isBox2d;
}

inline bool Session::getIsGravity() const
{
    return isGravity;
}

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



#endif // SESSION_H
