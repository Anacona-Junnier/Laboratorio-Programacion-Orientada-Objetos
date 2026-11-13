#include <iostream>
using namespace std;

class Animal {
protected:
    string nombre;
    int edad;

public:
    Animal(string _nombre, int _edad){
        nombre = _nombre;
        edad = _edad;
        cout << "Constructar de Animal ejecutado" << endl;
    }

    ~Animal(){
        cout << "Destructor de Animal ejcecutado" << endl;
    }

    void mostrarDatos(){
        cout << "Nombre: " << nombre << " Edad: " << edad << endl;  
    }
};

class Perro : public Animal{
private:
    string raza;
public:
    Perro(string _nombre, int _edad, string _raza): Animal(_nombre, _edad){
        raza = _raza;
        cout << "Constructor de Perro ejecutado" << endl;
    }

    ~Perro(){
        cout << "Destructor de Perro ejecutado" << endl;
    }

    void mostrarDatosPerro(){
        mostrarDatos();
        cout << "Raza: " << raza << endl;
    }
};

int main() {
    Perro perro1("Firulais", 1, "Criollo");
    perro1.mostrarDatosPerro();
    return 0;
}