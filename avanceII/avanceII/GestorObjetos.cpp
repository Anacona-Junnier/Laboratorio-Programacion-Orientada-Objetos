#include "GestorObjetos.h"
#include "Objeto.h"

GestorObjetos::GestorObjetos() {
    objetos = nullptr;
    cantidad = 0;
}

GestorObjetos::~GestorObjetos() {
    for (int i = 0; i < cantidad; i++) {
        delete objetos[i];
    }
    delete[] objetos;
}

void GestorObjetos::agregar_objeto(Objeto* nuevo) {
    if (nuevo == nullptr) {
        return;
    }

    Objeto** nueva = new Objeto*[cantidad + 1];
    for (int i = 0; i < cantidad; i++) {
        nueva[i] = objetos[i];
    }
    nueva[cantidad] = nuevo;

    delete[] objetos;
    objetos = nueva;
    cantidad++;
}

bool GestorObjetos::hay_objetos() {
    return cantidad > 0;
}

void GestorObjetos::mostrar_objetos() {
    for (int i = 0; i < cantidad; i++) {
        objetos[i]->mostrar_informacion();
        cout << endl;
    }
}
