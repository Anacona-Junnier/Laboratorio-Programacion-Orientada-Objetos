/*Ejercicio  4:  Modularidad  con  funciones.  Escribir  un  programa  que  solicite  al  usuario  dos 
números enteros. Realizar las cuatro operaciones básicas (+, -, *, /) definiendo funciones y 
mostrar  los  resultados.  ¿Por  qué  es  importante  dividir  el  código  en  funciones?  ¿Cómo 
podríamos reutilizar las funciones definidas en otro programa? */

#include <stdio.h>

float sumar(float a, float b){
    return a+b;
}

float resta(float a, float b){
    return a-b;
}

float multiplicacion(float a, float b){
    return a*b;
}

float division(float a, float b){
    return a/b;
}

int main(){
    int opcion;
    int bandera = 1;
    float primerNumero, segundoNumero;

    do
    {
        printf("*******MENU*******\n");
        printf("1. SUMA\n");
        printf("2. RESTA\n");
        printf("3. MULTIPLICACION\n");
        printf("4. DIVISION\n");
        printf("Ingrese el numero de su opcion requerida: \n");
        scanf("%d", &opcion);

        if (opcion<1 || opcion>4)
        {
            printf("ERROR: opción incorrecta, intentelo nuevamente. \n");
        }else{
            bandera = 0;
        }
        
    } while (bandera == 1);
    
    printf("Ingrese el primer valor: \n");
    scanf("%f", &primerNumero);

    printf("Ingrese el segundo valor: \n");
    scanf("%f", &segundoNumero);


    switch (opcion)
    {
    case 1:
        printf("RESULTADO SUMA: %f", sumar(primerNumero, segundoNumero));
        break;
    case 2:
        printf("RESULTADO RESTA: %f", resta(primerNumero, segundoNumero));
        break;
    case 3:
        printf("RESULTADO MULTIPLICACION: %f", multiplicacion(primerNumero, segundoNumero));
        break;
    case 4:
        if(segundoNumero != 0){
            printf("RESULTADO DIVISION: %f", division(primerNumero, segundoNumero));
        }else{
            printf("ERROR: el Divisor NO puede ser CERO 0");
        }
        break;
    }
    return 0;
}

