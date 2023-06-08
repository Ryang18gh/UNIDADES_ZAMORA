#include<stdio.h>
#include<stdlib.h>
int main(){
    int numero = 1;
    while(numero<=1000){
        if(numero%7 > 0  ){
      printf("%d, ",numero);
        }
        numero ++; 
    }   
return 0;
}