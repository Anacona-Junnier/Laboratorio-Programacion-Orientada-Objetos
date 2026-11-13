#include <iostream>
using namespace std;

class Empleado {
    private:
        int id_empleado;
    public:
        Empleado(int id) : id_empleado(id) {}

        ~Empleado() {
            cout << "Destructor de Empleado: Liberando recursos del empleado con ID " << id_empleado << endl;
        }

        void reporte_actividad() {
            cout << "Reporte de Empleado: Procesando tareas administrativas." << endl;
        }
};

class Estudiante {
    private:
        int id_estudiante;
    public:
        Estudiante(int id) : id_estudiante(id) {}

        ~Estudiante() {
            cout << "Destructor de Estudiante: Liberando recursos del estudiante con ID " << id_estudiante << endl;
        }

        void reporte_actividad() {
            cout << "Reporte de Estudiante: Cursando materias de segundo semestre." << endl;
        }
};

//Codigo con ERROR DE COMPILACIÓN POR AMBIGÜEDAD
// class AsistenteBiblioteca : public Empleado, public Estudiante {
//     public:
//         AsistenteBiblioteca(int idEmpleado, int idEstudiante)
//             : Empleado(idEmpleado), Estudiante(idEstudiante) {}
// };

// int main() {
//     AsistenteBiblioteca asistente(1, 2);
//     asistente.reporte_actividad();

//     return 0;
// }

//Codigo CORRECTO
class AsistenteBiblioteca : public Empleado, public Estudiante {
    public:
        AsistenteBiblioteca(int idEmpleado, int idEstudiante)
            : Empleado(idEmpleado), Estudiante(idEstudiante) {}

        void reporte_actividad(){
            cout<<"Actividad Unificada del Asistente: "<<endl;
            Empleado::reporte_actividad();
            Estudiante::reporte_actividad();
        }
};

int main(){
    AsistenteBiblioteca asistente(1,2);
    asistente.reporte_actividad();

    return 0;
}