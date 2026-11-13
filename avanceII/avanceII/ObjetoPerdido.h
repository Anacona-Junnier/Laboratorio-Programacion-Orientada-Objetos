#ifndef OBJETOPERDIDO_H
#define OBJETOPERDIDO_H

#include <iostream>
#include "Objeto.h"

using namespace std;

class ObjetoPerdido : public Objeto {
private:
    bool estadoBusqueda;

public:
    ObjetoPerdido();
    void mostrar_informacion() override;
};

#endif
