#include <iostream>
#include <string>
using namespace std;

class SerVivo{
    public:
        virtual void alimentarse() = 0; // Método virtual puro
        virtual ~SerVivo(){} // Destructor virtual
};

class IVolador{
    public:
        virtual void volar() = 0;
        virtual ~IVolador(){} 
};

class Aguila : public SerVivo, public IVolador{
    public:
        void alimentarse() override{
            cout << "El águila esta comiendo. Grushhh Grushhh Jammm Jaaammmm" << endl;
        }

        void volar() override{
            cout << "El águila está volando moviendo sus alas de arriba a abajo" << endl;
        }
};

class Superman : public SerVivo, public IVolador{
    public:
        void alimentarse() override{
            cout << "Superman esta comiendo. Coommmm Coommmm, Gluuu Gluuu" << endl;
        }

        void volar() override{
            cout << "Superman está volando moviendo su capa" << endl;
        }
};

class Perro : public SerVivo{
    public:
        void alimentarse() override{
            cout << "El perro esta comiendo. Wou Wou Wou" << endl;
        }
};

void carreraDeVuelo(IVolador* v){
    v->volar();
}

int main(){

    Perro perro;
    Superman superman;

    // carreraDeVuelo(&perro); // Esto generará un error de compilación, ya que Perro no implementa IVolador
    carreraDeVuelo(&superman);

}