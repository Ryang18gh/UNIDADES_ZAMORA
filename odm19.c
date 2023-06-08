#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int res;
    char palabra1[10];
    char palabra2[10];
    printf("ingresa la palabra");
    scanf("%s", palabra1);
    scanf("%s", palabra2);
    res =strcmp(palabra1,palabra2);

    if(res<0){
        printf("La palabra 1 es menor");
        printf("La palabra 2 es mayor");
    }else if (res == 0) {
        printf("Son iguales");
    }else {
        printf("La palabra 1 es mayor");
        printf("La palabra 2 es menor");
    }
}