/*
Llenar una matriz 4x4 y determinar el número mayor y menor de la matriz.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int matriz[4][4];
    int i, j;
    int mayor, menor;

    printf("Ingrese los elementos de la matriz 4x4:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Por favor ingrese los Elemento de la matriz en [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Inicializar mayor y menor con el primer elemento de la matriz
    mayor = menor = matriz[0][0];

    // Determinar el número mayor y menor de la matriz
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d \t", matriz[i][j]);
            if (matriz[i][j] > mayor) {
                mayor = matriz[i][j];
            }
            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
            }
        }
        printf("\n");
    }

    // Mostrar los resultados
    printf("El número mayor de la matriz es: %d\n", mayor);
    printf("El número menor de la matriz es: %d\n", menor);

    return 0;
}