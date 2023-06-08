#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int len, i;
    char origen[20];
    char destino[20];
    printf("Ingrese el origen: \n");
    scanf("%s", origen);
    scanf("%s", destino);
    len = strlen (origen);
    for (i=0; i<len;i++){
        strcat(origen,destino);
    }
    printf ("%s", origen);
    
    
    return 0;
}