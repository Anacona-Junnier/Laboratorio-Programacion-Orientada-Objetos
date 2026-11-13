#include <iostream>
#include "GestorObjetos.h"
#include "ObjetoPerdido.h"
#include "ObjetoEncontrado.h"

using namespace std;

int main() {
    GestorObjetos gestor;
    int opcion = 0;

    while (opcion != 4) {
        cout << "===== RECUPERA UNICAUCA =====" << endl;
        cout << "1. Registrar Objeto Perdido" << endl;
        cout << "2. Registrar Objeto Encontrado" << endl;
        cout << "3. Consultar Objeto" << endl;
        cout << "4. Salir" << endl;
        cout << "Opcion: ";

        if (!(cin >> opcion)) {
            if (cin.eof()) {
                break;
            }
            cin.clear();
            cin.ignore(1000, '\n');
            opcion = 0;
        }

        if (opcion == 1) {
            gestor.agregar_objeto(new ObjetoPerdido());
            cout << "Objeto perdido registrado." << endl;
        } else if (opcion == 2) {
            gestor.agregar_objeto(new ObjetoEncontrado());
            cout << "Objeto encontrado registrado." << endl;
        } else if (opcion == 3) {
            if (gestor.hay_objetos()) {
                gestor.mostrar_objetos();
            } else {
                cout << "No hay objetos" << endl;
            }
        } else if (opcion == 4) {
            cout << "Hasta pronto." << endl;
        } else {
            cout << "Opcion no valida." << endl;
        }
        cout << endl;
    }

    return 0;
}
