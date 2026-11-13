#include <iostream>
#include <string>
using namespace std;

class IControlable{
    public:
        virtual void encender() = 0;
        virtual void apagar() = 0;
        virtual void setIntensidad(int nivel)=0;

        virtual ~IControlable(){} 
};

class LamparaInteligente : public IControlable{
    public:
        void encender() override{
            cout << "La lámpara inteligente está encendida." << endl;
        }

        void apagar() override{
            cout << "La lámpara inteligente está apagada." << endl;
        }

        void setIntensidad(int nivel) override{
            cout << "Brillo al: " << nivel << " %" << endl;
        }
};

class ParlanteBluetooth : public IControlable{
    public:
        void encender() override{
            cout << "El parlante Bluetooth está encendido." << endl;
        }

        void apagar() override{
            cout << "El parlante Bluetooth está apagado." << endl;
        }

        void setIntensidad(int nivel) override{
            cout << "Volumen al: " << nivel << " %" << endl;
        }
};

int main(){
    LamparaInteligente lampara;
    ParlanteBluetooth parlante;

    IControlable* dispositivo;

    dispositivo = &lampara;
    dispositivo->apagar();

    dispositivo = &parlante;
    dispositivo->apagar();

    return 0;

}