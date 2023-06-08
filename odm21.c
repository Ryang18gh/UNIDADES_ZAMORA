#include <stdio.h>
#include <string.h>

int main()
{
    char palabra[100];
    int longitud, i, esPolindromo = 1;

    printf("Introduzca una palabra: ");
    scanf("%s", palabra);

    longitud = strlen(palabra);

    for(i = 0; i < longitud/2; i++)
    {
        if(palabra[i] != palabra[longitud-i-1])
        {
            esPolindromo = 0;
            break;
        }
    }

    if(esPolindromo == 1)
        printf("%s es un palíndromo.\n", palabra);
    else
        printf("%s no es un palíndromo.\n", palabra);

    return 0;
}
