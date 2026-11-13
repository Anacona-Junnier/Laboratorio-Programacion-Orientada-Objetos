/*
Programa que crea una estructura estudiante y accede por medio de una varibale
alumno alos datos de la estructura.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct estudiante
    {
        char nombre[20];
        int edad;
        char sexo[50];
        float promedio;
    };

    struct estudiante alumno;

    printf("Ingrese el nombre del alumno: ");
    scanf("%s", &alumno.nombre);

    printf("Ingrese la edad del alumno: ");
    scanf("%d", &alumno.edad);
    
    printf("Ingrese el sexo del alumno: ");
    scanf("%s", &alumno.sexo);

    printf("Ingrese el promedio del alumno: ");
    scanf("%f", &alumno.promedio);

    printf("\nDatos del alumno:\n");
    printf("Nombre: %s\n", alumno.nombre);
    printf("Edad: %d\n", alumno.edad);
    printf("Sexo: %s\n", alumno.sexo);
    printf("Promedio: %.2f\n", alumno.promedio);

    return 0;
}