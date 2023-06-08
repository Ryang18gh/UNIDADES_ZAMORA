#include<stdio.h>
#include<stdlib.h>
int main(){
int Vector[100];
int i;
i=0;
while(i<100){
    Vector[i]=i*2;
    printf("2*%d = %d \n",i,Vector[i]);
    i++;}
    return 0;}