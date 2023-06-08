#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
   
    char origen [10];
    char destino [10];
    char guardar [10];
    scanf ("%s", origen);
    scanf("%s", destino);
    printf("antes\n");
    printf("palabra 1: %s\n", origen);
    printf("palabra 1: %s\n", destino);
    strcpy(guardar, destino);
    strcpy (destino, origen);
    strcpy (origen, guardar);
    printf ("despues\n");
    printf ("palabra1 %s\n", origen);
    printf ("palabra2 %s\n", destino);

    return 0;

    
}
