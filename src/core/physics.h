#ifndef PHYSICS_H
#define PHYSICS_H

enum class Unit { Tiempo, VelocidadX, VelocidadY, AceleracionX, AceleracionY, PosicionX, PosicionY, Distancia, Rotacion, Velocidad, Aceleracion};

class Physics
{
public:
    Physics();

    static const char* UnitToChar(const Unit unit){
        switch (unit) {
            case Unit::Tiempo:
                return "Tiempo";
            case Unit::VelocidadX:
                return "VelocidadX";
            case Unit::VelocidadY:
                return "VelocidadY";
            case Unit::AceleracionX:
                return "AceleracionX";
            case Unit::AceleracionY:
                return "AceleracionY";
            case Unit::PosicionX:
                return "PosicionX";
            case Unit::PosicionY:
                return "PosicionY";
            case Unit::Distancia:
                return "Distancia";
            case Unit::Rotacion:
                return "Rotacion";
            case Unit::Velocidad:
                return "Velocidad";
            case Unit::Aceleracion:
                return "Aceleracion";
            default:
                return "Unknow";

    }

};


};

#endif // PHYSICS_H
