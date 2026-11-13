#include <stdio.h>

int main(){
/*Ejercicio 2: Uso de estructuras condicionales (if, switch). Escribir un programa que solicite al 
usuario un número entero. Si el número es par, mostrar un mensaje indicándolo. Si es impar, 
mostrar otro mensaje. Usar el switch para determinar si el número es positivo, negativo o 
cero. ¿Cuál es la diferencia entre if-else y switch? ¿Cuándo es más eficiente usar switch en 
lugar de if-else? */

int numeroEvaluar, numeroEvaluado;

printf("Ingrese un valor: \n");
scanf("%d", &numeroEvaluar);

numeroEvaluado = numeroEvaluar % 2;

if (numeroEvaluado==0){
    printf("El numero %d es entero\n", numeroEvaluar);
} else {
    printf("El numero %d es impar\n", numeroEvaluar);
}

//Verificar si el numero ingresado es positivo, negativo o cero.
int opcion;
if(numeroEvaluar>0){
    opcion = 1;
} else if(numeroEvaluar<0){
    opcion = -1;
} else {
    opcion = 0;
}

switch (opcion)
{
case 1:
    printf("El numero ingresado es Positivo");
    break;
case -1:
    printf("El numero ingresado es Negativo");
    break;
case 0:
    printf("El numero ingresado es Cero");
    break;
}
}
