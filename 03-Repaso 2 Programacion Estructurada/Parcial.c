/*El Colegio Nacional “Formadores del Futuro”, ubicado en la ciudad de Popayán, ha identificado diversas dificultades en sus procesos académicos internos, como el registro de usuarios, la asignación de calificaciones, y la atención a solicitudes estudiantiles. Estas tareas, ejecutadas de manera manual hasta la fecha, han generado errores frecuentes, demoras operativas y limitaciones en la trazabilidad de la información.
Con el objetivo de optimizar la eficiencia administrativa y académica, la institución ha decidido iniciar la implementación de un sistema automatizado de gestión académica. Para ello, ha contratado a la empresa tecnológica LII-UNICAUCA, especializada en el desarrollo de soluciones informáticas para el sector educativo.
Se solicita, como parte del proceso de diseño del prototipo, la construcción de una aplicación básica en lenguaje C, que funcione desde consola, y que permita gestionar el acceso de tres tipos de usuarios: administrativo, docente y estudiante. El sistema debe estar estructurado en módulos funcionales separados mediante el uso de funciones, y debe utilizar estructuras de datos (struct) para representar a los usuarios y estudiantes.
Requerimientos del Sistema [5.0 puntos]
1. Menú Principal y Navegación General [0.5 puntos]
Mostrar opciones para:
Registrar nuevos usuarios.
Iniciar sesión con autenticación.
Salir del sistema.
Permitir el retorno al menú principal después de cada acción.
Debe implementarse mediante funciones específicas que gestionen el menú y el control del flujo.
2. Registro de Usuarios y Autenticación [1.5 puntos]
Permitir el registro de un único usuario por cada tipo: administrativo, docente y estudiante.
Cada usuario debe contar con los siguientes datos: nombre completo, nombre de usuario, contraseña y rol. Esta información debe organizarse mediante una estructura struct.
El inicio de sesión debe validar credenciales mediante comparación de cadenas.
Toda esta funcionalidad debe estar encapsulada en funciones independientes y utilizar vectores de estructuras.
3. Funcionalidades por Tipo de Usuario [3.0 puntos]
Tras la autenticación exitosa, el sistema debe redirigir al menú correspondiente según el tipo de usuario. Cada tipo de usuario contará con dos funciones exclusivas, las cuales deben estar implementadas en funciones separadas:
Usuario Administrativo (1.0 punto)
Función 1: Registrar estudiantes junto con sus calificaciones.
Función 2: Visualizar el listado completo de estudiantes.
Usuario Docente (1.0 punto)
Función 1: Modificar la calificación de un estudiante.
Función 2: Listar estudiantes aprobados.
Usuario Estudiante (1.0 punto)
Función 1: Consultar sus propias calificaciones.
Función 2: Registrar una solicitud de revisión de nota.
Cada conjunto de funcionalidades debe estar debidamente modularizado y contener estructuras lógicas claras para la ejecución diferenciada por tipo de usuario.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Usuario
{
    char nombre[50];
    char nombreUsuario[50];
    char contrasena[50];
    char rol[20];
};

struct Estudiante
{
    struct Usuario usuario;
    float calificacion;
};

struct Usuario crear_usuario(const char *rol)
{
    struct Usuario nuevoUsuario;
    printf("Ingrese nombre completo: \n");
    fgets(nuevoUsuario.nombre, sizeof(nuevoUsuario.nombre), stdin);
    printf("Ingrese nombre de usuario: \n");
    fgets(nuevoUsuario.nombreUsuario, sizeof(nuevoUsuario.nombreUsuario), stdin);
    printf("Ingrese contrasena: \n");
    fgets(nuevoUsuario.contrasena, sizeof(nuevoUsuario.contrasena), stdin);
    strcpy(nuevoUsuario.rol, rol);
    return nuevoUsuario;
}

struct Estudiante crear_estudiante()
{
    struct Estudiante nuevoEstudiante;
    struct Usuario nuevoUsuario = crear_usuario("Estudiante");
    nuevoEstudiante.usuario = nuevoUsuario;
    printf("Ingrese calificacion del estudiante: \n");
    scanf("%f", &nuevoEstudiante.calificacion);
    while (getchar() != '\n')
        ;
    return nuevoEstudiante;
}

void listar_estudiantes_calificacion(struct Estudiante *punteroEstudiantesConCalificacion)
{
    for (int i = 0; i < 5; i++)
    {
        struct Estudiante *estudiante = punteroEstudiantesConCalificacion + i;

        if (estudiante->usuario.nombre[0] != '\0')
        {
            printf("Estudiante: %s", estudiante->usuario.nombre);
            printf("Usuario: %s", estudiante->usuario.nombreUsuario);
            printf("Calificacion: %.2f\n", estudiante->calificacion);
        }
    }
}

void menu_administrativo(struct Estudiante *punteroEstudiantesConCalificacion)
{
    int opcion;
    printf("***********Menu Administrativo***********\n");
    printf("1. Registrar estudiantes junto con sus calificaciones.\n");
    printf("2. Listar estudiantes.\n");
    printf("Seleccione una opcion: ");
    scanf("%d", &opcion);
    while (getchar() != '\n')
        ;
    switch (opcion)
    {
    case 1:
        struct Estudiante nuevoEstudiante = crear_estudiante();
        int posicionLibre = -1;
        for (int i = 0; i < 5; i++)
        {
            if (punteroEstudiantesConCalificacion[i].usuario.nombre[0] == '\0')
            {
                posicionLibre = i;
                break;
            }
        }

        if (posicionLibre != -1)
        {
            punteroEstudiantesConCalificacion[posicionLibre] = nuevoEstudiante;
        }
        else
        {
            printf("No hay posiciones libres para %s.\n", nuevoEstudiante.usuario.rol);
        }
        break;
    case 2:
        listar_estudiantes_calificacion(punteroEstudiantesConCalificacion);
        break;
    default:
        printf("Opción no válida.\n");
        break;
    }
}

int validar_existencia_usuario(struct Usuario *punteroUsuarios, const char *nombreUsuario)
{
    for (int i = 0; i < 5; i++)
    {
        if (strcmp(punteroUsuarios[i].nombreUsuario, nombreUsuario) == 0)
        {
            return 1; // Usuario ya existe
        }
    }
    return 0; // Usuario no existe
}

void agregar_usuario(struct Usuario *punteroUsuarios, struct Usuario nuevoUsuario)
{
    int posicionLibre = -1;
    for (int i = 0; i < 5; i++)
    {
        if (punteroUsuarios[i].nombre[0] == '\0')
        {
            posicionLibre = i;
            break;
        }
    }

    if (posicionLibre != -1)
    {
        punteroUsuarios[posicionLibre] = nuevoUsuario;
    }
    else
    {
        printf("No hay posiciones libres para %s.\n", nuevoUsuario.rol);
    }
}

void registrar_usuario(struct Usuario *punteroEstudiantes, struct Usuario *punteroDocentes, struct Usuario *punteroAdministrativos)
{
    int opcion;
    printf("***********Menu Registrar usuario***********\n");
    printf("1. Registrar estudiante: \n");
    printf("2. Registrar docente: \n");
    printf("3. Registrar administrativo: \n");
    printf("Seleccione una opcion: ");
    scanf("%d", &opcion);
    while (getchar() != '\n')
        ;

    int posicionLibre = -1;
    struct Usuario nuevoUsuario = {0};

    switch (opcion)
    {
    case 1:
        nuevoUsuario = crear_usuario("Estudiante");
        if ((validar_existencia_usuario(punteroEstudiantes, nuevoUsuario.nombreUsuario)) == 0)
        {
            agregar_usuario(punteroEstudiantes, nuevoUsuario);
        }
        else
        {
            printf("El usuario ya existe. No se puede registrar nuevamente.\n");
        }
        break;
    case 2:

        nuevoUsuario = crear_usuario("Docente");
        if ((validar_existencia_usuario(punteroDocentes, nuevoUsuario.nombreUsuario)) == 0)
        {
            agregar_usuario(punteroDocentes, nuevoUsuario);
        }
        else
        {
            printf("El usuario ya existe. No se puede registrar nuevamente.\n");
        }
        break;
    case 3:
    {

        nuevoUsuario = crear_usuario("Administrativo");
        if ((validar_existencia_usuario(punteroAdministrativos, nuevoUsuario.nombreUsuario)) == 0)
        {
            agregar_usuario(punteroAdministrativos, nuevoUsuario);
        }
        else
        {
            printf("El usuario ya existe. No se puede registrar nuevamente.\n");
        }
        break;
    }
    default:
        printf("ERROR MENU REGISTRAR USUARIO\n");
        break;
    }
}

int validar_credenciales(struct Usuario *punteroUsuarios, const char *nombreUsuario, const char *contrasena)
{
    for (int i = 0; i < 5; i++)
    {
        if (strcmp(punteroUsuarios[i].nombreUsuario, nombreUsuario) == 0 &&
            strcmp(punteroUsuarios[i].contrasena, contrasena) == 0)
        {
            return 1; // Credenciales válidas
        }
    }
    return 0; // Credenciales inválidas
}

void iniciar_sesion(struct Usuario *punteroEstudiantes, struct Usuario *punteroDocentes, struct Usuario *punteroAdministrativos, struct Estudiante *punteroEstudiantesConCalificacion)
{
    char nombreUsuario[50];
    char contrasena[50];
    printf("Ingrese nombre de usuario: ");
    fgets(nombreUsuario, sizeof(nombreUsuario), stdin);
    printf("Ingrese contrasena: ");
    fgets(contrasena, sizeof(contrasena), stdin);

    // Validar credenciales para cada tipo de usuario
    if (validar_credenciales(punteroEstudiantes, nombreUsuario, contrasena))
    {
        //
    }
    else if (validar_credenciales(punteroDocentes, nombreUsuario, contrasena))
    {
        printf("Inicio de sesion exitoso como Docente.\n");
        // Llamar a funciones exclusivas del docente
    }
    else if (validar_credenciales(punteroAdministrativos, nombreUsuario, contrasena))
    {
        printf("Inicio de sesion exitoso como Administrativo.\n");
        menu_administrativo(punteroEstudiantesConCalificacion);
    }
    else
    {
        printf("Credenciales invalidas.\n");
    }
}

int menu_principal(struct Usuario *punteroEstudiantes, struct Usuario *punteroDocentes, struct Usuario *punteroAdministrativos, struct Estudiante *punteroEstudiantesConCalificacion)
{
    int opcion;
    do
    {
        printf("***********Menu Principal***********\n");
        printf("1. Registrar\n");
        printf("2. Iniciar sesion\n");
        printf("3. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);
        while (getchar() != '\n')
            ;
        if (opcion < 1 || opcion > 3)
        {
            printf("Opcion invalida. Intente de nuevo.\n");
        }

    } while (opcion < 1 || opcion > 3);

    switch (opcion)
    {
    case 1:
        registrar_usuario(punteroEstudiantes, punteroDocentes, punteroAdministrativos);
        break;
    case 2:
        iniciar_sesion(punteroEstudiantes, punteroDocentes, punteroAdministrativos, punteroEstudiantesConCalificacion);
        break;
    case 3:
        printf("Saliendo del sistema...\n");
        break;

    default:
        printf("ERROR MENU PRINCIPAL\n");
        break;
    }

    return opcion;
}

int main()
{
    // Declaración de arreglos de estructuras para cada tipo de usuario
    struct Usuario estudiantes[5] = {0};
    struct Usuario docentes[5] = {0};
    struct Usuario administrativos[5] = {0};
    struct Estudiante estudiantesConCalificacion[5] = {0};

    // Punteros a las estructuras de usuarios
    struct Usuario *punteroEstudiantes = estudiantes;
    struct Usuario *punteroDocentes = docentes;
    struct Usuario *punteroAdministrativos = administrativos;
    struct Estudiante *punteroEstudiantesConCalificacion = estudiantesConCalificacion;

    int bandera = 0;
    do
    {
        bandera = menu_principal(punteroEstudiantes, punteroDocentes, punteroAdministrativos, punteroEstudiantesConCalificacion);
    } while (bandera != 3);

    printf("**************Saliendo del sistema...**************\n");

    return 0;
}