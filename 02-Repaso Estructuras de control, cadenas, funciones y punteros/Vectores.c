#include <stdio.h>
#include <stdlib.h>

int main(){

    float temperatura[5], suma = 0, maximo, minimo, media;
    int i;

    for(i=0; i<5; i++){
        printf("Ingrese el valor de la temperatura: \n");
        scanf("%f", &temperatura[i]);
    }

    maximo = temperatura[0];
    minimo = temperatura[0];

    for ( i = 0; i < 5 ; i++)
    {
        suma = suma + temperatura[i];

        if(maximo < temperatura[i]){
            maximo = temperatura[i];
        }
        if(minimo > temperatura[i]){
            minimo = temperatura[i];
        }
    }

    media = suma / 5;

    printf("El valor promedio es: %.2f\n", media);
    printf("El valor maximo fue: %.2f\n", maximo);
    printf("El valor minimo fue: %.2f\n", minimo);
    
    return 0;
    
}