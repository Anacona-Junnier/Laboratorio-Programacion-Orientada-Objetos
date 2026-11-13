#include "Objeto.h"

Objeto::Objeto() {
    cout << "Tipo de objeto: ";
    cin >> ws;
    getline(cin, tipo);
    cout << "Nombre del usuario: ";
    getline(cin, nombreUsuario);
    cout << "Descripcion: ";
    getline(cin, descripcion);
    cout << "Lugar: ";
    getline(cin, lugar);
    cout << "Fecha: ";
    getline(cin, fecha);
}

Objeto::~Objeto() {
}

void Objeto::mostrar_informacion() {
    cout << "Tipo: " << tipo << endl;
    cout << "Usuario: " << nombreUsuario << endl;
    cout << "Descripcion: " << descripcion << endl;
    cout << "Lugar: " << lugar << endl;
    cout << "Fecha: " << fecha << endl;
}
