#include <stdio.h>
#include <stdlib.h>

int main(){

    char str[50];

    printf("Introduzca un nombre no mayor a 49 caracteres\n");
    gets(str);

    printf("%s", str);
    
    return 0;
}