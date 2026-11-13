#include <iostream>
#include <string>
using namespace std;

#include <vector>

class Empleado{
    protected:
        string nombre;
        int id;
    public:
        Empleado(string _nombre, int _id){
            nombre = _nombre;
            id = _id;
        }

        virtual ~Empleado(){} // Destructor virtual

        virtual void calcularSalario() = 0; // Método virtual puro

        void mostrarDetalles(){
            cout << "Nombre: " << nombre << endl;
            cout << "ID: " << id << endl;
        }
};

class EmpleadoAsalariado : public Empleado{
    private:
        double salarioMensual;
    public:
        EmpleadoAsalariado(double _salarioMensual, string _nombre, int _id) : Empleado(_nombre, _id){
            salarioMensual = _salarioMensual;
        }

        void calcularSalario() override{
            cout << "Salario Mensual: " << salarioMensual << endl;
        }
};

class EmpleadoPorHora : public Empleado{
    private:
        int horasTrabajadas;
        double tarifaPorHora;
    public:
        EmpleadoPorHora(int _horasTrabajadas, double _tarifaPorHora, string _nombre, int _id) : Empleado(_nombre, _id){
            horasTrabajadas = _horasTrabajadas;
            tarifaPorHora = _tarifaPorHora;
        }

        void calcularSalario() override{
            double salario = horasTrabajadas * tarifaPorHora;
            cout << "Salario por Hora: " << salario << endl;
        }
};

int main() {
    vector<Empleado*> empleados;

    empleados.push_back(new EmpleadoAsalariado(180000, "Juliana", 1));
    empleados.push_back(new EmpleadoPorHora(40, 1400, "Carlos", 2));

    for (Empleado* empleado: empleados){
        empleado->mostrarDetalles();
        empleado->calcularSalario();
        cout << endl;
    }

    for (Empleado* empleado: empleados){
        delete empleado; // Liberar memoria
    }

    return 0;
}