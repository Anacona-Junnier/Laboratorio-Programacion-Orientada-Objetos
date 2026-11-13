#ifndef OBJETO_H
#define OBJETO_H

#include <iostream>
#include <string>

using namespace std;

class Objeto {
protected:
    string tipo;
    string nombreUsuario;
    string descripcion;
    string lugar;
    string fecha;

public:
    Objeto();
    virtual ~Objeto();
    virtual void mostrar_informacion();
};

#endif
