#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int opc, i, x;
    char nombre[50];
    char apellido[50];
    char comprar1[50];
    char comprar2[50];

    do
    {
        printf("\n************* MENU ********\n");
        printf("1. Para imprimir la cadena caracter por caracter \n");
        printf("2. Para usar la funcion copiar strcpy (cad1,cad2) \n");
        printf("3. Para usar la funcion concatenar strcat (cad1,cad2) \n");
        printf("4. Para usar la funcion comparar strcmp (cad1,cad2) \n");
        printf("5. Para usar la funcion longitud strlen () \n");
        printf("6. Para salir \n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opc);
        getchar(); // Limpiar el buffer de entrada

        switch (opc)
        {
            case 1:
                printf("Ingrese su nombre: \n");
                fgets(nombre, sizeof(nombre), stdin);
                for (i = 0; nombre[i] != '\0'; i++)
                {
                    printf("Nombre[%d] = %c\n", i, nombre[i]);
                }
                break;
            case 2:
                printf("Ingrese su nombre: \n");
                fgets(nombre, sizeof(nombre), stdin);
                
                printf("Nombre guardado es: %s \n", nombre);

                strcpy(nombre, "Michael Jackson");
                printf("Nombre cambiado es: %s \n", nombre);
                break;
            case 3:
                printf("Ingrese su nombre: \n");
                fgets(nombre, sizeof(nombre), stdin);
                printf("Ingrese su apellido: \n");
                fgets(apellido, sizeof(apellido), stdin);
                strcat(nombre, apellido);
                printf("El nombre concatenado es: %s \n", nombre);
                break;
            case 4:
                printf("Ingrese la cadena a comparar: \n");
                fgets(comprar1, sizeof(comprar1), stdin);
                printf("Ingrese la segunda cadena: \n");
                fgets(comprar2, sizeof(comprar2), stdin);
                x = strcmp(comprar1, comprar2);
                if (x == 0)
                {
                    printf("Las cadenas son iguales\n");
                }else {
                    printf("Las cadenas no son iguales\n");
                }
                break;
            case 5:
                printf("Ingrese la cadena para calcular su longitud: \n");
                fgets(nombre, sizeof(nombre), stdin);
                printf("La longitud de la cadena es: %lu\n", strlen(nombre));
                break;
            default:
                printf("Opcion no valida\n");
                break;
        }
    } while (opc != 6);
    
    return 0;
}