#include <stdio.h>
#include <string.h>

void invertir(char cadena[]){
    int longitud, i;
    char temporal;

    longitud = strlen(cadena);

    for (i = 0; i < longitud / 2; i++) {
        temporal = cadena[i];
        cadena[i] = cadena[longitud - i - 1];
        cadena[longitud - i - 1] = temporal;
    }

    printf("La cadena invertida es: %s\n", cadena);
}

int main()
{
    char cadena[100];
    char caracter;
    int i = 0;

    printf("Ingrese una cadena: ");

    while ((caracter = getchar()) != '\n' && caracter != ' ') {
        cadena[i] = caracter;
        i++;
    }

    cadena[i] = '\0';

    invertir(cadena);

    return 0;
}