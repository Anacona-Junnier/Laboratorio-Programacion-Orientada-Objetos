/*Crear una estructura y acceder a sus campos usando punteros*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

int main(){
    //agrego los datos del estudiante en la estructura

    struct estudiante alumno;
    
    printf("Ingrese el nombre del estudiante: \n");
    scanf("%s", alumno.nombre);
    printf("Ingrese la edad del estudiante: \n");
    scanf("%d", &alumno.edad);
    printf("Ingrese el promedio del estudiante: \n");
    scanf("%f", &alumno.promedio);

    //defino otra variable de tipo estructura llamada puntero y la enlazo con la variable alumno
    struct estudiante *puntero = &alumno;

    printf("El nombre es: %s \n", puntero->nombre);
    printf("La edad es: %d \n", puntero->edad);
    printf("El promedio es: %.2f \n", puntero->promedio);

    //modifico los datos de la estructura usando el puntero

    puntero->edad = 21;
    strcpy(puntero->nombre, "Laura");
    puntero->promedio = 4.5;

    //datos actualizados

    printf("El nombre actualizado es: %s \n", puntero->nombre);
    printf("La edad actualizada es: %d \n", puntero->edad);
    printf("El promedio actualizado es: %.2f \n", puntero->promedio);
    return 0;
    
}