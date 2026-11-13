#include <iostream>
#include <string>
using namespace std;

//Clase abstracta
class Instrumento {
    protected:
        string nombre;
    public:
        Instrumento(string n) : nombre(n) {}

        //Al poner "=0" convertimos esta funcion en virtual pura
        //Esto hace que la clase Instrumento sea abstracta automaticamente
        //Ya no tiene implementacion aqui (no tiene {})
        virtual void tocar() = 0;

        //Destructor virtual (Obligatorio)
        virtual ~Instrumento(){}

        //Podemos seguir teniendo metodos normales
        void limpiar() {
            cout << "Limpiando el instrumento: " << nombre << endl;
        }
};

//Clase Derivada 1
class Guitarra : public Instrumento {
    public:
        Guitarra() : Instrumento("Guitarra") {}

        //OBLIGATORIO: Debemos implementar tocar(), sino Guitarra será abstracta tambien
        void tocar() override {
            cout << "Tocando la guitarra: RAAANGGG CLANKKK " << nombre << endl;
        }
};

//Clase Derivada 2
class Bateria: public Instrumento {
    public:
        Bateria() : Instrumento("Bateria") {}

        //OBLIGATORIO: Debemos implementar tocar(), sino Bateria será abstracta tambien
        void tocar() override {
            cout << "Tocando la bateria: BUM BUM BUM " << nombre << endl;
        }
};

//Función Polimórfica
//Nota: Recibe un puntereo a Instrumento.
//Aunque Instrumento sea abstracta, podemos usar punteros de su tipo para apuntar a objetos de clases derivadas.
void concierto(Instrumento* instrumento) {
    cout << "---- Turno de: " << endl;
    //Polimorfismo en acción
    instrumento->tocar();
    instrumento->limpiar(); //Método heredado normal
}

int main(){
    //1. Instanciar objetos concretos (VÁLIDO)
    Guitarra miGuitarra;
    Bateria miBateria;

    //2. Intentar instanciar la clase obstracta (AHORA ES ERROR), ya que Instrumento es abstracta
    //Instrumento miGenerico("Cosa Rara") ERROR DE COMPILACION

    //3. Usar polimorfismo (VÁLIDO)
    concierto(&miGuitarra);
    concierto(&miBateria);

    return 0;
}