#include <stdio.h>
int main(){
int anios,sueldo,sueldoA;
 printf("Ingrese los años de antiguedad en el trabajo\n");
 scanf("%d",&anios);
    if(anios>=5){
         printf("Ingrese su sueldo mensual\n");
        scanf("%d",&sueldo);
        sueldoA=(sueldo*0.10);
        if(sueldoA>=1000){
           printf("Felicidades usted es apto para el credito"); 
        }else{
            printf("Losiento no es apto para el credito\n");
        }   
    }else{
        printf("Losiento no es apto para el credito\n");
    }
 return 0;
}