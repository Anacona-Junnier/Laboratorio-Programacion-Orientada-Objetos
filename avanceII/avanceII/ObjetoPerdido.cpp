#include "ObjetoPerdido.h"

ObjetoPerdido::ObjetoPerdido() {
    estadoBusqueda = true;
}

void ObjetoPerdido::mostrar_informacion() {
    cout << "----- OBJETO PERDIDO -----" << endl;
    Objeto::mostrar_informacion();
    if (estadoBusqueda) {
        cout << "Estado de busqueda: En busqueda" << endl;
    } else {
        cout << "Estado de busqueda: Cerrada" << endl;
    }
}
