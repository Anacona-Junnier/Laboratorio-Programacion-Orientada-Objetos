#include <iostream>
#include <string>
using namespace std;

class Figura{
    public:
        virtual double calcularArea() = 0; // Método virtual puro

        virtual ~Figura(){} // Destructor virtual
};

class Circulo : public Figura{
    private:
        double radio;
    public:
        Circulo(double _radio){
            radio = _radio;
        }

        double calcularArea() override{
            return 3.14159 * radio * radio;
        }

};

class Rectangulo : public Figura{
    private:
        double base;
        double altura;
    public:
        Rectangulo(double _base, double _altura){
            base = _base;
            altura = _altura;
        }

        double calcularArea() override{
            return base * altura;
        }
};

void imprimirArea(Figura* figura){
    cout << "Area: " << figura->calcularArea() << endl;
}

int main(){
    Circulo circulo(5);
    Rectangulo rectangulo(4, 6);

    imprimirArea(&circulo);
    imprimirArea(&rectangulo);

    return 0;
}