/*Crear un array y visualizar los datos del arreglo usando la aritmética de punteros*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    int i;
    int vector[5];

    for(i=0;i<5;i++){
        printf("Ingrese el valor del elemento %d: \n",i);
        scanf("%d",&vector[i]);
    }

    int *ptr = &vector[0];

    printf("La direccion es: %p y el valor al que apunta es: %d\n",ptr,*ptr);
    printf("La direccion +1 es: %p y el valor al que apunta es: %d\n",ptr+1,*(ptr+1));
    printf("La direccion +2 es: %p y el valor al que apunta es: %d\n",ptr+2,*(ptr+2));
    printf("La direccion +3 es: %p y el valor al que apunta es: %d\n",ptr+3,*(ptr+3));
    printf("La direccion +4 es: %p y el valor al que apunta es: %d\n",ptr+4,*(ptr+4));

}