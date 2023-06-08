#include <stdio.h>
#include <string.h>

int main()
{
    char palabra[100];
    int longitud, contador[26] = {0}, i, index;

    printf("Introduzca una palabra: ");
    scanf("%s", palabra);

    longitud = strlen(palabra);

    for(i = 0; i < longitud; i++)
    {
        index = palabra[i] - 'a';
        contador[index]++;
    }

    printf("Las ocurrencias de cada letra en la palabra \"%s\" son:\n", palabra);

    for(i = 0; i < 26; i++)
    {
        if(contador[i] != 0)
            printf("%c : %d\n", i+'a', contador[i]);
    }

    return 0;
}