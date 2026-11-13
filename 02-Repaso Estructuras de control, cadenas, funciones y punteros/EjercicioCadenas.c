/*
Escribir un programa que imprima carácter por carácter un vector 
de caracteres.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    char nombre[50];
    int i;

    printf("Introduzca un nombre no mayor a 49 caracteres: \n");
    fgets(nombre, sizeof(nombre), stdin);

    for (i = 0; nombre[i] != '\0'; i++)
    {
        printf("nombre[%d] = %c\n", i,nombre[i]);
    }
    
    return 0;
}