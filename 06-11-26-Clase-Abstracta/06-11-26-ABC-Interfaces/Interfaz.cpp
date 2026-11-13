#include <iostream>
#include <string>
using namespace std;

class IConectable{
    public:
        virtual void encender() = 0;
        virtual void apagar() = 0;

        virtual ~IConectable(){}
};

class Computador : public IConectable{
    private:
        string nombre;
    public:
        Computador(string n) : nombre(n) {}

        void encender() override {
            cout << "El PC: " << nombre << "Iniciando el sistema operativo: Bepp... Boop..." <<endl;
        }

        void apagar() override {
            cout << "El PC: " << nombre << " Guardando datos y cerrando sesion" <<endl;
        }
};

class Bombilla: public IConectable{
    private:
        string ubicacion;
    public:
        Bombilla(string n) : ubicacion(n) {}

        void encender() override {
            cout << "La bombilla de: " << ubicacion << " se ilumina intensamente" <<endl;
        }

        void apagar() override {
            cout << "La bombilla de: " << ubicacion << " se apaga." <<endl;
        }
};

void interruptorMaestro(IConectable* despositivo){
    cout << "---- Encendiendo: " << endl;
    despositivo->encender();
    cout << "---- Apagando: " << endl;
    despositivo->apagar();
}

int main(){
    Bombilla miLampara("Sala");
    Computador miPC("Dell Alienware");

    interruptorMaestro(&miLampara);
    cout << endl;
    interruptorMaestro(&miPC);
    return 0;
}