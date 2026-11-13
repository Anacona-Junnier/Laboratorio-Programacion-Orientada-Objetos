#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i, j, aux;

    printf("Por favor ingrese el TAMAÑO del VECTOR: \n");
    scanf("%d", &n);

    int arreglo[n];

    for ( i = 0; i < n; i++)
    {
        printf("Por favor ingrese UN ELEMENTO para la POSICION %d \n", i);
        scanf("%d", &arreglo[i]);
    }

    for ( i = 0; i < n-1; i++)
    {
        for ( j = 0; j < n-i-1; j++)
        {
            if(arreglo[j+1]< arreglo[j]){
                aux = arreglo[j+1];
                arreglo[j+1] = arreglo[j];
                arreglo[j] = aux;
            }
        }
    }
    
    for ( i = 0; i < n; i++)
    {
        printf("El vector organizado es: %d\t", arreglo[i]);
    }
    
    return 0;
    
}