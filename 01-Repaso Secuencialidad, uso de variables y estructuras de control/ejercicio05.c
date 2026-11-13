/*Escribir un programa en C que solicite  al usuario 5 números enteros, los almacene  en un 
arreglo  y  realice  diversas  operaciones  sobre  ellos.  Primero,  calcular  el  promedio  de  los 
números ingresados y mostrarlo en pantalla. Luego, determinar y mostrar el número mayor 
y  el  número  menor  dentro  del  arreglo.  A  continuación,  ordenar  los  números  en  orden 
ascendente  utilizando  un  algoritmo  de  ordenamiento  y  mostrar  el  arreglo  ordenado. 
Finalmente, explicar cómo funcionan los arreglos en C,  y cómo se almacenan los datos en 
memoria*/

#include <stdio.h>

int main(){

    int enterosUsuario[5], valor, acumulador=0, promedio=0, valorMayor=0, valorMenor=0;

    //Ingresar valores al arreglo
    for (int i = 0; i < 5; i++)
    {
        printf("Digite un valor entero: \n");
        scanf("%d", &valor);
        enterosUsuario[i] = valor;
    }
    
    //Calcular promedio de los valores del arreglo
    for (int i = 0; i < 5; i++)
    {
        acumulador = acumulador + enterosUsuario[i];
    }
    promedio=acumulador/5;
    printf("El promedio del arreglo es: %d \n", promedio);

    //Calcular numero Mayor del arreglo
    for (int i = 0; i < 5; i++)
    {
        if(enterosUsuario[i]>valorMayor){
            valorMayor = enterosUsuario[i];
        }
    }
    printf("Valor Mayor dentro del arreglo es: %d \n", valorMayor);

    //Calcular numero Menor del arreglo
    valorMenor = enterosUsuario[0];
    for (int i = 0; i < 5; i++)
    {
        if (enterosUsuario[i]<valorMenor)
        {
            valorMenor=enterosUsuario[i];
        }
        
    }
    printf("Valor Menor dentro del arreglo es: %d \n", valorMenor);

    //Organizar el contenido del Arreglo usando el metodo Burbuja Sort
    //Imprimimos el estado del actual arreglo
    for (int i = 0; i < 5; i++)
    {
        printf("%d \t", enterosUsuario[i]);
    }
    printf("\n");

    //Metodo Burjuta Sort
    int auxiliar;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4-i; j++)
        {
            if(enterosUsuario[j]>enterosUsuario[j+1]){
                auxiliar = enterosUsuario[j+1];
                enterosUsuario[j+1] = enterosUsuario[j];
                enterosUsuario[j] = auxiliar;
            }
        }
        
    }
    //Resultado arreglo organizado
    for (int i = 0; i < 5; i++)
    {
        printf("%d \t", enterosUsuario[i]);
    }
    
}