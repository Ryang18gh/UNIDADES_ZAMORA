#include<stdio.h>
#include<stdlib.h>
int main(){
int Vector[20];
int i,valor;
double multi,suma;
suma=0;
multi=1;
i=0;
while(i<20){
    printf("Ingrese el valor que se le asignara  : \n");
    scanf("%d",&Vector[i]);

    suma+=Vector[i];
    multi*=Vector[i];
    i++;
}
printf("El resultado del promedio  es: %f  \n",suma/20);
printf("El resultado de la multiplicacion es: %f  \n",multi);
    return 0;
} 