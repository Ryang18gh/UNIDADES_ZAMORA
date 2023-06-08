#include<stdio.h>
#include<stdlib.h>
int main(){
    int HST;
    int salariod;
    int talario;
    int PH =150;
    printf("Ingrese las horas semanales trabajadas \n");
    scanf("%d",&HST);
    if(HST<=40){
        talario =HST*40;
        printf("El salario es: %d \n",talario);
    }else{
    salariod= (40*PH + (PH*1.5*(HST-40)));
    printf("El salario es: %d \n",salariod);
    }
    return 0;
}