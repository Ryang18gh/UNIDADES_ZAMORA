#include<stdio.h>
#include<stdlib.h>
int main(){
int numeroU,suma;
int i;
    printf("Ingrese el valor que se le asignara  : \n");
    scanf("%d",&numeroU);
for(i=0; i<=numeroU;i++){

suma+=i;
//printf("datos:  %d",suma);

}
printf("La suma de todos los valores es: %d, \n",suma);
    return 0;
} 