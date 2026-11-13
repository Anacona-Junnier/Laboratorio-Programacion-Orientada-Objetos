/*
Llenar una matriz 3x5 y determinar cuántos números son negativos y positivos.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int matriz[2][5];
    int i, j, positivos = 0, negativos = 0;

    // Llenar la matriz con valores ingresados por el usuario
    printf("Ingrese los elementos de la matriz 2x5:\n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 5; j++){
            printf("Ingrese los elementos de la matriz en la fila %d y en la columna %d: \n", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Contar números positivos y negativos
    for(i = 0; i < 2; i++){
        for(j = 0; j < 5; j++){
            if(matriz[i][j] > 0){
                positivos++;
            } else if(matriz[i][j] < 0){
                negativos++;
            }
        }
    }

    // Mostrar resultados
    printf("Cantidad de números positivos: %d\n", positivos);
    printf("Cantidad de números negativos: %d\n", negativos);

    return 0;
}