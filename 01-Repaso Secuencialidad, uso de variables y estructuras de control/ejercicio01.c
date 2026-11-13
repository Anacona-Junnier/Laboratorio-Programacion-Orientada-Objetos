#include <stdio.h>

int main(){
/*Ejercicio 1: Secuencialidad en C (entrada/salida, operaciones básicas). Escribir un programa 
que solicite al usuario dos números enteros. Realizar las cuatro operaciones básicas (+, -, *, 
/) y mostrar los resultados. ¿Cómo se manejan los datos de entrada y salida en C?*/

int primeroNumero, segundoNumero;
float resultadoDivision;

printf("Ingrese su primer numero entero:\n ");
scanf("%d", &primeroNumero);

printf("Ingrese su segundo numero entero:\n ");
scanf("%d", &segundoNumero);

printf("SUMA: %d + %d = %d \n", primeroNumero, segundoNumero, primeroNumero+segundoNumero);
printf("RESTA: %d - %d = %d \n", primeroNumero, segundoNumero, primeroNumero-segundoNumero);
printf("MULTIPLICACION: %d * %d = %d \n", primeroNumero, segundoNumero, primeroNumero*segundoNumero);
resultadoDivision = (float)primeroNumero / segundoNumero;
printf("DIVISION: %d / %d = %.3f \n", primeroNumero, segundoNumero, resultadoDivision);
return 0;
}