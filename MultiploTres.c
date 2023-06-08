#include<stdio.h>
#include<stdlib.h>
int main(){
    int numero = 1;

    while(numero<=100){

        if(numero%3 == 0){
      printf("%d, ",numero);
        }
        numero ++; 
    }  
return 0;
}