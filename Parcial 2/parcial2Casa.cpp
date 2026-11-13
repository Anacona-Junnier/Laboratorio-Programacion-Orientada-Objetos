/*
JUAN CAMILO QUIGUANAS
JUNNIER HERNEY ANACONA 
*/

#include <vector>
#include <iostream>
using namespace std;

class Persona
{
protected:
    string nombre;
    string apellido;
    string correo;

public:
    Persona(string _nombre, string _apellido, string _correo)
    {
        nombre = _nombre;
        apellido = _apellido;
        correo = _correo;
    }

    virtual ~Persona()
    {
        cout << "Destructor de Persona ejecutado" << endl;
    }

    virtual bool validarCredenciales(string _nombreUsuario, string _contrasenia)
    {
        return false;
    }

    virtual void mostrarInformacion()
    {
        cout << "Nombre: " << nombre << endl;
        cout << "Apellido: " << apellido << endl;
        cout << "Correo: " << correo << endl;
    }
};

class Usuario : public Persona
{
private:
    string nombreUsuario;
    string contrasenia;

public:
    Usuario(string _nombreUsuario, string _contrasenia, string _nombre, string _apellido, string _correo)
        : Persona(_nombre, _apellido, _correo)
    {
        nombreUsuario = _nombreUsuario;
        contrasenia = _contrasenia;
    }

    ~Usuario()
    {
        cout << "Destructor de Usuario ejecutado" << endl;
    }

    bool validarCredenciales(string _nombreUsuario, string _contrasenia) override
    {
        return nombreUsuario == _nombreUsuario && contrasenia == _contrasenia;
    }

    void mostrarInformacion() override
    {
        Persona::mostrarInformacion();
        cout << "Nombre de usuario: " << nombreUsuario << endl;
    }
};

class Vuelo
{
private:
    string origen;
    string destino;
    string fecha;
    string horario;
    int precio;

public:
    void seleccionarRuta();
    void seleccionarFechaYHorario();
};

int menuPrincipal()
{
    int opcion;
    cout << "Bienvenido al sistema de reservas de AeroNación S.A." << endl;
    cout << "1. Registro de usuario" << endl;
    cout << "2. Inicio de sesión" << endl;
    cout << "3. Seleccionar ruta de vuelo" << endl;
    cout << "4. Salir" << endl;
    cout << "Seleccione una opción: ";
    cin >> opcion;
    return opcion;
}

void registrarUsuario(vector<Persona *> &usuarios)
{
    string nombreUsuario, contrasenia, nombre, apellido, correo;
    cout << "Ingrese nombre de usuario: ";
    cin >> nombreUsuario;
    cout << "Ingrese contraseña: ";
    cin >> contrasenia;
    cout << "Ingrese nombre: ";
    cin >> nombre;
    cout << "Ingrese apellido: ";
    cin >> apellido;
    cout << "Ingrese correo electrónico: ";
    cin >> correo;

    usuarios.push_back(new Usuario(nombreUsuario, contrasenia, nombre, apellido, correo));
    cout << "Usuario registrado exitosamente." << endl;
}

bool iniciarSesion(vector<Persona *> &usuarios)
{
    string nombreUsuario, contrasenia;
    cout << "Ingrese nombre de usuario: ";
    cin >> nombreUsuario;
    cout << "Ingrese contraseña: ";
    cin >> contrasenia;

    for (Persona *usuario : usuarios)
    {
        if (usuario->validarCredenciales(nombreUsuario, contrasenia))
        {
            cout << "Inicio de sesión exitoso." << endl;
            return true;
        }
    }
    cout << "Credenciales incorrectas. Inténtelo nuevamente." << endl;
    return false;
}

void Vuelo::seleccionarRuta()
{
    string ciudades[] = {
        "Bogotá",
        "Cali",
        "Medellín",
        "Cartagena",
        "Popayán"};

    int cantidadCiudades = 5;
    int indiceOrigen, indiceDestino;

    cout << "\nCiudades disponibles:\n";

    for (int i = 0; i < cantidadCiudades; i++)
    {
        cout << i << ". " << ciudades[i] << endl;
    }

    do
    {
        cout << "Seleccione la ciudad de origen: ";
        cin >> indiceOrigen;

        if (indiceOrigen < 0 || indiceOrigen >= cantidadCiudades)
        {
            cout << "Índice inválido. Intente nuevamente.\n";
        }

    } while (indiceOrigen < 0 || indiceOrigen >= cantidadCiudades);

    origen = ciudades[indiceOrigen];

    do
    {
        cout << "Seleccione la ciudad de destino: ";
        cin >> indiceDestino;

        if (indiceDestino < 0 || indiceDestino >= cantidadCiudades)
        {
            cout << "Índice inválido. Intente nuevamente.\n";
        }
        else if (indiceOrigen == indiceDestino)
        {
            cout << "El destino no puede ser igual al origen. Intente nuevamente.\n";
        }

    } while (indiceDestino < 0 || indiceDestino >= cantidadCiudades || indiceOrigen == indiceDestino);

    destino = ciudades[indiceDestino];

    cout << "\nRuta seleccionada: "
         << origen << " -> " << destino << endl;
}


void Vuelo::seleccionarFechaYHorario()
{
    int opcionHorario;

    cout << "\nIngrese la fecha del vuelo (DD/MM/AAAA): ";
    cin >> fecha;

    cout << "\nHorarios disponibles:\n";
    cout << "1. 06:00 AM - $320000\n";
    cout << "2. 01:00 PM - $350000\n";
    cout << "3. 08:00 PM - $300000\n";

    do
    {
        cout << "Seleccione un horario (1-3): ";
        cin >> opcionHorario;

        if (opcionHorario < 1 || opcionHorario > 3)
        {
            cout << "Opcion invalida. Intente nuevamente.\n";
        }

    } while (opcionHorario < 1 || opcionHorario > 3);

    switch (opcionHorario)
    {
    case 1:
        horario = "06:00 AM";
        precio = 320000;
        break;

    case 2:
        horario = "01:00 PM";
        precio = 350000;
        break;

    case 3:
        horario = "08:00 PM";
        precio = 300000;
        break;
    }

    cout << "\nFecha seleccionada: " << fecha << endl;
    cout << "Horario seleccionado: " << horario << endl;
    cout << "Precio del tiquete: $" << precio << endl;
}


int main()
{

    vector<Persona *> usuarios;
    usuarios.push_back(new Usuario("admin", "admin123", "Juan", "Pérez", "juan@gmail.com"));
    Vuelo vuelo;
    int opcion = 0;
    do
    {
        opcion = menuPrincipal();

        switch (opcion)
        {
        case 1:
            registrarUsuario(usuarios);
            break;
        case 2:
            iniciarSesion(usuarios);
            break;
        case 3:
            vuelo.seleccionarRuta();
            vuelo.seleccionarFechaYHorario();
            break;
        case 4:
            cout << "Fin del programa." << endl;
            break;

        default:
            cout << "Opción inválida. Fin del programa." << endl;
            break;
        }
    } while (opcion != 4);

    // Liberar los objetos apuntados por el vector
    for (Persona *usuario : usuarios)
    {
        delete usuario;
    }
    // Elimina los punteros del vector, pero no libera la memoria de los objetos a los que apuntan
    usuarios.clear();
    return 0;
}