/*
Puedes crear un arreglo de estructuras para representar un conjunto de objetos similares.
*/

#include <stdio.h>
#include <stdlib.h>
struct Fecha {
    int dia;
    int mes;
    int anio;
};

struct estudiante {
    char nombre[50];
    int edad;
    struct Fecha fechaNacimiento;
};

int main() {
    struct estudiante alumno;

    printf("Ingrese el nombre del estudiante: \n");
    fgets(alumno.nombre, sizeof(alumno.nombre), stdin);
    printf("Ingrese la edad del estudiante: \n");
    scanf("%d", &alumno.edad);
    printf("Ingrese la fecha de nacimiento del estudiante (dd mm aaaa): \n");
    printf("Dia: ");
    scanf("%d", &alumno.fechaNacimiento.dia);
    printf("Mes: ");
    scanf("%d", &alumno.fechaNacimiento.mes);
    printf("Año: ");
    scanf("%d", &alumno.fechaNacimiento.anio);

    printf("\nDatos del estudiante:\n");
    printf("Nombre: %s \n", alumno.nombre);
    printf("Edad: %d\n", alumno.edad);
    printf("Fecha de nacimiento: %d/%d/%d\n", alumno.fechaNacimiento.dia, alumno.fechaNacimiento.mes, alumno.fechaNacimiento.anio);

    return 0;
}