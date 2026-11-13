#ifndef GESTOROBJETOS_H
#define GESTOROBJETOS_H

#include <iostream>

using namespace std;

class Objeto;

class GestorObjetos {
private:
    Objeto** objetos;
    int cantidad;

public:
    GestorObjetos();
    ~GestorObjetos();
    void agregar_objeto(Objeto*);
    bool hay_objetos();
    void mostrar_objetos();
};

#endif
