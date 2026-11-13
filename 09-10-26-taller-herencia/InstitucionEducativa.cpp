#include <iostream>
using namespace std;

class Persona{
protected:
    string nombre;
    int edad;
public:
    Persona(string _nombre, int _edad){
        nombre = _nombre;
        edad = _edad;
        cout << "Constructor de Persona ejecutado" << endl;
    }

    virtual ~Persona(){
        cout << "Destructor de Persona ejecutado" << endl;
    }

    virtual void mostrarDatos(){
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
    }
};

class Profesor : public Persona{
private:
    string materia;
public:
    Profesor(string _nombre, int _edad, string _materia): Persona(_nombre, _edad){
        materia = _materia;
        cout << "Constructor de Profesor ejecutado" << endl;
    }

    ~Profesor(){
        cout << "Destructor de Profesor ejecutado" << endl;
    }

    void mostrarDatos() override{
        Persona::mostrarDatos();
        cout << "Materia: " << materia << endl;
    }
};

class Estudiante : public Persona{
private:
    string programa;
public:
    Estudiante(string _nombre, int _edad, string _programa): Persona(_nombre, _edad){
        programa = _programa;
        cout << "Constructor de Estudiante ejecutado" << endl;
    }

    ~Estudiante(){
        cout << "Destructor de Estudiante ejecutado" << endl;
    }

    void mostrarDatos() override{
        Persona::mostrarDatos();
        cout << "Programa: " << programa << endl;
    }
};

int main(){
    Persona *profesor1 = new Profesor("Junnier", 21, "Ciberseguridad");
    profesor1->mostrarDatos();
    delete profesor1;
    Persona *estudiante1 = new Estudiante("Ana", 20, "Ingenieria de Sistemas");
    estudiante1->mostrarDatos();
    delete estudiante1;
    return 0;
}