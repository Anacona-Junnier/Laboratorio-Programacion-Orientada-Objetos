#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, menor, auxiliar, j;
    printf("Ingrese el TAMAÑO del VECTOR: \n");
    scanf("%d", &n);

    int vector[n], i;

    for ( i = 0; i < n; i++)
    {
        printf("Ingrese el ELEMENTOS para la POSICION %d: \n", i);
        scanf("%d", &vector[i]);
    }
    //10,5,20
    for (i = 0; i < n; i++)
    {
        menor = i; //5,10,20
        for ( j=i+1; j < n; j++)
        {
            if(vector[j]<vector[menor]){
                menor = j;//5
            }
        }

        auxiliar = vector[i];
        vector[i] = vector[menor];
        vector[menor] = auxiliar;
        
    }

    for (i = 0; i < n; i++)
    {
        printf("El vector ordenado es: %d \t", vector[i]);
    }
    
    return 0;
    
}