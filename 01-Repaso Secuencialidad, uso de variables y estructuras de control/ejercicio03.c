/*Escribir un programa en C que implemente diferentes estructuras repetitivas para resolver
varias tareas. Primero, utilizar un bucle for para imprimir los primeros 15 números naturales
en orden descendente. Luego, emplear un bucle while para mostrar los números impares
hasta 30 en orden inverso. Posteriormente, con un bucle do-while, calcular el factorial de
un número ingresado por el usuario, asegurando que el número sea válido. Además,
solicitar al usuario un número n y calcular la suma de los primeros n números naturales
usando un bucle for. Finalmente, explicar la diferencia entre for, while y do-while,
destacando sus aplicaciones y cuándo es más eficiente utilizar cada uno.*/

#include <stdio.h>

int main(){

    //Bucle FOR
    for(int i=15; i>=0; i--){
        printf("Numero: %d\n", i);
    }

    //Bucle WHILE
    int bandera = 30;
    while (bandera<=30 && bandera>=0)
    {
        if((bandera%2) == 1){
            printf("Numero Impar: %d\n", bandera);
        }
        bandera--;
    }
    
    //Bucle DO-WHILE
    //Validar numero ingresado correcto
    int numeroUsuario;
    long long factorial = 1;
    int i = 1;
    do
    {
        printf("Ingrese un numero para conocer su Factorial: \n");
        scanf("%d", &numeroUsuario);

        if (numeroUsuario<0)
        {
            printf("Numero incorrecto. Tiene que ser mayor a cero 0. Intentelo nuevamente \n");
        }
        
    } while (numeroUsuario<0);

    //Factorial
    do
    {
        factorial = factorial * i;
        
        i++;
    } while (i <= numeroUsuario);
    
    printf("El Factorial de %d es: %lld \n", numeroUsuario, factorial);
    
    //SUMA CON BUCLE FOR
    int numero;
    printf("Ingrese un valor: \n");
    scanf("%d", &numero);

    for (int i = 0; i <= numero; i++)
    {
        printf("%d \n", i);
    }
    
}