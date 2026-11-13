#include <iostream>
using namespace std;

class Empleado{
protected:
    string nombre;
    int salario;
public:
    Empleado(string _nombre, int _salario){
        nombre = _nombre;
        salario = _salario;
        cout << "Constructor de Empleado ejecutado" << endl;
    }
    ~Empleado(){
        cout << "Destructor de Empleado ejecutado" << endl;
    }
    void mostrarDatos(){
        cout << "Nombre: " << nombre << " Salario: " << salario << endl;
    }
};

class Gerente : public Empleado{
private:
    string departamento;
public:
    Gerente(string _nombre, int _salario, string _departamento): Empleado(_nombre, _salario){
        departamento = _departamento;
        cout << "Constructor de Gerente ejecutado" << endl;
    }
    ~Gerente(){
        cout << "Destructor de Gerente ejecutado" << endl;
    }
    void mostrarDatosGerente(){
        mostrarDatos();
        cout << "Departamento: " << departamento << endl;
    }
};

int main(){
    Gerente gerente1("Junnier", 5000, "Ciberseguridad");
    gerente1.mostrarDatosGerente();
}