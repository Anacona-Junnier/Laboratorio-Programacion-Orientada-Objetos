#include <iostream>
using namespace std;

class Rectangulo{
    private:
        double base;
        double altura;

    public:
        Rectangulo();
        Rectangulo(double _base, double _altura){
            base = _base;
            altura = _altura;
        }

        double calcularArea(){
            double area;
            area = base * altura;
            return area;
        }
        void mostrar(){
            cout << "El area del rectangulo cuya base es: " << base << " y altura es: " << altura << " es: " << calcularArea() << endl;
        }
};

class Cuadrado{
    private:
        double lado;

    public:
        Cuadrado();
        Cuadrado(double _lado){
            lado = _lado;
        }

        double calcularArea(){
            double area;
            area = lado * lado;
            return area;
        }

        void mostrar(){
            cout << "El area del cuadrado cuyo lado es: " << lado << " es: " << calcularArea() << endl;
        }
};

class Triangulo{
    private:
        double base;
        double altura;

    public:
        Triangulo();
        Triangulo(double _base, double _altura){
            base = _base;
            altura = _altura;
        }

        double calcularArea(){
            double area;
            area = (base * altura) / 2;
            return area;
        }

        void mostrar(){
            cout << "El area del triangulo cuya base es: " << base << " y altura es: " << altura << " es: " << calcularArea() << endl;
        }
};

class Rombo{
    private:
        double diagonalMayor;
        double diagonalMenor;

    public:
        Rombo();
        Rombo(double _diagonalMayor, double _diagonalMenor){
            diagonalMayor = _diagonalMayor;
            diagonalMenor = _diagonalMenor;
        }

        double calcularArea(){
            double area;
            area = (diagonalMayor * diagonalMenor) / 2;
            return area;
        }

        void mostrar(){
            cout << "El area del rombo cuya diagonal mayor es: " << diagonalMayor << " y diagonal menor es: " << diagonalMenor << " es: " << calcularArea() << endl;
        }
};

int main(int argc, char** argv) {
    int opcion;

    do
    {
        cout << "Menu de figuras geometricas" << endl <<endl;
        cout << "Ingrese la opcion deseada: " << endl;
        cout << "1. Rectangulo" << endl;
        cout << "2. Cuadrado" << endl;
        cout << "3. Triangulo" << endl;
        cout << "4. Rombo" << endl;
        cout << "5. Salir" << endl;

        cin >> opcion;
        
        switch (opcion)
        {
            case 1: {   
                double base, altura;
                cout << "Ingrese la base del rectangulo: ";
                cin >> base;
                cout << "Ingrese la altura del rectangulo: ";
                cin >> altura;
                Rectangulo rectangulo(base, altura);
                rectangulo.mostrar();
                break;
            }
            case 2: {
                double lado;
                cout << "Ingrese el lado del cuadrado: ";
                cin >> lado;
                Cuadrado cuadrado(lado);
                cuadrado.mostrar();
                break;
            }
            case 3: {
                double baseTriangulo, alturaTriangulo;
                cout << "Ingrese la base del triangulo: ";
                cin >> baseTriangulo;
                cout << "Ingrese la altura del triangulo: ";
                cin >> alturaTriangulo;
                Triangulo triangulo(baseTriangulo, alturaTriangulo);
                triangulo.mostrar();
                break;
            }
            case 4: {
                double diagonalMayor, diagonalMenor;
                cout << "Ingrese la diagonal mayor del rombo: ";
                cin >> diagonalMayor;
                cout << "Ingrese la diagonal menor del rombo: ";
                cin >> diagonalMenor;
                Rombo rombo(diagonalMayor, diagonalMenor);
                rombo.mostrar();
                break;
            }
            case 5: {
                cout << "Saliendo del programa..." << endl;
                break;
            }
        }
    } while (opcion != 5);
    return 0;
    
}
