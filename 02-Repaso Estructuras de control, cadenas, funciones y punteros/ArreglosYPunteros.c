/*Solo el nombre del arreglo representa la dirección del primer elemento */

#include <stdio.h>

int main(){
    int arreglo[] = {10, 20, 30, 40};
    int *puntero = arreglo; // El puntero apunta al primer elemento del arreglo

    for (int i = 0; i < 4; i++) {
        printf("arreglo[%d] = %d\n", i, arreglo[i]); // Accediendo a los elementos usando el arreglo
        printf("*(puntero + %d) = %d\n", i, *(puntero + i)); // Accediendo a los elementos usando el puntero
    }
    return 0;
}