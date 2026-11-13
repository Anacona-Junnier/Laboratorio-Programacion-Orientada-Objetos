#include <stdio.h>
#include <stdlib.h>

int main(){

    char str[50];

    printf("Introduzca un nombre no mayor a 49 caracteres\n");
    /*fgets(destino, tamaño, flujo);
    flujo:
        stdin: teclado.
        Un archivo abierto con fopen().
        Otros flujos definidos por el sistema.
    */
    fgets(str, sizeof(str), stdin);

    printf("%s", str);
    
    return 0;
}