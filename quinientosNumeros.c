#include<stdio.h>
#include<stdlib.h>
int main(){
    int numero =1;

    while(numero<=500){
    printf("%d",numero*numero);
    printf("%d",numero*numero*numero);
    printf("%d",numero);
    numero ++;
}
printf("\n");
return 0;
}