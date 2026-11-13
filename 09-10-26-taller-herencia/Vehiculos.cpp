#include <iostream>
using namespace std;

class Vehiculo{
protected:
    string marca;
public:
    Vehiculo(string _marca){
        marca = _marca;
        cout << "Constructor de Vehiculo ejecutado" << endl;
    }

    ~Vehiculo(){
        cout << "Destructor de Vehiculo ejecutado" << endl;
    }

    void mostrarDatos(){
        cout << "Marca: " << marca << endl;
    }
};

class Carro : public Vehiculo{
private:
    string modelo;
    string placa;
public:
    Carro(string _marca, string _modelo, string _placa): Vehiculo(_marca){
        modelo = _modelo;
        placa = _placa;
        cout << "Constructor de Carro ejecutado" << endl;
    }

    ~Carro(){
        cout << "Destructor de Carro ejecutado" << endl;
    }

    void mostrarDatosCarro(){
        mostrarDatos();
        cout << "Modelo: " << modelo << " Placa: " << placa << endl;
    }
};

int main(){
    Carro carro1("Toyota", "Hilux", "ABC123");
    carro1.mostrarDatosCarro();
    Carro carro2("Nissan", "Frontier", "XYZ789");
    carro2.mostrarDatosCarro();
    Carro carro3("Mazda", "CX-5", "LMN456");
    carro3.mostrarDatosCarro();
    return 0;
}