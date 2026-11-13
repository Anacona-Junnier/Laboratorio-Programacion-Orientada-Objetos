#include <iostream>
#include <string>
using namespace std;

class Transporte {
protected:
    string tipo;

public:
    Transporte(string _tipo) {
        tipo = _tipo;
        cout << "Construyendo Transporte (" << tipo << ")" << endl;
    }

    virtual ~Transporte() {
        cout << "Destruyendo Transporte (" << tipo << ")" << endl;
    }

    virtual void mostrarDatos(){
        cout << "Tipo de transporte: (" << tipo << ")"  << endl;
    }
};

class Avion : public Transporte {
private:
    string aerolinea;
    int capacidad;

public:
    Avion(string _aerolinea, int _capacidad): Transporte("aereo") {
        aerolinea = _aerolinea;
        capacidad = _capacidad;
        cout << "Construyendo Avion de " << aerolinea << endl;
    }

    ~Avion() override {
        cout << "Destruyendo Avion de " << aerolinea << endl;
    }

    void mostrarDatos() override {
        Transporte::mostrarDatos();
        cout << "Aerolinea: " << aerolinea << ", Capacidad: " << capacidad << endl;
    }
};

class Bus : public Transporte {
private:
    string empresa;
    int numeroPasajeros;

public:
    Bus(string _empresa, int _numeroPasajeros): Transporte("terrestre") {
        empresa = _empresa;
        numeroPasajeros = _numeroPasajeros;
        cout << "Construyendo Bus de " << empresa << endl;
    }

    ~Bus() override {
        cout << "Destruyendo Bus de " << empresa << endl;
    }

    void mostrarDatos() override {
        Transporte::mostrarDatos();
        cout << "Empresa: " << empresa << ", Número de Pasajeros: " << numeroPasajeros << endl;
    }
};

int main() {
    Transporte* lista[2] = {
        new Avion("Avianca", 180),
        new Bus("Velotax", 40)
    };

    for (int i = 0; i < 2; ++i) {
        lista[i]->mostrarDatos();
        delete lista[i];
    }

    return 0;
}
