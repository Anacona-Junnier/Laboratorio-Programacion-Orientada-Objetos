#include "ObjetoEncontrado.h"

ObjetoEncontrado::ObjetoEncontrado() {
    estadoEntrega = "Pendiente de entrega";
}

void ObjetoEncontrado::mostrar_informacion() {
    cout << "----- OBJETO ENCONTRADO -----" << endl;
    Objeto::mostrar_informacion();
    cout << "Estado de entrega: " << estadoEntrega << endl;
}
