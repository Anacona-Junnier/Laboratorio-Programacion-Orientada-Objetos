/*Crear un puntero y visualizar su valor y la direccion dende será guardado.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int x = 10;
    int *puntero = &x;

    printf("El valor de x es: %d \n", x); //10
    printf("La direccion donde se guardo el valor de x es: %p \n", &x);//00000000005FFE74
    printf("La direccion del puntero es: %p \n", puntero); //00000000005FFE74
    printf("El valor al que apunta el puntero es: %d \n", *puntero); //10

    *puntero = 20;

    printf("El valor del nuevo numero es: %d \n", x); //20
    return 0;

}