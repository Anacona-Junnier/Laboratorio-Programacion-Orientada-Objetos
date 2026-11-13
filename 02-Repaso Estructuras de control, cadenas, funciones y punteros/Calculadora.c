/*Crear una calculadora simple con funciones*/

#include <stdio.h>
#include <stdlib.h>

int sumar(int a, int b) {
    return a + b;
}

int restar(int a, int b) {
    return a - b;
}

float multiplicar(float a, float b) {
    return a * b;
}

float dividir(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: División por cero no permitida.\n");
        return 0; // Retorna 0 en caso de división por cero
    }
}

int main() {

    int opcion, suma1, resta;
    float multiplicacion, division, num1, num2;

    do
    {
        printf("\n ****************** Bienvenido a la calculadora ******************\n");
        printf("Seleccione una opción:\n");
        printf("1. Sumar\n");
        printf("2. Restar\n");
        printf("3. Multiplicar\n");
        printf("4. Dividir\n");
        printf("5. Salir\n");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("Ingrese el primer número: ");
                scanf("%d", &suma1);
                printf("Ingrese el segundo número: ");
                scanf("%d", &resta);
                printf("Resultado: %d\n", sumar(suma1, resta));
                break;
            case 2:
                printf("Ingrese el primer número: ");
                scanf("%d", &suma1);
                printf("Ingrese el segundo número: ");
                scanf("%d", &resta);
                printf("Resultado: %d\n", restar(suma1, resta));
                break;
            case 3:
                printf("Ingrese el primer número: ");
                scanf("%f", &num1);
                printf("Ingrese el segundo número: ");
                scanf("%f", &num2);
                printf("Resultado: %.2f\n", multiplicar(num1, num2));
                break;
            case 4:
                printf("Ingrese el primer número: ");
                scanf("%f", &num1);
                printf("Ingrese el segundo número: ");
                scanf("%f", &num2);
                division = dividir(num1, num2);
                if (num2 != 0) {
                    printf("Resultado: %.2f\n", division);
                }
                break;
            case 5:
                printf("Saliendo de la calculadora...\n");
                break;
            default:
                printf("Opción inválida. Por favor, seleccione una opción válida.\n");
        }
    } while (opcion != 5);

    return 0;
    
}