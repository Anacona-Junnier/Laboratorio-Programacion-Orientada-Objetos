#include <iostream>
using namespace std;

class Dispositivo{
protected:
    string marca;
public:
    Dispositivo(string _marca){
        marca = _marca;
        cout << "Constructor de Dispositivo ejecutado" << endl;
    }

    ~Dispositivo(){
        cout << "Destructor de Dispositivo ejecutado" << endl;
    }

    void mostrarDatos(){
        cout << "Marca: " << marca << endl;
    }
};

class Celular : public Dispositivo{
private:
    string modelo;
    string sistema_operativo;
public:
    Celular(string _marca, string _modelo, string _sistema_operativo): Dispositivo(_marca){
        modelo = _modelo;
        sistema_operativo = _sistema_operativo;
        cout << "Constructor de Celular ejecutado" << endl;
    }

    ~Celular(){
        cout << "Destructor de Celular ejecutado" << endl;
    }

    void mostrarDatosCelular(){
        mostrarDatos();
        cout << "Modelo: " << modelo << endl;
        cout << "Sistema Operativo: " << sistema_operativo << endl;
    }
};

int main(){
    Celular *celular1 = new Celular("Samsung", "Galaxy S21", "Android");
    celular1->mostrarDatosCelular();
    delete celular1;
    return 0;
}