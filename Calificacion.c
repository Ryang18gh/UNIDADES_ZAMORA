#include <stdio.h>
int main(){
int calificacion;
 printf("Ingrese su calificacion\n");
 scanf("%d",&calificacion);
    if(calificacion>=8){
        printf("Felicidades has aprobado el curso\n");  
         }else{
            printf("La calificacion minima aprobatoria es: 8 \n");}
 return 0;
 }