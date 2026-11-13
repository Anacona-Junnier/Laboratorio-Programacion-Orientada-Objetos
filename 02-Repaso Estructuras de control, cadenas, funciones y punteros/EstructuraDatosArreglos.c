/*
Crear un arreglo de estructuras para representar un conjuto de objetos similares.
*/

#include <stdio.h>
#include <string.h>

struct estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

int i;

int main() {

    struct estudiante grupo[3];
    
    for (i = 0; i < 3; i++) {
        printf("**************Estudiante %d**************\n", i + 1);
        printf("Ingrese el nombre del estudiante %d: \n", i + 1);
        scanf("%s", grupo[i].nombre);
        printf("Ingrese la edad del estudiante %d: \n", i + 1);
        scanf("%d", &grupo[i].edad);
        printf("Ingrese el promedio del estudiante %d: \n", i + 1);
        scanf("%f", &grupo[i].promedio);
    }

    //mostrar los datos
    for (i = 0; i < 3; i++) {
        printf("**************Estudiante %d**************\n", i + 1);
        printf("Nombre: %s\n", grupo[i].nombre);
        printf("Edad: %d\n", grupo[i].edad);
        printf("Promedio: %.2f\n", grupo[i].promedio);
    }
}