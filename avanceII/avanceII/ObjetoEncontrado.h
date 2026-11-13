#ifndef OBJETOENCONTRADO_H
#define OBJETOENCONTRADO_H

#include <iostream>
#include "Objeto.h"

using namespace std;

class ObjetoEncontrado : public Objeto {
private:
    string estadoEntrega;

public:
    ObjetoEncontrado();
    void mostrar_informacion() override;
};

#endif
