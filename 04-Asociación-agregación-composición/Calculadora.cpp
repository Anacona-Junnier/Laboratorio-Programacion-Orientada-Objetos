#include <iostream>
#include <cmath>
using namespace std;

class Suma
{
private:
    double numero1;
    double numero2;

public:
    Suma(double _numero1, double _numero2)
    {
        numero1 = _numero1;
        numero2 = _numero2;
    }

    double calcularSuma()
    {
        double suma;
        suma = numero1 + numero2;
        return suma;
    }

    void mostrar()
    {
        cout << "La suma de los numeros: " << numero1 << " y " << numero2 << " es: " << calcularSuma() << endl;
    }
};

class Resta
{
private:
    double numero1;
    double numero2;

public:
    Resta(double _numero1, double _numero2)
    {
        numero1 = _numero1;
        numero2 = _numero2;
    }

    double calcularResta()
    {
        double resta;
        resta = numero1 - numero2;
        return resta;
    }

    void mostrar()
    {
        cout << "La resta de los numeros: " << numero1 << " y " << numero2 << " es: " << calcularResta() << endl;
    }
};

class Multiplicacion
{
private:
    double numero1;
    double numero2;

public:
    Multiplicacion(double _numero1, double _numero2)
    {
        numero1 = _numero1;
        numero2 = _numero2;
    }

    double calcularMultiplicacion()
    {
        double multiplicacion;
        multiplicacion = numero1 * numero2;
        return multiplicacion;
    }

    void mostrar()
    {
        cout << "La multiplicacion de los numeros: " << numero1 << " y " << numero2 << " es: " << calcularMultiplicacion() << endl;
    }
};

class Division
{
private:
    double numero1;
    double numero2;

public:
    Division(double _numero1, double _numero2)
    {
        numero1 = _numero1;
        numero2 = _numero2;
    }

    double calcularDivision()
    {
        double division;
        division = numero1 / numero2;
        return division;
    }

    void mostrar()
    {
        cout << "La division de los numeros: " << numero1 << " y " << numero2 << " es: " << calcularDivision() << endl;
    }
};

class Potencia
{
private:
    double base;
    double exponente;

public:
    Potencia(double _base, double _exponente)
    {
        base = _base;
        exponente = _exponente;
    }

    double calcularPotencia()
    {
        double potencia;
        potencia = pow(base, exponente);
        return potencia;
    }

    void mostrar()
    {
        cout << "La potencia de la base: " << base << " y exponente: " << exponente << " es: " << calcularPotencia() << endl;
    }
};

class Radicacion
{
private:
    double radicando;
    double indice;

public:
    Radicacion(double _radicando, double _indice)
    {
        radicando = _radicando;
        indice = _indice;
    }

    double calcularRadicacion()
    {
        double radicacion;
        radicacion = pow(radicando, 1 / indice);
        return radicacion;
    }

    void mostrar()
    {
        cout << "La radicacion del radicando: " << radicando << " y el indice: " << indice << " es: " << calcularRadicacion() << endl;
    }
};

int main(int argc, char **argv)
{
    int opcion;

    do
    {
        cout << "Menu de operaciones matematicas" << endl
             << endl;
        cout << "Ingrese la opcion deseada: " << endl;
        cout << "1. Suma" << endl;
        cout << "2. Resta" << endl;
        cout << "3. Multiplicacion" << endl;
        cout << "4. Division" << endl;
        cout << "5. Potencia" << endl;
        cout << "6. Radicacion" << endl;
        cout << "7. Salir" << endl;
        cin >> opcion;

        switch (opcion)
        {
        case 1:
        {
            double numero1, numero2;
            cout << "Ingrese el primer numero: ";
            cin >> numero1;
            cout << "Ingrese el segundo numero: ";
            cin >> numero2;
            Suma suma(numero1, numero2);
            suma.mostrar();
            break;
        }

        case 2:
        {
            double numero3, numero4;
            cout << "Ingrese el primer numero: ";
            cin >> numero3;
            cout << "Ingrese el segundo numero: ";
            cin >> numero4;
            Resta resta(numero3, numero4);
            resta.mostrar();
            break;
        }

        case 3:
        {
            double numero5, numero6;
            cout << "Ingrese el primer numero: ";
            cin >> numero5;
            cout << "Ingrese el segundo numero: ";
            cin >> numero6;
            Multiplicacion multiplicacion(numero5, numero6);
            multiplicacion.mostrar();
            break;
        }
        case 4:
        {
            double numero7, numero8;
            cout << "Ingrese el primer numero: ";
            cin >> numero7;
            cout << "Ingrese el segundo numero: ";
            cin >> numero8;
            if (numero8 == 0)
            {
                cout << "Error: No se puede dividir entre cero." << endl;
            }
            else
            {
                Division division(numero7, numero8);
                division.mostrar();
            }
            break;
        }
        case 5:
        {
            double base, exponente;
            cout << "Ingrese la base: ";
            cin >> base;
            cout << "Ingrese el exponente: ";
            cin >> exponente;
            Potencia potencia(base, exponente);
            potencia.mostrar();
            break;
        }

        case 6:
        {
            double radicando, indice;
            cout << "Ingrese el radicando: ";
            cin >> radicando;
            cout << "Ingrese el indice: ";
            cin >> indice;
            if (indice == 0)
            {
                cout << "Error: el indice no puede ser cero." << endl;
            }
            else
            {
                Radicacion radicacion(radicando, indice);
                radicacion.mostrar();
            }
            break;
        }
        case 7:
        {
            cout << "Saliendo del programa..." << endl;
            break;
        }

        default:
        {
            cout << "Opcion no valida. Por favor, ingrese una opcion valida." << endl;
        }
        }
    } while (opcion != 7);

    return 0;
}